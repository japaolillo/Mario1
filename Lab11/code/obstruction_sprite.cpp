#include "obstruction_sprite.h"
#include "image_library.h"
#include "image_sequence.h"

namespace csis3700 {
  obstruction_sprite::obstruction_sprite(float initial_x, float initial_y, ALLEGRO_BITMAP *image) : sprite(initial_x, initial_y) {
      this->create_image_sequence();
      time = 0;
  }

  vec2d obstruction_sprite::get_velocity() const {
    return vec2d(0,0);
  }

  void obstruction_sprite::set_velocity(const vec2d& v) {
    assert(false);
  }

  void obstruction_sprite::create_image_sequence() {
    //146 x 194
    image_library *il = image_library::get();
    image_sequence* ball = new image_sequence;
    ball->add_image(il->get("ball.png"), 0);
    set_image_sequence(ball);
  }
}
