#include <stdio.h>

int main(int argc, char* argv[])
{
    double count = 0;
    double A = 2;
    double B = 1;
    double O = 1;

    for(int i = 0; i < 20; i++)
    {
        count += A / B;
        O = A;
        A = A + B;
        B = O;
    }
    printf("%f\n", count);

    return 0;
}