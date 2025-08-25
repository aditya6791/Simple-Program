#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the value of a, b\n");
scanf("%d %d",&a,&b);
printf("a=%d\n",a);
printf("b=%d\n",b);
c=a;
a=b;
b=c;
printf("after swapping: \n");
printf("a=%d\n",a);
printf("b=%d\n",b);
return 0;
}
