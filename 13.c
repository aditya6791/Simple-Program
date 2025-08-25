#include<stdio.h>
int main()
{
    float a,b,c,d,e,f,g,h;
    scanf("%f",&a);
    b=a/1000;
    c=a/1000000;
    d=a/1000000000;


    printf("number of kb are:%f\n",b);
        printf("number of mb are:%f\n",c);
            printf("number of gb are:%f\n",d);

    return 0;
}
