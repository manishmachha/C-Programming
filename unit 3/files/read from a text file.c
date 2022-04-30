#include<stdio.h>
int main()
{
    int num;
    FILE *fptr;
    fptr = fopen("E:\\C Programming\\unit 3\\files\\FILES FOR EXECUTING\\1.txt","r");
    fscanf(fptr,"%d",&num);
    printf("value of n is %d",num);
    fclose(fptr);
    return 0;
}