#ifndef CAMERA_H
#define CAMERA_H

#include "rtweekend.h"
#include "ray.h"

class camera {
public:
    camera();
    camera(double vfov, double aspect_ratio);
    camera(point3 lookfrom, point3 lookat, vec3 vup, double vfov, double aspect_ratio);
    camera(point3 lookfrom, point3 lookat, vec3 vup, double vfov, double aspect_ratio, double aperture, double focus_dist);

    //ray get_ray(double u, double v) const;
    ray get_ray(double s, double t) const;

private:
    point3 origin;
    point3 lower_left_corner;
    vec3 horizontal;
    vec3 vertical;
    vec3 u, v, w;
    double lens_radius;
};

#endif