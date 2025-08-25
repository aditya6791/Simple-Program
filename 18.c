#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h;
    printf("enter length");
    scanf("%d",&a);
    printf("enter width");
    scanf("%d",&b);

    h=a*b;
     e=2*(a+b);

    printf("area:%d\n",h);
    printf("perimeter:%d\n",e);
    return 0;
}
