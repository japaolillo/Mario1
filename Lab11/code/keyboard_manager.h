#ifndef __CDS_KEYBOARD_MANAGER_H
#define __CDS_KEYBOARD_MANAGER_H
#include <set>

namespace csis3700 {
  class keyboard_manager {
  public:
    static keyboard_manager *get();

    keyboard_manager();

    /**
     * Answers true iff the specified key currently held down
     */
    bool is_key_down(int keycode);
    bool was_key_pressed(int keybode);


  private:
    static keyboard_manager *default_instance;
    std::set<int> down;
  };
}

#endif /* __CDS_KEYBOARD_MANAGER_H */
