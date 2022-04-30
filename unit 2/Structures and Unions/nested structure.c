#include<stdio.h>
struct student
{
    int id;
    char name[20];
    //nested structure
    struct dob 
    {
        int day;
        char month[20];
        int year;
    }d1;
};
int main()
{
    struct student s1;
    printf("enter s1 details : ");
    printf("\nenter id : ");
    scanf("%d",&s1.id);
    printf("\nenter name : ");
    scanf("\n%s",s1.name);
    printf("\nenter Day : ");
    scanf("%d",&s1.d1.day);
    printf("\nenter year : ");
    scanf("%d",&s1.d1.year);
    printf("\nenter month : ");
    scanf("%s",s1.d1.month);
    printf("\nDetails of student s1 : ");
    printf("\nid=%d",s1.id);
    printf("\nname=%s",s1.name);
    printf("\nday=%d",s1.d1.day);
    printf("\nmonth=%s",s1.d1.month);
    printf("\nyear=%d",s1.d1.year);
    return 0;

}