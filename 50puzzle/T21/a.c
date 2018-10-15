#include <stdio.h>

int main(int argc, char* argv[])
{
    int count = 1;
    int times = 9;
    while(times--)
    {
        count = 2 * (count + 1);
    }
    printf("%d\n", count);

    return 0;
}