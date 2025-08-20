#include <stdio.h>
int main()
{
   int a,b,c;
   printf("\n Enter Two Numbers:\n");
   printf("First Number");
   scanf("%d", &a);
   printf("Second Number");
   scanf("%d", &b);
   c = a + b;
   printf("%d + %d = %d",a,b,c);
}