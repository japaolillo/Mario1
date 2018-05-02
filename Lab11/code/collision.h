#ifndef __CDS_COLLISION_H
#define __CDS_COLLISION_H

#include "sprite.h"
#include "rectangle.h"
#include "world.h"
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_audio.h>

namespace csis3700 {
  class collision {
  public:
    collision(sprite* p1, sprite* p2);
    sprite** get_participants();
    rectangle collision_rectangle() const;
    void resolve(world* w);
    ALLEGRO_SAMPLE* coinn = nullptr;
  private:
    sprite* participants[2];
  };
}
#endif /* COLLISION_H */
