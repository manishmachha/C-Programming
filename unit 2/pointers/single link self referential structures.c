#include<stdio.h>
int main()
{
    //structure declaration
    struct student
    {
        int id;
        int salary;
        struct student *p;
    };
    //structure var1 initialization
    struct student s1;
    s1.id = 1;
    s1.salary = 10;
    //structure var2 initialization
    struct student s2;
    s2.id = 3;
    s2.salary = 15;
    //linking s1 and s2
    s1.p = &s2;
    //accessing members of s2 using s1
    printf("%d", s1.p->id);
    printf("\n%d",s1.p->salary);
    return 0;
}