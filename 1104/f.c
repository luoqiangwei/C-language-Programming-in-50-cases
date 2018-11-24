#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 3;
    int b = 6;
    a ^= b;
    b ^= a;
    a ^= b;
    printf("%d\t%d\n", a, b);
    return 0;
}
