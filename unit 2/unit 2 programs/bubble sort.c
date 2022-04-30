#include<stdio.h>
int main()
{
    int a[100],i,j,n,temp;
    printf("enter array size : ");
    scanf("%d",&n);
    printf("enter array elements : ");
    // (n-1) iterations
    for(i=0;i<n;i++) 
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            // comparing with the elements
            if(a[j]>a[j+1])
            {
                // swapping the elements at desired location
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("sorted array : ");
    for(i=0;i<n;i++)
    printf(" %d",a[i]);

    return 0;
}