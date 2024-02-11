#include "vectorc.h"
#include <assert.h>
#include <stdio.h>

int main() {
    struct Vec3 *v = build_vec3(1, 2, 3);
    struct Vec3 *u = build_vec3(4, 5, 6);

    double res = dot_vec3(v, u);

    // (1*4) + (2*5) + (3*6)
    assert(res == 4 + 10 + 18);

    struct Vec2 *a = build_vec2(1, 2);
    struct Vec2 *b = build_vec2(3, 4);

    double res2 = dot_vec2(a, b);

    // (1*3) + (2*4)
    assert(res2 == 3 + 8);

    return 0;
}
