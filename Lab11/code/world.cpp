#include "world.h"
#include <cassert>
#include <algorithm>
#include "sprite.h"
#include "allegro5/allegro.h"
#include "allegro5/allegro_image.h"
#include "player_sprite.h"
#include "obstruction_sprite.h"
#include "collision.h"
#include "image_library.h"

using namespace std;

namespace csis3700 {

  const float gravity_acceleration = 600;

  void free_sprite(sprite* s) {
    delete s;
  }

  world::world() {
      background=image_library::get()->get("background.png");
      sprite *player = new player_sprite(0,700);
      //sprite *ground = new phys_sprite(0,800);
      sprites.push_back(player);
      //sprites.push_back(ground);
  }

  world::world(const world& other) {
    assert(false); // do not copy worlds
  }

  world& world::operator=(const world& other) {
    assert(false); // do not assign worlds
  }

  world::~world() {
    for_each(sprites.begin(), sprites.end(), free_sprite);
    sprites.clear();
  }

  void world::handle_event(ALLEGRO_EVENT ev) {
  }

  void world::resolve_collisions() {

  }

  void world::advance_by_time(double dt) {
    for(vector<sprite*>::iterator it = sprites.begin(); it != sprites.end(); ++it)
      (*it)->advance_by_time(dt);
    resolve_collisions();
  }

  void world::draw() {
    ALLEGRO_TRANSFORM t;
    sprite* player = sprites.front();
    al_identity_transform(&t);
    if (player != nullptr)
      al_translate_transform(&t, -player->get_x()+50, 0);
    al_use_transform(&t);
    al_clear_to_color(al_map_rgb(255,255,255));
    al_draw_bitmap(background, -1920, 0, 0);
    al_draw_bitmap(background, 0, 0, 0);
    al_draw_bitmap(background, 1920, 0, 0);
    for(vector<sprite*>::iterator it = sprites.begin(); it != sprites.end(); ++it)
      (*it)->draw();
  }

  bool world::should_exit() {
    return false;
  }

}
