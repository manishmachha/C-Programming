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
    fptr = fopen("FILES FOR EXECUTING\\2.bin","wb");
    for(n=1;n<2;n++)
    {
        struct employee e1 = {"manish",1,10};
        fwrite(&e1, sizeof(struct employee), 1, fptr);
    }
    fclose(fptr);
    return 0;

}