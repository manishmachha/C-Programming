#include <stdio.h>
int func(int *x, int *y)
{
    int temp;
    temp = *x - *y;
    *x = *x + *y;
    *y = temp;
}
int main()
{
    int a = 5, b = 3;
    printf("a is %d\nb is %d\n", a, b);
    printf("after function : \n");
    func(&a, &b);
    printf("a is %d\nb is %d\n", a, b);
    return 0;
}