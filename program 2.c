#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two values.");
    scanf("%d%d",&a,&b);
    if(a == b)
        printf("all value are equal.\n");
    else
    {
    if(a >= b )
       printf("%d is largest.\n",a);
    if(a <= b )
       printf("%d is largest.\n",b);

    if(a <= b )
       printf("%d is smallest.\n",a);
    if(a >= b)
       printf("%d is smallest.\n",b);

    }
}






















































