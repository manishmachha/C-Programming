#include<stdio.h>
#define height 100
int main()
{
    printf("height : %d\n",height);
    #undef height
    #define height 200
    printf("height : %d",height);
    return 0;
}