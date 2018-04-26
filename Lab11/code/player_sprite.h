#ifndef __CDS_PLAYER_SPRITE_H
#define __CDS_PLAYER_SPRITE_H
#include "phys_sprite.h"

namespace csis3700 {
  class player_sprite : public phys_sprite {
  public:
    player_sprite(float initial_x=0, float initial_y=0);
    virtual void advance_by_time(double dt);
    bool is_player() const;
    bool is_enemy() const;
    bool is_coin() const {return false;};
    void kill_player();
  private:
    void create_image_sequence();
    void create_image_sequence_switch();
    int player_floor;
    image_sequence walk;
    image_sequence stand;
    image_sequence lwalk;
    image_sequence lstand;
    image_sequence dead;
    bool is_luigi=false;
    double ltime=0;
    bool is_alive = true;
  };
}


#endif /* PLAYER_SPRITE_H */
