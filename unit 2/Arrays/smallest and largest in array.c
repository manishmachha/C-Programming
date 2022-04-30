#include<stdio.h>
int main()
{
    int arr[5],i,n,small,large;
    printf("enter the size : ");
    scanf("%d",&n);
    printf("enter elements : ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    small = arr[0];
    large = arr[0];
    for (i=0;i<5;i++)
    {
        if (arr[i]<small)
        {
            small=arr[i];
        }
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    printf("large element is %d : ",large);
    printf("small element is %d : ",small);
return 0;
}