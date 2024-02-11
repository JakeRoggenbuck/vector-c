#include "vectorc.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "termcolor.h"

void interactive() {
    double nums[4];

    cprint("> ", FG_GREEN);
    scanf("%lf %lf %lf", &nums[0], &nums[1], &nums[2]);

    struct Vec3 *v = build_vec3(nums[0], nums[1], nums[2]);

    display_vec3(v);
}

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

    interactive();

    return 0;
}
