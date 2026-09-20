#include <stdio.h>

#define pi 3.14

double volume(double radius) {
    return 4.0 / 3.0 * pi * radius * radius * radius;
}

int main() {
    int radius;
    scanf("%d", &radius);

    double mantle_radius = 0.995 * radius;
    double core_radius = 0.545 * radius;

    printf("%llu\n", (unsigned long long)(volume(mantle_radius) - volume(core_radius)));
    return 0;
}
