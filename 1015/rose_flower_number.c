#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
    for (int i = 1000; i < 10000; i++)
        if ((int)pow(i % 10, 4) + (int)pow(i / 10 % 10, 4) + (int)pow(i / 100 % 10, 4) + (int)pow(i / 1000, 4) == i)
            printf("%d\n", i);

    return 0;
}

// i % 10
// i / 10 % 10
// i / 100 % 10
// i / 1000 % 10 = i / 1000