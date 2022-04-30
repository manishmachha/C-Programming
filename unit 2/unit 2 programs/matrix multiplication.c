 #include<stdio.h>
 int main()
 {
    int a[10][10],b[10][10],c[10][10],i,j,k,r1,c1,r2,c2,mul=0;
    printf("enter rows of a : ");
    scanf("%d",&r1);
    printf("enter columns of a : ");
    scanf("%d",&c1);
    printf("enter elements of matrix A : " );
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter rows of b : ");
    scanf("%d",&r2);
    printf("enter columns of b : ");
    scanf("%d",&c2);
    if(c1!=r2)
        printf("matrix multiplication not possible");
        else
        {
            printf("enter elements of matrix B : " );
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<r2;k++)
                {
                    mul=mul+a[i][k]*b[k][j];
                }
                c[i][j]=mul;
                mul=0;
            }
        }
        printf("matrix multiplication is : \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
                printf("%d\t",c[i][j]);
                printf("\n");           
        }
        }                    
    return 0;
}