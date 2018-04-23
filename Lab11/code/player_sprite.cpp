#include "player_sprite.h"
#include "image_library.h"
#include "image_sequence.h"
#include "vec2d.h"
#include "collision.h"
#include "keyboard_manager.h"
#include <cmath>
using namespace std;

namespace csis3700 {

  player_sprite::player_sprite(float initial_x, float initial_y) : phys_sprite(initial_x, initial_y) {
        this->create_image_sequence();
  }

  void player_sprite::advance_by_time(double dt) {
    if (keyboard_manager::get()->is_key_down(ALLEGRO_KEY_LEFT))
    {
        //set_velocity(vec2d(-500,0));
        if (get_velocity().get_x() > -500)
            set_acceleration(vec2d(-4000,0));

        phys_sprite::advance_by_time(dt);
    }
    else if (keyboard_manager::get()->is_key_down(ALLEGRO_KEY_RIGHT))
    {
        set_acceleration(vec2d(500,0));
        if (get_velocity().get_x() < 500)
            set_acceleration(vec2d(4000,0));
            phys_sprite::advance_by_time(dt);
    }
    else if (keyboard_manager::get()->is_key_down(ALLEGRO_KEY_UP))
    {
      set_velocity(vec2d(0,-50));
    }
    else if (keyboard_manager::get()->is_key_down(ALLEGRO_KEY_DOWN))
    {
      set_velocity(vec2d(0,50));
    }
    else
    {
        set_velocity(vec2d(0,0));
    }
    //phys_sprite::advance_by_time(dt);
  }
  void player_sprite::create_image_sequence() {
    image_sequence *s = new image_sequence();
    image_library *il = image_library::get();
    s->add_image(il->get("mariowalk1.png"), 0);
    s->add_image(il->get("mariowalk2.png"), 0.1);
    s->add_image(il->get("mariowalk3.png"), 0.1);
    s->add_image(il->get("mariowalk2.png"), 0.1);
    set_image_sequence(s);
  }

}
