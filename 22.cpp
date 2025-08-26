#include <stdio.h>
int main()
{
   float a,b;
   printf(" Enter Gross Sales : ");
   scanf("%f",&a);
   b = a - a*(0.1);
   printf(" Net sales = %f",b);
}