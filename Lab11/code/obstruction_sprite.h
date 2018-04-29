#ifndef __CDS_OBSTRUCTION_SPRITE_H
#define __CDS_OBSTRUCTION_SPRITE_H

#include "sprite.h"

namespace csis3700 {

  /**
   * obstruction_sprites don't typically move and when they
   * participate in a collision they are unimpacted by it. They
   * typically render themslves as a single, static bitmap.
   */
  class obstruction_sprite : public sprite {
  public:
    obstruction_sprite(float initial_x, float initial_y, ALLEGRO_BITMAP *image=NULL);
    void create_image_sequence();
    virtual void set_velocity(const vec2d& v);
    virtual vec2d get_velocity() const;
    bool is_player() const {return false;};
    bool is_coin() const {return false;};
    bool is_enemy() const {return false;};
    bool is_obstruction() const {return true;};
    void advance_by_time(double dt) {sprite::advance_by_time(dt);};
  };
}


#endif /* OBSTRUCTION_SPRITE_H */
