#include <stdio.h>
void main()
{
    int a[10],i,num;
    printf("Enter the array number\n");
    scanf("%d",&num);
    printf("Enter the numbers\n");
    for(i=1;i<=num;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=num;i++)
    printf("The Numbers are %d and its place us %d\n",a[i],i);
}
