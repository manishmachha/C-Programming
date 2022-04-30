#include<stdio.h>
int main()
{
    enum week{mon,tue,wed,thurs,fri,sat,sun};
    enum week day=wed;
    printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n\n",mon,tue,wed,thurs,fri,sat,sun);
    printf("%d",day);
    return 0;
}