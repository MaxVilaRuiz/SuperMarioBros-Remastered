#pragma once

#include <unordered_map>
#include <set>
#include <algorithm>
#include "geometry.hh"

template <class T>
class Finder {
 private:
    // Grid 480 x 640 (sued by game.cc) - max 52 cols, 39 rows
    inline static const int CELL_WIDTH = 480;
    inline static const int CELL_HEIGHT = 640;
    inline static const int MAX_X = 25000;
    inline static const int MAX_Y = 25000;
    inline static const int MAX_COL = MAX_X / CELL_WIDTH;
    inline static const int MAX_ROW = MAX_Y / CELL_HEIGHT;

    // Cell Grid
    std::unordered_map<int, std::unordered_map<int, std::set<const T*>>> objects_;

    /**
     * @brief Adds or removes object `t` from the spatial grid based on the `add` parameter.
     * @pre
     * - `t` != nullptr
     * - `pro2::Rect r = t->get_rect()`:
     *   - `0 <= r.left <= r.right <= MAX_COL * CELL_WIDTH`
     *   - `0 <= r.top <= r.bottom <= MAX_ROW * CELL_HEIGHT`
     * @post
     * - If `add` is `true`, `t` is inserted into all grid cells that intersect with its rectangle.
     * - Otherwise, `t` is removed from all grid cells that intersect with its rectangle.
     * @param t Pointer to an object of type T that implements `get_rect() const`.
     * @param add Indicates whether to add (`true`) or remove (`false`) the object `t` from the grid.
    */
    void apply_action(const T *t, bool add) {
        pro2::Rect t_r = t->get_rect();
        int left_cell = std::max(0, t_r.left / CELL_WIDTH);
        int right_cell = std::min(MAX_COL, t_r.right / CELL_WIDTH);
        int top_cell = std::max(0, t_r.top / CELL_HEIGHT);
        int bottom_cell = std::min(MAX_ROW, t_r.bottom / CELL_HEIGHT);

        for (int i = left_cell; i <= right_cell; i++) {
            for (int j = top_cell; j <= bottom_cell; j++) {
                if (add) objects_[i][j].insert(t);
                else objects_[i][j].erase(t);
            }
        }
    }
};