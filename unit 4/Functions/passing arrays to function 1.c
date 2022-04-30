#include <stdio.h>
int func(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("value at %d is %d\n", i, arr[i]);
    }
   // arr[0] = 56; // very important that if we change any value here, it gets reflected in main()
    return 0;
}
int main()
{
    int n, array[5];
    printf("enter no of elements : ");
    scanf("%d", &n);
    printf("enter elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    func(array);
    //printf("value at index 0 is %d",array[0]);
    return 0;
}