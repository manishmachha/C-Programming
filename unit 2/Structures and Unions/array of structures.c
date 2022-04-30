#include<stdio.h>
struct employee
{
    char name[20];
    int id;
    int salary;
};
int main()
{
    int i;
    struct employee emp[10];
    for(i=0;i<10;i++)
    {
        printf("enter emp name : ");
        scanf("%s",emp[i].name);
        printf("enter emp id : ");
        scanf("%d",&emp[i].id);
        printf("enter emp salary : ");
        scanf("%d",&emp[i].salary);
    }
    for(i=0;i<10;i++)
    {;
        printf("\nemployee %d details",i);
        printf("\n name = %s",emp[i].name);
        printf("\n id = %d",emp[i].id);
        printf("\n salary = %d",emp[i].salary);
        printf("\n\n");
    }
    return 0;
}