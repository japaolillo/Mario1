#ifndef __CDS_PLAYER_SPRITE_H
#define __CDS_PLAYER_SPRITE_H
#include "phys_sprite.h"

namespace csis3700 {
  class player_sprite : public phys_sprite {
  public:
    player_sprite(float initial_x=0, float initial_y=0);
    virtual void advance_by_time(double dt);
  private:
    void create_image_sequence();
    void create_image_sequence_switch();
    int player_floor;
    image_sequence walk;
    image_sequence stand;
  };
}


#endif /* PLAYER_SPRITE_H */
