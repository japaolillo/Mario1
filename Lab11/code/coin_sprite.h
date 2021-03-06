#ifndef COIN_SPRITE_H
#define COIN_SPRITE_H
#include "sprite.h"

namespace csis3700 {
    class coin_sprite : public sprite
    {
        public:
            coin_sprite(float initial_x, float initial_y);

            vec2d get_velocity() const {return vec2d(0,0);};

            void set_velocity(const vec2d& v) {velocity = v;};

            bool is_player() const {return false;};

            bool is_enemy() const {return false;};

            bool is_coin() const {return true;};

            bool is_obstruction() const {return false;};

            void create_image_sequence();

            void advance_by_time(double dt);

            int get_index() const {return index;};

        protected:

        private:
            vec2d velocity;
            size_t index;
    };
}
#endif // COIN_SPRITE_H
