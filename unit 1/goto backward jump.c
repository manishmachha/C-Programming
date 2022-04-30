#include<stdio.h>
int main()
{
    int i,n;
    i=1;
    printf("enter n value : ");
    scanf("%d", &n);
    loop: printf("%d\n",i);
    i++;
    if(i<n)
    {
    goto loop;
    }
}