#include<stdio.h>
int main()
{
    char ch, file1[10], file2[10], file3[20];
    FILE *fptr1, *fptr2, *fptr3;
    printf("enter file name of first file : \n");
    gets(file1);
    printf("enter file name of second file : \n");
    gets(file2);
    printf("enter file name to store merged file : \n");
    gets(file3);
    fptr1 = fopen("1.txt","r");
    fptr2 = fopen("2.txt","r");
    fptr3 = fopen("3.txt","w");

    while ((ch = fgetc(fptr1)) != EOF)
    fputc(ch, fptr3);
    while ((ch = fgetc(fptr2)) != EOF)
    fputc(ch, fptr3);
    
    printf("two files merged succesfully\n");
    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);

    return 0;

}