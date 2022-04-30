#include<stdio.h>
int main()
{
    int a[100],i,n;
    int *p;
    printf("enter array size : ");
    scanf("%d",&n);
    p=&a[0];
    printf("enter array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",p);
        p++;
    }
    p=&a[n-1];
    printf("reverse order is : \n");
    for(i=n;i>0;i--)
    {
        printf("%d\t",*p);
        p--;
    }
    return 0;



}