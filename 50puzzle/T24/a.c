#include <stdio.h>

int main(int argc, char* argv[])
{
    double count = 0;
    double A[20];
    double B[20];
    A[0] = 2;
    A[1] = 3;
    B[0] = 1;
    B[1] = 2;
    for(int i = 2; i < 20; i++)
    {
        A[i] = A[i-1] + A[i-2];
        B[i] = B[i-1] + B[i-2];
    }

    for(int i = 0; i < 20; i++)
    {
        count += A[i] / B[i];
    }
    printf("%f\n", count);

    return 0;
}