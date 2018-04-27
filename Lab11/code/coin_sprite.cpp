#include "coin_sprite.h"
#include "sprite.h"
#include "image_library.h"

namespace csis3700 {
    coin_sprite::coin_sprite(float initial_x, float initial_y) : sprite(initial_x, initial_y) {
        this->create_image_sequence();
    }

    void coin_sprite::create_image_sequence()
    {
        image_sequence* spin;
        image_library *il = image_library::get();
        spin->add_image(il->get("coin1.png"), 0);
        spin->add_image(il->get("coin2.png"), 0.1);
        spin->add_image(il->get("coin3.png"), 0.1);
        set_image_sequence(spin);
    }
}
