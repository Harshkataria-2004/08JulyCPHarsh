#include <stdio.h>
int main()
{
   int a,b,*p,*q,sum;

   printf("Enter a number 1 : ");
   scanf("%d",&a);
   printf("Enter a number 2 : ");
   scanf("%d",&b);
   p = &a;
   q = &b;

   sum = *p+*q;

   printf("Sum of the numbers = %d\n", sum);
   return 0;
}
