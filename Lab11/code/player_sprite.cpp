#include "player_sprite.h"
#include "image_library.h"
#include "image_sequence.h"
#include "vec2d.h"
#include "collision.h"
#include "keyboard_manager.h"
#include <cmath>
#include <iostream>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
using namespace std;

namespace csis3700 {

  player_sprite::player_sprite(float initial_x, float initial_y) : phys_sprite(initial_x, initial_y) {
        this->create_image_sequence();
        this->create_image_sequence_switch();
        player_floor = 768;
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
    if (is_luigi)
        player_floor = 754;
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
        }/*
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
                    set_velocity(vec2d(get_velocity().get_x(),-3000));
                else
                {
                    if (get_velocity().get_x() >= -1000)
                        set_acceleration(vec2d(-4000,get_acceleration().get_y()));
                    else
                    {
                        set_acceleration(vec2d(0,0));
                        set_velocity(vec2d(-1000,get_velocity().get_y()));
                    }
                }
            }
            if (get_y() < player_floor)
            {
                //set_velocity(vec2d(-1000,get_velocity().get_y()));
                if (get_velocity().get_x() > -1000)
                    set_acceleration(vec2d(-4000,get_acceleration().get_y()));
                else
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
                set_position(vec2d(get_position().get_x(), player_floor));
                if (keyboard_manager::get()->is_key_down(ALLEGRO_KEY_UP))
                {
                    set_velocity(vec2d(get_velocity().get_x(),-3000));
                    if (get_velocity().get_x() <= 1000)
                        set_acceleration(vec2d(4000, get_acceleration().get_y()));
                    else
                    {
                        set_acceleration(vec2d(0,0));
                        set_velocity(vec2d(1000,get_velocity().get_y()));
                    }
                }
                else
                {
                    if (get_velocity().get_x() <= 1000)
                        set_acceleration(vec2d(4000,get_acceleration().get_y()));
                    else
                    {
                        set_acceleration(vec2d(0,0));
                        set_velocity(vec2d(1000,get_velocity().get_y()));
                    }
                }
            }
            if (get_y() < player_floor)
            {
                //set_velocity(vec2d(1000,get_velocity().get_y()));
                if (get_velocity().get_x() < 1000)
                    set_acceleration(vec2d(4000,get_acceleration().get_y()));
                else
                    set_velocity(vec2d(1000,get_velocity().get_y()));
            }
            if (get_y() > player_floor)
            {
                set_position(vec2d(get_position().get_x(), player_floor));
                if (get_velocity().get_x() <= 1000)
                    set_acceleration(vec2d(4000,0));
                else
                {
                    set_acceleration(vec2d(0,0));
                    set_velocity(vec2d(1000,0));
                }
                //set_acceleration(vec2d(get_acceleration().get_x(),0));
                //set_velocity(vec2d(1000,0));
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
                set_acceleration(vec2d(0,0));
                set_velocity(vec2d(0,0));
                set_position(vec2d(get_position().get_x(), player_floor));
            }
            if (get_y() < player_floor)
            {
                set_acceleration(vec2d(0,get_acceleration().get_y()));
            }
        }
        else
        {

            if (get_y() == player_floor)
            {
                //set_velocity(vec2d(0,0));
                if (get_velocity().get_x() > 100)
                    set_acceleration(vec2d(-4000,0));
                else if (get_velocity().get_x() < -100)
                    set_acceleration(vec2d(4000,0));
                else
                    set_velocity(vec2d(0,0));
            }
            if (get_y() > player_floor)
            {
                set_position(vec2d(get_position().get_x(), player_floor));
                set_acceleration(vec2d(get_acceleration().get_x(), 0));
                set_velocity(vec2d(get_velocity().get_x(),0));
            }
            if (get_y() < player_floor)
                if (get_velocity().get_x() != 0)
                    set_acceleration(vec2d(0,get_acceleration().get_y()));
            if(is_luigi==true)
                set_image_sequence(&lstand);
            else
                set_image_sequence(&stand);
        }*/
        float maxvel = 1000;
        float accel = 8000;
        float jump = -3000;


