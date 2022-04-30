#include<stdio.h>
#define a 100
int main()
{
    #if(a==100)
    printf("yes defined");
    #else
    printf("not defined");
    #endif
    return 0;
}