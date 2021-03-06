#ifndef ENEMY_H
#define ENEMY_H
#include "phys_sprite.h"

namespace csis3700 {
    class enemy : public phys_sprite
    {
        public:
            enemy(float initial_x, float initial_y, size_t randseed);
            virtual void advance_by_time(double dt);
            bool is_player() const;
            bool is_enemy() const;
            bool is_coin() const {return false;};
        protected:

        private:
            void create_image_sequence();
            int enemy_floor;
            int random;
    };
}
#endif // ENEMY_H
