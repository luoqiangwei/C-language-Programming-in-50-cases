#include <stdio.h>

int main(int argc, char* argv[])
{
    int base = 10;
    for(int i = 1; i < 5; i++)
        base += 2;
    printf("%d\n", base);

    return 0;
}