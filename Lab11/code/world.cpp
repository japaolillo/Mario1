#include "world.h"
#include <cassert>
#include <algorithm>
#include "sprite.h"
#include "allegro5/allegro.h"
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_native_dialog.h"
#include "allegro5/allegro_primitives.h"
#include "player_sprite.h"
#include "obstruction_sprite.h"
#include "collision.h"
#include "image_library.h"
#include "enemy.h"
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include "coin_sprite.h"

using namespace std;

namespace csis3700 {

  const float gravity_acceleration = 600;

  void free_sprite(sprite* s) {
    delete s;
  }

  world::world() {
      score = 0;
      background=image_library::get()->get("background.png");
      sprite *player = new player_sprite(0,700);
      //sprite *enemy1 = new enemy(500,880);
      sprite *safetycoin = new coin_sprite(0, -10000);
      //sprite *obstruction = new obstruction_sprite(500, 660);
      sprites.push_back(player);
      //sprites.push_back(enemy1);
      //sprites.push_back(obstruction);
      for (size_t i = 1; i < 101; i++)
      {
          sprites.push_back(new enemy(800*i , 880, i));
      }
      for (size_t i = 1; i < 101; i++)
      {
          sprites.push_back(new coin_sprite(500*i,850));
      }
      for (size_t i = 1; i < 101; i++)
      {
          sprites.push_back(new obstruction_sprite(800*i, 850));
      }
      sprites.push_back(safetycoin);

  }

  world::world(const world& other) {
    assert(false); // do not copy worlds
  }

  world& world::operator=(const world& other) {
    assert(false); // do not assign worlds
  }

  world::~world() {
    for_each(sprites.begin(), sprites.end(), free_sprite);
    sprites.clear();
  }

  void world::handle_event(ALLEGRO_EVENT ev) {
  }

  void world::add_score()
  {
      score++;
  }


  void world::resolve_collisions() {
    vector<collision> collisions;
    for(auto i=sprites.begin(); i != sprites.end(); ++i)
      for(auto j=i+1; j != sprites.end(); j++)
        if ((*i)->collides_with(**j))
          collisions.push_back(collision(*i, *j));
    handle_collisions(collisions);
  }

  void world::handle_collisions(std::vector<collision>& c)
  {
      for(auto it = c.begin(); it != c.end(); ++it)
        it->resolve(this);
  }

  void world::advance_by_time(double dt) {
    for(vector<sprite*>::iterator it = sprites.begin(); it != sprites.end(); ++it)
      (*it)->advance_by_time(dt);
    resolve_collisions();
    if (score == 10 && level == 1)
        change_level();
  }

  void world::change_level()
  {
      level = 2;
      while (!(sprites.back()->is_player()))
        sprites.pop_back();
      score = 0;
      sprites.back()->set_position(vec2d(0,800));
      background=image_library::get()->get("background2.png");
      //sprite *player = new player_sprite(0,700);
      //sprite *enemy1 = new enemy(500,880);
      sprite *safetycoin = new coin_sprite(0, -10000);
      //sprite *obstruction = new obstruction_sprite(500, 660);
      //sprites.push_back(player);
      //sprites.push_back(enemy1);
      //sprites.push_back(obstruction);
      for (size_t i = 1; i < 31; i++)
      {
          sprites.push_back(new enemy(400*i , 880, i));
      }
      for (size_t i = 1; i < 21; i++)
      {
          sprites.push_back(new coin_sprite(500*i,850));
      }
      for (size_t i = 1; i < 31; i++)
      {
          sprites.push_back(new obstruction_sprite(400*i, 850));
      }
      sprites.push_back(safetycoin);
  }

  void world::draw() {
        ALLEGRO_TRANSFORM t;
        ALLEGRO_TRANSFORM t2;
        sprite* player = sprites.front();
        al_identity_transform(&t);
        if (player != nullptr)
          al_translate_transform(&t, -player->get_x()+200, 0);
        al_use_transform(&t);
        al_clear_to_color(al_map_rgb(255,255,255));
        int background_width = al_get_bitmap_width(background);
        int bn=player->get_x()/background_width;
        al_draw_bitmap(background,bn*background_width-background_width, 0, 0);
        al_draw_bitmap(background, bn*background_width, 0, 0);
        al_draw_bitmap(background,bn*background_width+background_width, 0, 0);
        for(vector<sprite*>::iterator it = sprites.begin(); it != sprites.end(); ++it)
          (*it)->draw();
          al_identity_transform(&t2);
          al_use_transform(&t2);
  }

  bool world::should_exit() {
      if(sprites.front()->is_player() == false)
      {
          //al_draw_rectangle(100,100,100,100,al_map_rgb(255,255,255),1.2);
          return true;
      }
    return false;
  }

  void world::remove_sprite(sprite *s)
  {
      size_t i = 0;
      for (vector<sprite*>::iterator it = sprites.begin(); it != sprites.end(); ++it)
      {
            //assert(sprites.front()->is_player());
            if (**it == *s)
                if (s == sprites.back())
                    sprites.pop_back();
                else
                    sprites.erase(sprites.begin() + i);
            i++;
      }
  }

}
