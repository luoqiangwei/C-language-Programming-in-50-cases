#include <stdio.h>

int fallDown(double height, int times, double* countLong, double* lastHeight);

int main(int argc, char* argv[])
{
    double countLong = 0;
    double lastHeight = 0;
    fallDown(100, 10, &countLong, &lastHeight);
    printf("%f\t%f\n", countLong, lastHeight);

    return 0;
}

int fallDown(double height, int times, double* countLong, double* lastHeight)
{
    *countLong = 0;
    *lastHeight = 0;
    while(times--)
    {
        *countLong += height + height / 2;
        height = height / 2;
    }
    *lastHeight = height;

    return 0;
}