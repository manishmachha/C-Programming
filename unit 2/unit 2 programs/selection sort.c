#include<stdio.h>
int main()
{
    int a[100],i,j,n,temp,min;
    printf("enter array size : ");
    scanf("%d",&n);
    printf("enter array elements : ");
    for(i=0;i<n;i++) // (n-1) iterations
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            min=j;
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    printf("sorted array is : ");
    for(i=0;i<n;i++)
    printf(" %d",a[i]);
    return 0;
}        