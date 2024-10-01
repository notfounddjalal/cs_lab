#include <stdio.h>

int main() {
    float number, sum,n = 0.0; 
    scanf("%f", &n); 

    while (1) {
        scanf("%f", &number); 
       if (number == -1) {
            break; 
        }

        sum += number; 
        number++;
    }

    
    printf("Sum of the given numbers is: %.2f\n", sum);

    return 0;
}
