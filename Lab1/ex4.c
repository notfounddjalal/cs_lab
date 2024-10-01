#include <stdio.h>
#include<math.h>
int main() {
   long long a, b, c, d,e,x1,x2;
   scanf("%lld%lld%lld", &a,&b,&c);
   d=(b*b)-(4*a*c);
   x1=(-b)+(sqrt(d));
   x2=(-b)-(sqrt(d));
   if (d>0)
   printf("%lld %lld",x1,x2);
   else if (d<0 )
   printf("no roots");
   else if (d==0)
   printf("%lld",x1);

   return 0;
}