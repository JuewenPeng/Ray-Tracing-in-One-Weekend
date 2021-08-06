#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"
#include "rtweekend.h"

#include <fstream>

void write_color(std::ofstream& out, color pixel_color);
void write_color(std::ofstream& out, color pixel_color, int samples_per_pixel);

#endif
