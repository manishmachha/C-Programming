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
        printf("\n\n\n");


        union student
        {
            int id;
            char name[20];
            float perc;
        };
        union student s3;
        printf("enter s3 details : ");
        scanf("%d %s %f",&s3.id,s3.name,&s3.perc);
        printf("\ndetails of student s3 : ");
        printf("ID=%d , Name=%s , Percentage=%f",s3.id,s3.name,s3.perc);



        return 0;
}