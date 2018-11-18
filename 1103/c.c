#include <stdio.h>

int main(int argc, char const *argv[])
{
    char a[10], *b;
    b = a;
    // gets(a);
    // gets(a[0]); //无效
    // gets(&a[0]);
    gets(b);
    return 0;
}
