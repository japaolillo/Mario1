#include "collision.h"
#include "rectangle.h"
#include "sprite.h"
#include "world.h"
#include <iostream>
#include <cassert>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
using namespace std;

namespace csis3700 {
  collision::collision(sprite* p1, sprite* p2) {
    participants[0] = p1;
    participants[1] = p2;
  }

  sprite** collision::get_participants()  { return participants; }

  rectangle collision::collision_rectangle() const {
    return participants[0]->collision_rectangle(*participants[1]);
  }

  void collision::resolve(world* w)
  {
        //Player hits enemy
        if ((participants[0]->is_player() || participants[1]->is_player()) && (participants[0]->is_enemy() || participants[1]->is_enemy()))
        {
            sprite* player;
            if (participants[0]->is_player())
                player = participants[0];
            else
                player = participants[1];
            //player->set_velocity(vec2d(player->get_velocity().get_x(), -500));

            player->kill_player();
            w->set_endgame(true);
            //w->remove_sprite(player);

            al_destroy_sample(coinn);
        }
        //if player hits coin
        if ((participants[0]->is_player() || participants[1]->is_player()) && (participants[0]->is_coin() || participants[1]->is_coin()))
        {

            sprite* coin;
            sprite* player;
            if (participants[0]->is_coin())
            {
                coin = participants[0];
                player = participants[1];
            }
            else
            {
                coin = participants[1];
                player = participants[0];
            }
            coinn = al_load_sample("coin.ogg");
            al_play_sample(coinn,1,0,1,ALLEGRO_PLAYMODE_ONCE, 0);
            w->remove_sprite(coin);
            w->add_score();
        }
        //if player hits ball
        if ((participants[0]->is_player() || participants[1]->is_player()) && (participants[0]->is_obstruction() || participants[1]->is_obstruction()))
        {
            sprite* obstruction;
            sprite* player;
            if (participants[0]->is_obstruction())
            {
                obstruction = participants[0];
                player = participants[1];
            }
            else
            {
                obstruction = participants[1];
                player = participants[0];
            }
            coinn = al_load_sample("jump.ogg");
            al_play_sample(coinn,1,0,1,ALLEGRO_PLAYMODE_ONCE, 0);
            player->set_velocity(vec2d(-player->get_velocity().get_x(),-player->get_velocity().get_y()));
        }
  }

}
