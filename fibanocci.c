#include<stdio.h>
void main()
{
    int a,c=0;
    printf("Enter the number:\n");
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
    c=c+i;
    printf("%d",c);}
}
