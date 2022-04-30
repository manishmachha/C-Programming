#include<stdio.h>
#define MANISH 100
int main()
{
    #ifndef ASHISH
    {
        printf("ASHISH is not defined");
    }
    #define ASHISH 200
    #else
    {
        printf("ASHISH is already defined");
    }
    #endif
    return 0;
}