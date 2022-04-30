#include<stdio.h>
void add(int, int);
void main()
{
    int a,b;
    printf("enter a and b : ");
    scanf("%d %d",&a,&b);
    add(a,b);
}
void add(int x, int y)
{
    int res;
    res=x+y;
    printf("result is : %d",res);
}