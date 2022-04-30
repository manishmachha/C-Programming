#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("b.txt","r");

    fseek(fp, 0, 2);
    printf("pointer position : %d\n",ftell(fp));

    fseek(fp,10,0);
    printf("pointer position : %d\n",ftell(fp));

    fseek(fp,-15,2);
    printf("pointer position : %d\n",ftell(fp));
    
    rewind(fp);
    printf("pointer position : %d",ftell(fp));
    return 0;

}