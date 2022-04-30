#include<stdio.h>
int main()
{
    int a[5][5],b[5][5],sum[5][5],r,c,i,j;
    printf("enter rows and columns : ");
    scanf("%d %d",&r,&c);
    printf("enter elements of matrix A : ");
    for(i=0;i<r;i++)
    {    
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }                    
    printf("enter elements of matrix B : ");
    for(i=0;i<r;i++)
    {    
        for(j=0;j<c;j++)
        {        
            scanf("%d",&b[i][j]);
        }
    }                    
    printf("matrix addition is : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}