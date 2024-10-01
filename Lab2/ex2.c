#include <stdio.h>

int main()
{
    int a, b, sum = 0, n, k;
    scanf("%d%d%d", &a, &b, &k);
    if (a > b) {
        int c = a;
        a = b;
        b = c;
    }

   
    n = a;

   
    while (n <= b) {
        if (n % k == 0) {  
            sum = sum + n;  
        }
        n = n + 1;  
    }
    printf("Sum of elements in the range [%d, %d] divisible by %d is %d\n", a, b, k, sum);

    return 0;
}
