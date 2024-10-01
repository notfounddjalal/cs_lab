#include <stdio.h>

int main() {
    int x,y=1,digit;
    scanf("%d", &x);

    y = 1;
    while (x / y >= 10) {
        y *= 10;
    }

    while (y > 0) {
         digit = x / y;
        x %= y;
        y /= 10;

        if (digit != 0) {
            printf("%d", digit);
        }
    }


    printf("\n");
    return 0;
}