#include<stdio.h>
int main()
{
    int age;
    printf("enter your age : ");
    scanf("%d",&age);
    
    if(age>=18)
    {
        goto VOTE;
    }
    else
    {
        printf("NOT ELIGIBLE");
    }
    VOTE: printf("\nELIGIBLE\0");
    return 0;

}