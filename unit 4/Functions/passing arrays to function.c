#include <stdio.h>
int func(int arr[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("value at %d is %d\n", i, arr[i]);
    }
    return 0;
}
int main()
{
    int array[] = {13, 65, 74, 90};
    func(array);
    return 0;
}