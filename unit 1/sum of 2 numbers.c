#include <stdio.h>
int main()
{
    int s, t, p;
    printf("Enter values of s and t : ");
    scanf("%d %d", &s, &t);
    p = s + t;
    printf("sum of %d and %d is %d", s, t, p);
    return 0;
}