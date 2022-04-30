#include<stdio.h>
int main()
{
    int a[5],i,pos,el,n;
    printf("enter elements : ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter position : ");
    scanf("%d",&pos);
    printf("enter elements : ");
    scanf("%d",&el);
    for (i=n-1;i<=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=el;
    for (i=0;i<=5;i++)
    {
        printf(" %d",a[i]);
    }
    return 0;


}