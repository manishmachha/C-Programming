#include <stdio.h>
void func(int x, int y)
{
    int sum;
    sum = x + y;
    printf("sum is : %d", sum);
}
int main()
{
    int a = 10, b = 20;
    func(a, b);
}