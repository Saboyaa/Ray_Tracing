#ifndef RTWEEKEND_H
#define RTWEEKEND_H

// Is a file for useful func and constants
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <limits>
#include <memory>

// C++ Std Usings

using namespace std;

// Constants

const double infinity = numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

// Utility Functions

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180.0;
}

inline double random_double() {
  return rand() / ( RAND_MAX + 1.0);
}

inline double random_double(double min,double max){
  return min + (max-min)*random_double();
}

// Common Headers

#include "color.h"
#include "ray.h"
#include "vec3.h"
#include "interval.h"

#endif // !RTWEEKEND_H
