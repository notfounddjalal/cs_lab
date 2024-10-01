#include <stdio.h>

int main() {
    int n, length = 0;
    scanf("%d", &n);
    printf("%d",n);
    length++;  
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;  
        } else {
            n = 3 * n + 1;  
        }
        printf(" %d", n);  
        length++;  
    }
    printf("\n%d", length);
    
    return 0;
}
