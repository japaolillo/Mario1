#include "player_sprite.h"
#include "image_library.h"
#include "image_sequence.h"
#include "vec2d.h"
#include "collision.h"
#include <cmath>
using namespace std;

namespace csis3700 {

  player_sprite::player_sprite(float initial_x, float initial_y) : phys_sprite(initial_x, initial_y) {
        this->create_image_sequence();
  }

  void player_sprite::advance_by_time(double dt) {
    phys_sprite::advance_by_time(dt);
  }
  void player_sprite::create_image_sequence() {
    image_sequence *s = new image_sequence();
    image_library *il = image_library::get();
    s->add_image(il->get("mariowalk1.bmp"), 0);
    /*s->add_image(il->get("StickMan2.png"), 0.1);
    s->add_image(il->get("StickMan3.png"), 0.1);
    s->add_image(il->get("StickMan2.png"), 0.1); */
    set_image_sequence(s);
  }

}
