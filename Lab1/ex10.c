#include <stdio.h>
#include <math.h>

int main() {
    float x, y, x0, y0, r, d;
    printf("Enter the coordinates of the point (x y): ");
    scanf("%f %f", &x, &y);
    printf("Enter the coordinates of the circle's center (x0 y0): ");
    scanf("%f %f", &x0, &y0);
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    d = sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));
    if (d < r) {
        printf("The point is INSIDE the circle.\n");
    } else if (r == d ) {
        printf("The point is ON the circle.\n");
    } else {
        printf("The point is OUTSIDE the circle.\n");
    }

    return 0;
}
