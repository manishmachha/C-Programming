#include<stdio.h>
    struct employee
    {
        char name[20];
        int id;
        int salary;
    };
int main()
{
    int n;
    struct employee e1;
    FILE *fptr;
    fptr = fopen("FILES FOR EXECUTING\\2.bin","rb");

    for(n=1;n<2;n++)
    {
        fread(&e1, sizeof(struct employee), 1, fptr);
        printf("name : %s\nID : %d\nsalary : %d\n",e1.name,e1.id,e1.salary);
    }
    fclose(fptr);
    return 0;

}