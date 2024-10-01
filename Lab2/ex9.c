#include <stdio.h>
#include <math.h>
long long factorial(int num) {
    long long fact = 1;
    int i = 1;
    
    while (i <= num) {
        fact *= i;
        i++;
    }
    
    return fact;
}

int main() {
    double x, taylor_result = 0.0;
    int n, i = 0;
    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);
    
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    while (i < n) {
        double term = pow(x, 2 * i + 1) / factorial(2 * i + 1);
        if (i % 2 == 0) {
            taylor_result += term;
        } else {
            taylor_result -= term;
        }
        i++;
    }
    double math_sin_result = sin(x);
    printf("Sin(x) using Taylor series (n = %d terms): %.10lf\n", n, taylor_result);
    printf("Sin(x) using math.h: %.10lf\n", math_sin_result);
    
    return 0;
}
