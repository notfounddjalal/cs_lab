#include <stdio.h>

int main() {
    long long sum = 0, product = 1,n, i = 1,xi;
    scanf("%lld", &n);
    while (i <= n) {
        xi = 3 * i - 1;  
        sum += xi;           
        product *= xi;       
        i++;}                 

    printf("Sum is: %lld\n", sum);
    printf("Product is: %lld\n", product);

    return 0;
}
