#include <stdio.h>

int main() {
    int num, digit1, digit2, digit3, temp, largest, smallest;
    scanf("%d", &num);
    if(num<0)
    temp=-num;
    else
    temp = num;
    digit1 = temp / 100;        
    digit2 = (temp / 10) % 10;  
    digit3 = temp % 10;         
    largest = digit2;
    smallest = digit2;
    if (digit1 > largest)
        largest = digit1;
    if (digit3 > largest)
        largest = digit3;

   
    if (digit1 < smallest)
        smallest = digit1;
    if (digit3 < smallest)
        smallest = digit3;

    
    printf("Greatest digit: %d\n", largest);
    printf("Smallest digit: %d\n", smallest);

    return 0;
}
