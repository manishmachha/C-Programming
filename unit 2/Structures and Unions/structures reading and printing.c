#include<stdio.h>
struct student
    {
        int id;
        char name[20];
        float perc;
    };
int main()
{
    
        struct student s1={10,"abc",78.5};
        struct student s2;
        printf("enter s2 details : ");
        scanf("%d %s %f",&s2.id,s2.name,&s2.perc);
        printf("details of student s1 : ");
        printf("ID=%d , Name=%s , Percentage=%f",s1.id,s1.name,s1.perc);
        printf("\ndetails of student s2 : ");
        printf("ID=%d , Name=%s , Percentage=%f",s2.id,s2.name,s2.perc);

        return 0;
}
