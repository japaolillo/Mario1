#ifndef ENEMY_H
#define ENEMY_H
#include "phys_sprite.h"

namespace csis3700 {
    class enemy : public phys_sprite
    {
        public:
            enemy(float initial_x, float initial_y);
            virtual void advance_by_time(double dt);
            bool is_player() const;
        protected:

        private:
            void create_image_sequence();
            int enemy_floor;
            int random;
    };
}
#endif // ENEMY_H
