#include <cmath>
#include <iostream>
#include "keyboard_manager.h"
#include "allegro5/allegro.h"
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_native_dialog.h"
#include "allegro5/allegro_primitives.h"
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_color.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include "world.h"
#include <string>
#include <sstream>
using namespace std;
using namespace csis3700;

const float FPS = 60;

const size_t WIDTH=1920;
const size_t HEIGHT=1080;
//fuck
int main(int argc, char **argv){
    ALLEGRO_BITMAP* background=nullptr;

  srand(time(NULL));

   if(!al_init()) {
     cerr << "Failed to initialize allegro!" << endl;
     exit(1);
   }

   if(!al_init_image_addon()) {
     cerr << "Failed to initialize al_init_image_addon!" << endl;
     exit(1);
   }
   if(!al_install_audio()) {
     cerr << "Failed to initialize al_install_audio!" << endl;
     exit(1);
   }
   if(!al_init_acodec_addon()) {
     cerr << "Failed to initialize al_acodec_image_addon!" << endl;
     exit(1);
   }
   if(!al_init_font_addon()) {
     cerr << "Failed to initialize al_init_font_addon!" << endl;
     exit(1);
   }
   if(!al_init_ttf_addon()) {
     cerr << "Failed to initialize al_init_ttf_addon!" << endl;
     exit(1);
   }

   if(!al_install_mouse()) {
     cerr << "Failed to install mouse." << endl;
     exit(1);
   }

   if(!al_install_keyboard()) {
     cerr << "Failed to install keyboard." << endl;
     exit(1);
   }

   // This option causes the display to wait for VSYNC before flipping
   // pages. This can help to avoid tearing. Comment this out if you
   // are having refresh problems.
   al_set_new_display_option(ALLEGRO_VSYNC, 1, ALLEGRO_REQUIRE);

   ALLEGRO_DISPLAY *display = al_create_display(WIDTH, HEIGHT);

   ALLEGRO_FONT* font1 = al_load_font("arial.ttf",72,0);
   ALLEGRO_SAMPLE* music = nullptr;
   ALLEGRO_SAMPLE_INSTANCE* musici = nullptr;
   al_reserve_samples(10);
   music = al_load_sample("music.ogg");
   musici = al_create_sample_instance(music);

   al_set_sample_instance_playmode(musici,ALLEGRO_PLAYMODE_LOOP);

   al_attach_sample_instance_to_mixer(musici,al_get_default_mixer());
   if(!display) {
      al_show_native_message_box(display, "Error", "Error", "Failed to initialize display!",
                                 NULL, ALLEGRO_MESSAGEBOX_ERROR);
      return 0;
   }

   ALLEGRO_TIMER *timer = al_create_timer(1.0 / FPS);
   if(!timer) {
     al_show_native_message_box(display, "Error", "Error", "Failed to create timer!",
                                NULL, ALLEGRO_MESSAGEBOX_ERROR);
      al_destroy_display(display);
     return -1;
   }

   ALLEGRO_EVENT_QUEUE *event_queue = al_create_event_queue();

   if(!event_queue) {
     al_show_native_message_box(display, "Error", "Error", "Failed to create event queue!",
                                NULL, ALLEGRO_MESSAGEBOX_ERROR);
      al_destroy_display(display);
      al_destroy_timer(timer);
      return -1;
   }

   al_register_event_source(event_queue, al_get_display_event_source(display));
   al_register_event_source(event_queue, al_get_timer_event_source(timer));
   al_register_event_source(event_queue, al_get_mouse_event_source());
   al_register_event_source(event_queue, al_get_keyboard_event_source());
   al_start_timer(timer);

   csis3700::world world;

   double time = 0;
   bool redraw = true; // paint the first time through
   ALLEGRO_EVENT ev;
   al_play_sample_instance(musici);
   do
   {
      al_wait_for_event(event_queue, &ev);

      if(ev.type == ALLEGRO_EVENT_TIMER) {
         redraw = true;
      }

      world.handle_event(ev);

      if(redraw && al_is_event_queue_empty(event_queue)) {
         redraw = false;
         time += 1/FPS;

         world.advance_by_time(1/FPS);

         world.draw();

         al_draw_text(font1, al_map_rgb(0,0,0),0, 20,0,"Score: ");
         stringstream s;
         string string_cheese;
         s << world.get_score();
         string_cheese=s.str();
         al_draw_text(font1,al_map_rgb(0,0,0),215,25,0,string_cheese.c_str());

         al_draw_text(font1, al_map_rgb(0,0,0),0, 90,0,"Level: ");
         stringstream s2;
         string string_cheese2;
         s2 << world.get_level();
         string_cheese2=s2.str();
         al_draw_text(font1,al_map_rgb(0,0,0),215,90,0,string_cheese2.c_str());

         al_draw_text(font1, al_map_rgb(100,0,0),600, 20,0,"Collect 10 coins to advance.");

         al_flip_display();
      }
   } while(!world.should_exit() && ev.type != ALLEGRO_EVENT_DISPLAY_CLOSE);
      al_stop_sample_instance(musici);
      ALLEGRO_DISPLAY *display1 = NULL;
      //al_draw_circle(100,100,50,al_map_rgb(0,0,0),3);
      al_draw_text(font1,al_map_rgb(255,0,0),800,510,0,"Game Over!");
      al_flip_display();
      al_rest(3);
      al_destroy_display(display1);
      al_destroy_timer(timer);
      al_destroy_display(display);
      al_destroy_event_queue(event_queue);
      al_destroy_font(font1);
      al_destroy_sample(music);
      al_destroy_sample_instance(musici);
   return 0;
}
