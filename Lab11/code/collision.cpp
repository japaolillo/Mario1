#include "collision.h"
#include "rectangle.h"
#include <iostream>
using namespace std;

namespace csis3700 {
  collision::collision(sprite* p1, sprite* p2) {
    participants[0] = p1;
    participants[1] = p2;
  }

  sprite** collision::get_participants()  { return participants; }

  rectangle collision::collision_rectangle() const {
    return participants[0]->collision_rectangle(*participants[1]);
  }

}
