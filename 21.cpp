#include <stdio.h>
int main()
{
    float a,b;
    printf("\n Enter gross salary : ");
    scanf("%f",&a);
    b = a + a*0.1 - a*0.03;
    printf(" Net Salary = %f",b);
}