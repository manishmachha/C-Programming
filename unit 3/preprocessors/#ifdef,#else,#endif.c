#include<stdio.h>
#define MANISH 100
int main()
{
    #ifdef MANISH
    printf(" MANISH is defined");
    #else
    printf("MANISH is not defined");
    #endif
    return 0;
}