#include "enemy.h"
#include "image_library.h"
#include "image_sequence.h"
#include "vec2d.h"
#include "collision.h"
#include "phys_sprite.h"
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

namespace csis3700 {
    enemy::enemy(float initial_x, float initial_y) : phys_sprite(initial_x, initial_y)
    {
        this->create_image_sequence();
        enemy_floor = 768;
        srand(std::time(NULL));
        random = rand();
    }
    void enemy::create_image_sequence()
    {
        image_sequence *s = new image_sequence();
        image_library *il = image_library::get();
        s->add_image(il->get("mariowalk1.png"), 0);
        s->add_image(il->get("mariowalk2.png"), 0.1);
        s->add_image(il->get("mariowalk3.png"), 0.1);
        s->add_image(il->get("mariowalk2.png"), 0.1);
        set_image_sequence(s);
    }
    void enemy::advance_by_time(double dt)
    {
        int xspeed;
        if (random % 2 == 0)
            xspeed = -(random%200 + 100);
        else
            xspeed = random%200 + 100;
        set_velocity(vec2d(xspeed,0));
        phys_sprite::advance_by_time(dt);
    }
    bool enemy::is_player() const
    {
        return false;
    }
    bool enemy::is_enemy() const
    {
        return true;
    }
}
