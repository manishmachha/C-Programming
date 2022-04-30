#include<stdio.h>
int main()
{
    int a[5],*p,i;
    p=(a+i);
    printf("enter array elements : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array is : ");
    for(i=0;i<5;i++)
    {
        printf("%d\t",p);
    }

}