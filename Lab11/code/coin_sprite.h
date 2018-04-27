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

            void create_image_sequence();

        protected:

        private:
            vec2d velocity;
    };
}
#endif // COIN_SPRITE_H
