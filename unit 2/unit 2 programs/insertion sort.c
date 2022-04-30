#include<stdio.h>
int main()
{
    int a[100],i,j,n,temp;
    printf("enter array size : ");
    scanf("%d",&n);
    printf("enter array elements : ");
    for(i=0;i<n;i++) // (n-1) iterations
    scanf("%d",&a[i]);
    for(i=1;i<n;i++)
    {
        temp=a[i];
        for(j=i;j>0&&temp<a[j-1];j--) // comparing with previous elements
        {
            a[j]=a[j-1];
        }
        a[j]=temp; // inserting the elements at desired location
    }
    printf("sorted array is : ");
    for(i=0;i<n;i++)
    printf(" %d",a[i]);
    return 0;
}