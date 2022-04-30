#include<stdio.h>
int main()
{
    int a=2,b=3;
    //pointer declaration
    int *p,*q,c;
    //pointer initialization
    p=&a;
    q=&b;
    c=p-q;//addition of pointers cannot be done but can subtract
    printf("%d",*p);//*p stores value of variable 'a'
    printf("\n%d",*q);
    printf("\n%d",p);//p stores the address of variable 'a'
    printf("\n%d",q);
    printf("\n%d",&a);//&'variable name' prints address of variable 'a'
    printf("\n%d",&b);
    printf("\n%d",a);//'variable name' prints value of variable 'a'
    printf("\n%d",c);
    return 0;
}