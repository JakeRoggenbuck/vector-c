#include "vectorc.h"
#include <stdio.h>
#include <stdlib.h>

struct Vec2 *build_vec2(double x, double y) {
    struct Vec2 *v = malloc(sizeof(struct Vec2));

    if (v != NULL) {
        v->x = x;
        v->y = y;
    }

    return v;
}

struct Vec3 *build_vec3(double x, double y, double z) {
    struct Vec3 *v = malloc(sizeof(struct Vec3));

    if (v != NULL) {
        v->x = x;
        v->y = y;
        v->z = z;
    }

    return v;
}

struct Vec2 *add_vec2(struct Vec2 *a, struct Vec2 *b) {
    struct Vec2 *v = malloc(sizeof(struct Vec2));

    if (v != NULL) {
        v->x = a->x + b->x;
        v->y = a->y + b->y;
    }

    return v;
}

struct Vec3 *add_vec3(struct Vec3 *a, struct Vec3 *b) {
    struct Vec3 *v = malloc(sizeof(struct Vec3));

    if (v != NULL) {
        v->x = a->x + b->x;
        v->y = a->y + b->y;
        v->z = a->z + b->z;
    }

    return v;
}

struct Vec2 *subtract_vec2(struct Vec2 *a, struct Vec2 *b) {
    struct Vec2 *v = malloc(sizeof(struct Vec2));

    if (v != NULL) {
        v->x = a->x - b->x;
        v->y = a->y - b->y;
    }

    return v;
}

struct Vec3 *subtract_vec3(struct Vec3 *a, struct Vec3 *b) {
    struct Vec3 *v = malloc(sizeof(struct Vec3));

    if (v != NULL) {
        v->x = a->x - b->x;
        v->y = a->y - b->y;
        v->z = a->z - b->z;
    }

    return v;
}

struct Vec3 *cross_vec3(struct Vec3 *a, struct Vec3 *b) {
    struct Vec3 *v = malloc(sizeof(struct Vec3));

    if (v != NULL) {
        v->x = a->y * b->z - a->z * b->y;
        v->y = a->z * b->x - a->x * b->z;
        v->z = a->x * b->y - a->y * b->x;
    }

    return v;
}

double dot_vec2(struct Vec2 *a, struct Vec2 *b) {
    return (a->x * b->x) + (a->y * b->y);
}

double dot_vec3(struct Vec3 *a, struct Vec3 *b) {
    return (a->x * b->x) + (a->y * b->y) + (a->z * b->z);
}

void display_vec2(struct Vec2 *v) { printf("< %.2lf %.2lf >", v->x, v->y); }

void display_vec3(struct Vec3 *v) {
    printf("< %.2lf %.2lf %.2lf >", v->x, v->y, v->z);
}
