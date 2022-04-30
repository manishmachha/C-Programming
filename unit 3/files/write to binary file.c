#include<stdio.h>
int main()
{
    int n1,n2,n3;
    FILE *fptr;
    fptr = fopen("FILES FOR EXECUTING\\1.bin","wb");
    printf("enter n1 n2 n3 : ");
    scanf("%d %d %d",&n1,&n2,&n3);
    fwrite((&n1,&n2,&n3), sizeof(n1,n2,n3), 3, fptr);
    fclose(fptr);
    return 0;
}