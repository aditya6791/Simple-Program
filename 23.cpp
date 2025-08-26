#include <stdio.h>
int main()
{
    float a,b,c,d;
    printf(" Enter marks of subject 1 : ");
    scanf("%f",&a);
    printf(" Enter marks of subject 2 : ");
    scanf("%f",&b);
    printf(" Enter marks of subject 3 : ");
    scanf("%f",&c);
    d = (a+b+c)/3.0;
    printf("Average Marks is %f",d);
}