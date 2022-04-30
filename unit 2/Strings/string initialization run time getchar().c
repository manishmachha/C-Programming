#include<stdio.h>
int main()
{
    char arr[15],ch;
    int i;
    printf("enter string : ");
    i=0;
    while(ch!='\n')
    {
        ch=getchar();
        arr[i]=ch;
        i++;
    }
    printf("%s",arr);
    return 0;
}