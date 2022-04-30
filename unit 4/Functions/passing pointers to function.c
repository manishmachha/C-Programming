#include<stdio.h>
int func2(int *ptr)
{
    for (int i = 0; i < 5; i++)
    {
        printf("value at %d is %d\n", i, ptr[i]);
        //printf("value at %d is %d\n", i, *(ptr+i));
    }
    // very important that if we change any value here, it gets reflected in main()
    return 0;
}


int main()
{
    int n, array[5]={12,65,78,96,34};
    func2(array);
    return 0;

}