#include <stdio.h>

long long int factorial(int num);

int main(int argc, char* argv[])
{
    printf("%lld\n", factorial(5));

    return 0;
}

long long int factorial(int num)
{
    if(num == 1) return 1;
    return num * factorial(num - 1);
}