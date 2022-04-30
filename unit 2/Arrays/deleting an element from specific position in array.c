#include<stdio.h>
int main()
{
    int a[5],i,pos,n;
    printf("enter elements : ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter position : ");
    scanf("%d",&pos);
    for (i=pos;i<5;i++)
    {
        a[i]=a[i+1];
    }
    printf("array is : ");
    for (i=0;i<n-1;i++)
    {
        printf(" %d",a[i]);
    }
    return 0;

}