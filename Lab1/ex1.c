#include <stdio.h>
int main() {
   long long a, b, c, d,e;
   scanf("%lld", &a);
   c = a-5;
   d = (a*a)-(2*a)+3;
   e=(a*a)+(2*a)+3;
   if (a>0) {
       printf("%lld",d);
   } else if (a<0){
       printf("%lld", e);
   }
   else if (a==0)
   printf("%lld",c);

   return 0;
}


 


