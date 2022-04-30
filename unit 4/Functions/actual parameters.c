#include <stdio.h>
// Function declaration or Function Signature
int add(int, int);
int main()
{
    int a, b, sum;
    printf("enter a and b : ");
    scanf("%d %d", &a, &b);
    sum = add(a, b); // a and b are actual parameters  add(a,b)-----> calling function
    printf("sum : %d", sum);
    return 0;
}
// Function Definition
int add(int x, int y) // x and y are formal parameters  add(int x, int y)-------> Called function
{
    int res;
    res = x + y;
    return res;
}