#include<stdio.h>
int main()
{
    //structure defining
    struct student
    {
        int roll;
        char name[20];
        float perc;
    };
    //structure variable declaration
    struct student s1;
    //declaring pointer variable
    struct student *p;
    //initializing pointer variable to structure
    p=&s1;
    printf("enter s1 details : \n");
    //reading s1 details
    scanf("%d %s %f",&s1.roll,s1.name,&s1.perc);
    printf("details of student are : ");
    //using pointers to accsess members of structures
    printf("\nroll = %d",p->roll);
    printf("\nname = %s",p->name);
    printf("\npercentage = %f",p->perc);
    return 0;
}