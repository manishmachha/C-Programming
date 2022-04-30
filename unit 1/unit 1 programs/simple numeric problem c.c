#include<stdio.h>
void main()
{
    int a;
    printf("enter your percentage : ");
    scanf("%d", &a);
    if (a < 40)
    {
        printf("Failed");
    }
    else if (a == 40 || a < 60)
    {
        printf("Second Class");
    }
    else if (a == 60 || a < 70)
    {
        printf("First Class");
    }
    else
    {
        printf("Distinction");
    }
}