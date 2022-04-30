#include <stdio.h>
void main()
{
    int num1 = 0, num2 = 1, num3;
    printf("%d\n",num1);
    printf("%d\n",num2);
    for (int i = 1; i <= 10; i++)
    {
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
        printf("%d\n", num3);
    }
}