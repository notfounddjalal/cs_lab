#include <stdio.h>
int main() {
   long long a, b, c, d,e;
   scanf("%lld", &a);
   if (a%6==0)
   printf("Excellent");
   else if ((a%2==0 && a%3!=0) || (a%2!=0 && a%3==0) )
   printf("Ok");
   else 
   printf("NOO");

   return 0;
}