        //BOTH LEFT AND RIGHT
        if (keyboard_manager::get()->is_key_down(ALLEGRO_KEY_LEFT) && keyboard_manager::get()->is_key_down(ALLEGRO_KEY_RIGHT))
        {
            if (get_y() < player_floor)
            {
                float a;
                if (get_velocity().get_x() > 0)
                    a = -accel/8;
                else if (get_velocity().get_x() < 0)
                    a = accel/8;
                else
                    0;
                set_acceleration(vec2d(a,get_acceleration().get_y()));
            }
            if (get_y() == player_floor)
            {
                if (get_velocity().get_x() > 100)
                    set_acceleration(vec2d(-accel/1.5,get_acceleration().get_y()));
                else if (get_velocity().get_x() < -100)
                    set_acceleration(vec2d(accel/1.5,get_acceleration().get_y()));
                else
                    set_velocity(vec2d(0,get_velocity().get_y()));
            }
            if(is_luigi==true)
                set_image_sequence(&lstand);
            else
                set_image_sequence(&stand);
        }

        //MOVE RIGHT
        else if (keyboard_manager::get()->is_key_down(ALLEGRO_KEY_RIGHT)
            || keyboard_manager::get()->is_key_down(ALLEGRO_KEY_RIGHT) && keyboard_manager::get()->is_key_down(ALLEGRO_KEY_UP))
        {
            //SETTING IMAGE SEQUENCE
            if(is_luigi==true)
                set_image_sequence(&lwalk);
            else
                set_image_sequence(&walk);
            ///////////////////////////////

            if (get_velocity().get_x() < maxvel)
                set_acceleration(vec2d(accel,get_acceleration().get_y()));
            else
                set_velocity(vec2d(maxvel,get_velocity().get_y()));
        }

        //MOVE LEFT
        else if (keyboard_manager::get()->is_key_down(ALLEGRO_KEY_LEFT)
            || keyboard_manager::get()->is_key_down(ALLEGRO_KEY_LEFT) && keyboard_manager::get()->is_key_down(ALLEGRO_KEY_UP))
        {
            //SETTING IMAGE SEQUENCE
            if(is_luigi==true)
                set_image_sequence(&lwalk);
            else
                set_image_sequence(&walk);
            //////////////////////////////

            if (get_velocity().get_x() > -maxvel)
                set_acceleration(vec2d(-accel,get_acceleration().get_y()));
            else
                set_velocity(vec2d(-maxvel,get_velocity().get_y()));
        }

        //NOTHING PRESSED
        else
        {
            if (get_y() < player_floor)
            {
                float a;
                if (get_velocity().get_x() > 0)
                    a = -accel/8;
                else if (get_velocity().get_x() < 0)
                    a = accel/8;
                else
                    0;
                set_acceleration(vec2d(a,get_acceleration().get_y()));
            }
            if (get_y() == player_floor)
            {
                if (get_velocity().get_x() > 100)
                    set_acceleration(vec2d(-accel/1.5,get_acceleration().get_y()));
                else if (get_velocity().get_x() < -100)
                    set_acceleration(vec2d(accel/1.5,get_acceleration().get_y()));
                else
                    set_velocity(vec2d(0,get_velocity().get_y()));
            }
            if(is_luigi==true)
                set_image_sequence(&lstand);
            else
                set_image_sequence(&stand);
        }

        //GRAVITY
        if (get_y() < player_floor)
            set_acceleration(vec2d(get_acceleration().get_x(), 10000));
        //ENSURE HE DOESN'T GO BELOW FLOOR
        if (get_y() > player_floor)
        {
            set_position(vec2d(get_position().get_x(), player_floor));
            set_acceleration(vec2d(get_acceleration().get_x(), 0));
            set_velocity(vec2d(get_velocity().get_x(), 0));
        }

        //JUMPING
        if (get_y() == player_floor)
        {
            if (keyboard_manager::get()->is_key_down(ALLEGRO_KEY_UP) && keyboard_manager::get()->is_key_down(ALLEGRO_KEY_RIGHT)
                ||
                keyboard_manager::get()->is_key_down(ALLEGRO_KEY_UP) && keyboard_manager::get()->is_key_down(ALLEGRO_KEY_LEFT)
                ||
                keyboard_manager::get()->is_key_down(ALLEGRO_KEY_UP)) {
                    set_velocity(vec2d(get_velocity().get_x(),jump));
                    jumpp = al_load_sample("jump.ogg");
                    al_play_sample(jumpp,1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
                }
            set_acceleration(vec2d(get_acceleration().get_x(), 0));

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
        al_destroy_sample(jumpp);

    }
}
