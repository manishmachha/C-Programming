#include <stdio.h>
int func(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("value at %d,%d is %d\n", i, j, arr[i][j]);
        }
    }
    return 0;
}
int main()
{
    int array[2][2] = {{13, 65}, {74, 90}};
    func(array);
    return 0;
}