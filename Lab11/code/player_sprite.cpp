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
        player_floor = 700;
  }

  void player_sprite::advance_by_time(double dt) {
    if(keyboard_manager::get()->was_key_pressed(ALLEGRO_KEY_L)){
        create_image_sequence_switch();
    }
    if (keyboard_manager::get()->is_key_down(ALLEGRO_KEY_LEFT))
    {
        set_image_sequence(&walk);
        if (get_y() == player_floor)
        {
            if (keyboard_manager::get()->is_key_down(ALLEGRO_KEY_UP))
                set_velocity(vec2d(-1000,-3000));
            else
                set_velocity(vec2d(-1000,get_velocity().get_y()));
        }
        if (get_y() < player_floor)
        {
            set_acceleration(vec2d(get_acceleration().get_x(),10000));
            set_velocity(vec2d(-1000,get_velocity().get_y()));
        }
        if (get_y() > player_floor)
        {
            set_acceleration(vec2d(get_acceleration().get_x(),0));
            set_velocity(vec2d(-1000,0));
            set_position(vec2d(get_position().get_x(), player_floor));
        }
        phys_sprite::advance_by_time(dt);
    }
    else if (keyboard_manager::get()->is_key_down(ALLEGRO_KEY_RIGHT))
    {
        set_image_sequence(&walk);
        if (get_y() == player_floor)
        {
            if (keyboard_manager::get()->is_key_down(ALLEGRO_KEY_UP))
                set_velocity(vec2d(1000,-3000));
            else
                set_velocity(vec2d(1000,get_velocity().get_y()));
        }
        if (get_y() < player_floor)
        {
            set_acceleration(vec2d(get_acceleration().get_x(),10000));
            set_velocity(vec2d(1000,get_velocity().get_y()));
        }
        if (get_y() > player_floor)
        {
            set_acceleration(vec2d(get_acceleration().get_x(),0));
            set_velocity(vec2d(1000,0));
            set_position(vec2d(get_position().get_x(), player_floor));
        }
        phys_sprite::advance_by_time(dt);
    }
    else if (keyboard_manager::get()->is_key_down(ALLEGRO_KEY_UP))
    {
        set_image_sequence(&walk);
        if (get_y() == player_floor)
        {
            set_velocity(vec2d(0,-3000));
            set_acceleration(vec2d(get_acceleration().get_x(),10000));
        }
        if (get_y() < player_floor)
            set_acceleration(vec2d(get_acceleration().get_x(),10000));
        if (get_y() > player_floor)
        {
            set_acceleration(vec2d(get_acceleration().get_x(),0));
            set_velocity(vec2d(0,0));
            set_position(vec2d(get_position().get_x(), player_floor));
        }
        phys_sprite::advance_by_time(dt);
    }
    else if (keyboard_manager::get()->is_key_down(ALLEGRO_KEY_DOWN))
    {

    }
    else
    {

        if (get_y() == player_floor)
        set_velocity(vec2d(0,0));
        else if (get_y() < player_floor)
        {
            set_acceleration(vec2d(0,10000));
            phys_sprite::advance_by_time(dt);
        }
        else if (get_y() > player_floor)
        {
            set_position(vec2d(get_position().get_x(), player_floor));
            set_acceleration(vec2d(get_acceleration().get_x(), 0));
            set_velocity(vec2d(get_velocity().get_x(),0));
            phys_sprite::advance_by_time(dt);
        }
        set_image_sequence(&stand);
    }
    //phys_sprite::advance_by_time(dt);
  }
  void player_sprite::create_image_sequence() {
    image_library *il = image_library::get();
    walk.add_image(il->get("mariowalk1.png"), 0);
    walk.add_image(il->get("mariowalk2.png"), 0.1);
    walk.add_image(il->get("mariowalk3.png"), 0.1);
    walk.add_image(il->get("mariowalk2.png"), 0.1);
    stand.add_image(il->get("mariowalk1.png"),0);
  }
  void player_sprite::create_image_sequence_switch() {
    image_sequence *s2 = new image_sequence();
    image_library *il2 = image_library::get();
    s2->add_image(il2->get("luigiwalk1.png"), 0);
    s2->add_image(il2->get("luigiwalk2.png"), 0.1);
    s2->add_image(il2->get("luigiwalk3.png"), 0.1);
    s2->add_image(il2->get("luigiwalk2.png"), 0.1);
    set_image_sequence(s2);
    }
}
