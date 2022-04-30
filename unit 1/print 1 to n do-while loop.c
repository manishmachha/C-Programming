#include<stdio.h>
int main()
{
    int i,n;
    printf("enter n : ");
    scanf("%d", &n);
    i=1;
    do
    {
        printf("%d\n",i );
        i++;
    }
    while (i<=100);
    return 0;
}