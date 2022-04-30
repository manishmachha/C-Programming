#include<stdio.h>
int main()
{
    int num;
    FILE *fptr;

    fptr = fopen("E:\\C Programming\\unit 3\\files\\FILES FOR EXECUTING\\1.txt","w");

    printf("enter number : ");
    scanf("%d",&num);

    fprintf(fptr,"%d",num);
    fclose(fptr);
    return 0;
}