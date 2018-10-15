#include <stdio.h>

int main(int argc, char* argv[])
{
    long long int count = 0;
    long long int num = 1;
    for(int i = 1; i <= 20; i++)
    {
        num *= i;
        count += num;
    }
    printf("%lld\n", count);

    return 0;
}