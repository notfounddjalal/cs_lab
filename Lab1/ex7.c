#include <stdio.h>

int main() {
    float x, y, z, h;
    printf("Enter the width, length, and height of the gift box: ");
    scanf("%f %f %f", &x, &y, &z);
    printf("Enter the radius of the basketball: ");
    scanf("%f", &h);
    if (x >= 2 * h && y >= 2 * h && z >= h) {
        printf("The basketball can fit in the gift box.\n");
    } else {
        printf("The basketball cannot fit in the gift box.\n");
    }

    return 0;
}
