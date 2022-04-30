#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10]={1,2,3,4,5};
printf("array : %d %d",arr[0],arr[1]);
arr[5]=6;
printf("\narray : %d",arr[5]);
getch();
}