#include<stdio.h>
int main()
{
    //defining and initializing an array
    int a[100]={1,2,3,4,5,6,7,8,9,10};
    int i,n;
    //declaring pointer variable to array
    int *p[100];
    //initializing pointer to array elements
    for(i=0;i<100;i++)
    {
        p[i]=&a[i];
    }
    printf("enter no of elements : ");
    //reading no of elements to be accessed
    scanf("%d",&n);
    //accessing elements of array
    printf("elements of array are : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*p[i]);
    }
    return 0;

}