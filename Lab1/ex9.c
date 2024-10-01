#include <stdio.h>

int main(){
    int x,y,z,max,x1,y1,z1,x2,y2,z2,t;
    scanf("%d", &x);
    if(x<0)
    t=-x;
    else 
    t=x;

    x1 = t / 100;
    y1 = t /10%10;
    z1 = t % 10;
    


    if (x1 > 0)
        x2 = x1;
    else
        x1 = 1;

    if (y1 > 0)
        y2 = y1;
    else 
        y1 = 1;

    if (z1 > 0)
        z2 = z1;
    else
        z1 = 1;

    max = x2 * y2 * z2;
    printf("%d ", max);

    return 0;
}