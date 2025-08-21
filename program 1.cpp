#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three values.");
    scanf("%d%d%d",&a,&b,&c);
    if(a == b == c)
        printf("all value are equal.\n");
    else
    {
    if(a >= b && b >= c)
       printf("%d is largest.\n",a);
    else
    if(a >= b && b >= c)
       printf("%d is largest.\n",b);
    else
       printf("%d is largest.\n",c);


    if(a <= b && b <= c)
       printf("%d is smallest.\n",a);
    else
    if(a <= b && b <= c)
       printf("%d is smallest.\n",b);
    else
       printf("%d is smallest.\n",c);
    }
}






















































