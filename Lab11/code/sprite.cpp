#include "sprite.h"

namespace csis3700 {

  sprite::sprite(float initial_x, float initial_y) {
    position = vec2d(initial_x, initial_y);
    time = 0;
  }

  void sprite::set_image_sequence(image_sequence *s) {
    sequence = s;
  }

  sprite::~sprite() {
  }

  int sprite::get_width() const {
    return sequence->get_width();
  }

  int sprite::get_height() const {
    return sequence->get_height();
  }

  float sprite::get_x() const {
    return position.get_x();
  }

  float sprite::get_y() const {
    return position.get_y();
  }

  void sprite::draw() {
    sequence->draw(time, get_x(), get_y());
  }

  rectangle sprite::bounding_box() const {
    return rectangle(position, get_width(), get_height());
  }

  rectangle sprite::collision_rectangle(const sprite& other) const {
    return bounding_box().intersection(other.bounding_box());
  }


  bool sprite::collides_with(const sprite& other) const {
    return !collision_rectangle(other).is_degenerate();
  }


  void sprite::advance_by_time(double dt) {
    time += dt;
  }


  vec2d sprite::get_position() const {
    return position;
  }

  void sprite::set_position(vec2d p) {
    position = p;
  }

  void sprite::kill_player()
  {
      assert(is_player());
  }

  bool sprite::operator==(const sprite& other) const
  {
      if (get_position().get_x() == other.get_position().get_x() && get_position().get_y() == other.get_position().get_y())
        if (is_player() == other.is_player() && is_coin() == other.is_coin() && is_enemy() == other.is_enemy())
            return true;
      return false;
  }

}
