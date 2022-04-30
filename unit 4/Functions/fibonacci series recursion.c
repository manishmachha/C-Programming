#include <stdio.h>
int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return (fib(n - 1) + fib(n - 2));
    }
}
int main()
{
    int num, i = 0, n;
    printf("enter no of elements : ");
    scanf("%d", &num);
    printf("fibonacci series is : ");
    for (n = 1; n <= num; n++)
    {
        printf("%d ", fib(i));
        i++;
    }
    return 0;
}