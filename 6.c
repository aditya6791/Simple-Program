#include<stdio.h>
int main()
{
  float a,b;
  printf("Enter Hours");
  scanf("%f",&b);
  a = b*60.0;
  printf("\n%f Hours is %f Minutes\n",b,a);
}