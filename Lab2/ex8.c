#include <stdio.h>

int main() {
    int n,a = 0, b = 1, next, i = 2;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("The 0th Fibonacci number is: 0\n");
    } else if (n == 1) {
        printf("The 1st Fibonacci number is: 1\n");
    } else if (n > 1) {
        while (i <= n) {
            next = a + b;
            a = b;
            b = next;
            i++;
        }
        
        printf("The %dth Fibonacci number is: %d\n", n, b);
    } else {
        printf("Please enter a positive integer.\n");
    }

    return 0;
}
