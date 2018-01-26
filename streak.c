#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the three numbers a,b,c");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>b&a>c)
    printf("a is larger");
    else
    if(b>c)
    printf("b is larger");
    else
    printf("c is larger");
}
