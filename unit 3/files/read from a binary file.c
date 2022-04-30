#include<stdio.h>
int main()
{
    int n1,n2,n3;
    FILE *fptr;
    fptr = fopen("FILES FOR EXECUTING\\1.bin","rb");
    fread((&n1,&n2,&n3), sizeof(n1,n2,n3), 3, fptr);
    printf("n1:%d\nn2:%d\nn3:%d",n1,n2,n3);
    fclose(fptr);
    return 0;
}