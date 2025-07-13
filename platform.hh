#pragma once

#include <vector>
#include "window.hh"

class Platform {
 private:
    int left_, right_, top_, bottom_;

    // 2D texture used for rendering the platform
	static const std::vector<std::vector<int>> platform_texture_;

 public:
    // Default constructor (empty platform)
    Platform() : left_(0), right_(0), top_(0), bottom_(0) {}
};