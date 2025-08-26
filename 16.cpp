#include <stdio.h>
int main()
{
    float a,b,c,d;
    printf("\nEnter Principle : ");
    scanf("%f",&a);
    printf("Enter Rate : ");
    scanf("%f",&b);
    printf("Enter Number of Years : ");
    scanf("%f",&c);
    d=a*b*c/100.0;
    printf("\n Interest on given value is : %f",d);
}