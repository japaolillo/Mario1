#include "player_sprite.h"
#include "image_library.h"
#include "image_sequence.h"
#include "vec2d.h"
#include "collision.h"
#include "keyboard_manager.h"
#include <cmath>
#include <iostream>
using namespace std;

namespace csis3700 {

  player_sprite::player_sprite(float initial_x, float initial_y) : phys_sprite(initial_x, initial_y) {
        this->create_image_sequence();
        this->create_image_sequence_switch();
        player_floor = 700;
  }

  bool player_sprite::is_player() const
  {
      return true;
  }
  bool player_sprite::is_enemy() const
  {
      return false;
  }

  void player_sprite::advance_by_time(double dt) {
    if (is_alive) {
        ltime += 1;
        if(keyboard_manager::get()->is_key_down(ALLEGRO_KEY_L)) //Shapeshift
        {
            if(is_luigi==false && ltime > 30) {
                is_luigi=true;
                ltime = 0;
            }
            else if( is_luigi==true && ltime > 30) {
                is_luigi=false;
                ltime = 0;
            }
        }
        if (get_y() < player_floor) //Acceleration of gravity
        {
            set_acceleration(vec2d(get_acceleration().get_x(), 10000));
        }
        if (keyboard_manager::get()->is_key_down(ALLEGRO_KEY_LEFT))
        {
            if(is_luigi==true)
            set_image_sequence(&lwalk);
            else
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
                set_velocity(vec2d(-1000,get_velocity().get_y()));
            }
            if (get_y() > player_floor)
            {
                set_velocity(vec2d(-1000,0));
                set_position(vec2d(get_position().get_x(), player_floor));
            }
        }
        else if (keyboard_manager::get()->is_key_down(ALLEGRO_KEY_RIGHT))
        {
            if(is_luigi==true)
            set_image_sequence(&lwalk);
            else
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
                set_velocity(vec2d(1000,get_velocity().get_y()));
            }
            if (get_y() > player_floor)
            {
                set_acceleration(vec2d(get_acceleration().get_x(),0));
                set_velocity(vec2d(1000,0));
                set_position(vec2d(get_position().get_x(), player_floor));
            }
        }
        else if (keyboard_manager::get()->is_key_down(ALLEGRO_KEY_UP))
        {
            if(is_luigi==true)
            set_image_sequence(&lwalk);
            else
                set_image_sequence(&walk);
            if (get_y() == player_floor)
            {
                set_velocity(vec2d(0,-3000));
            }
            if (get_y() > player_floor)
            {
                set_acceleration(vec2d(get_acceleration().get_x(),0));
                set_velocity(vec2d(0,0));
                set_position(vec2d(get_position().get_x(), player_floor));
            }
        }
        else
        {

            if (get_y() == player_floor)
                set_velocity(vec2d(0,0));
            if (get_y() > player_floor)
            {
                set_position(vec2d(get_position().get_x(), player_floor));
                set_acceleration(vec2d(get_acceleration().get_x(), 0));
                set_velocity(vec2d(get_velocity().get_x(),0));
            }
            if(is_luigi==true)
                set_image_sequence(&lstand);
            else
                set_image_sequence(&stand);
        }
    }
    else
    {
        set_image_sequence(&lstand);
        set_velocity(vec2d(0,0));
    }
    phys_sprite::advance_by_time(dt);
  }
    void player_sprite::create_image_sequence()
    {
        //146 x 194
        image_library *il = image_library::get();
        walk.add_image(il->get("mariowalk1.png"), 0);
        walk.add_image(il->get("mariowalk2.png"), 0.1);
        walk.add_image(il->get("mariowalk3.png"), 0.1);
        walk.add_image(il->get("mariowalk2.png"), 0.1);
        stand.add_image(il->get("mariowalk1.png"),0);
    }
    void player_sprite::create_image_sequence_switch() {
        image_library *il2 = image_library::get();
        lwalk.add_image(il2->get("luigiwalk1.png"), 0);
        lwalk.add_image(il2->get("luigiwalk2.png"), 0.1);
        lwalk.add_image(il2->get("luigiwalk3.png"), 0.1);
        lwalk.add_image(il2->get("luigiwalk2.png"), 0.1);
        lstand.add_image(il2->get("luigiwalk1.png"),0);
    }

    void player_sprite::kill_player()
    {
        is_alive = false;
    }
}
