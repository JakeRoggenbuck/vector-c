#ifndef VECTOR_H
#define VECTOR_H

struct Vec2 {
    double x;
    double y;
};

struct Vec3 {
    double x;
    double y;
    double z;
};

struct Vec2 *build_vec2(double x, double y);
struct Vec3 *build_vec3(double x, double y, double z);

struct Vec2 *add_vec2(struct Vec2 *a, struct Vec2 *b);
struct Vec3 *add_vec3(struct Vec3 *a, struct Vec3 *b);

struct Vec2 *subtract_vec2(struct Vec2 *a, struct Vec2 *b);
struct Vec3 *subtract_vec3(struct Vec3 *a, struct Vec3 *b);

struct Vec2 *cross_vec2(struct Vec2 *a, struct Vec2 *b);
struct Vec3 *cross_vec3(struct Vec3 *a, struct Vec3 *b);

double dot_vec2(struct Vec2 *a, struct Vec2 *b);
double dot_vec3(struct Vec3 *a, struct Vec3 *b);

#endif // VECTOR_H
