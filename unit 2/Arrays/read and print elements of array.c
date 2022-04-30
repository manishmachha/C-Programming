#include<stdio.h>
int main()
{
    int marks[100], i, n;
    printf("enter the size : ");
    scanf("%d",&n);
    printf("enter elements : ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("elements of array are : ");
    for (i=0;i<n;i++)
    {
        printf(" %d",marks[i]);
    }
    return 0;

}