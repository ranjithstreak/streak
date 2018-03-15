#include<stdio.h>
void main()
{
    int a[100],i,j;
    printf("Enter the ten numbers:\n");
    for(i=1;i<=10;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=10;i++)
    for(j=i+1;j<=10;j++)
    if(a[i]>a[j])
    {
        int t;
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    for(i=1;i<=10;i++)
    printf("The number are %d\n",a[i]);
    printf("The largest number is %d",a[10]);
}
