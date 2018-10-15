#include <stdio.h>

int main(int argc, char* argv[])
{
    int a[] = {23, 35, 12, 53, 1166, 4674, 2425, 23, 63, 13, 53};
    for(int i = sizeof(a) / sizeof(int) - 1; i >= 0; i--)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");

    return 0;
}