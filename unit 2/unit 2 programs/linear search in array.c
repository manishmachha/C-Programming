#include<stdio.h>
int main()
{
  int n,c,search,arr[100];
  printf("enter no of elements : ");
  scanf("%d",&n);
  printf("enter elements : ");
  for(c=0;c<n;c++)
  {
   scanf("%d",&arr[c]);
  }
  printf("enter number to search : ");
  scanf("%d",&search);
  for(c=0;c<n;c++)
  {
    if(arr[c]==search)
    {
      printf("%d is found at location %d",search,c+1);
      break;
    }
  }
    if(c==n)
    {
      printf("%d is not found in array",search);
    }
    return 0;
}