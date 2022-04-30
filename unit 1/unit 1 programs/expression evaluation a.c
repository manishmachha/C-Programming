#include <stdio.h>

#include <math.h>

int time(float t);

int s = 3;

float a = 9.8;

int main()

{

    float t;

    t = sqrt((2 * s) / a);

    printf("The time taken to reach floor is %f\n", t);

    time(t);
}

int time(float t)

{

    float t1;

    s = s + 3;

    if (s <= 30)

    {

        t1 = sqrt((2 * s) / a);

        printf("The time taken to reach floor is %f\n", t1 - t);

        time(t1);
    }
}
