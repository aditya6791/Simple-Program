#include <stdio.h>
int main()
{
   float a,b;
   printf(" Enter Grams(g)");
   scanf("%f",&a);
   b = a/1000.0;
   printf("\n %f Grams is %f Kilograms",a,b);
}