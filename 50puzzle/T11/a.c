#include <stdio.h>

int main(int argc, char* argv[])
{
    unsigned long long int store[90];
    store[0] = store[1] = 1;
    for(int i = 0; i < sizeof(store) / sizeof(unsigned long long int); i++)
    {
        if (i > 1)
            store[i] = store[i - 1] + store[i - 2];
        printf("%lld\n", store[i]);
    }
    return 0;
}