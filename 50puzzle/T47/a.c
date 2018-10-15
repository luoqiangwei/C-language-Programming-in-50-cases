#include <stdio.h>

#define max(a, b)  a > b ? a : b
#define swap(a, b) int t = a; a = b; b = t;

int main(int argc, char* argv[])
{
    printf("%d\n", max(123, 252));
    int a = 133;
    int b = 244;
    printf("%d\t%d\n", a, b);
    swap(a, b);
    printf("%d\t%d\n", a, b);
    
    return 0;
}