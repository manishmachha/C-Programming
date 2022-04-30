#include<stdio.h>
struct employee
{
    char name[10];
    int id;
    float salary;
};
int main()
{
    int n;
    FILE *fp;
    struct employee e1;
    fp = fopen("a.txt","r");
    for(n=1;n<2;n++)
    {
        fscanf(fp,"%s %d %f",e1.name,&e1.id,&e1.salary);
        printf("name is %s\nid is %d\nsalary is %f",e1.name,e1.id,e1.salary);
    }
    fclose(fp);
    return 0;

}