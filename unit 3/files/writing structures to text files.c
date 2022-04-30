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
    printf("enter e1 details :");
    scanf("%s %d %f",e1.name,&e1.id,&e1.salary);
    fp = fopen("a.txt","w");
    for(n=1;n<2;n++)
    {
        fprintf(fp,"%s %d %f",e1.name,e1.id,e1.salary);
    }
    fclose(fp);
    return 0;

}
