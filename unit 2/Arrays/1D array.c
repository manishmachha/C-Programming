#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10],i,n;
printf("Enter the number of elements to be inserted(<=10):");
scanf("%d",&n);
printf("\nInsert values:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("\nOne dimensional array : ");
for(i=0;i<n;i++)
{
printf(" %d",arr[i]);
}
getch();
}