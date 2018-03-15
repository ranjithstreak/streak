#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("Before swap:%d,%d\n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After swap:%d,%d",a,b);
}
