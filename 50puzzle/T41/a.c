#include <stdio.h>

static int a = 100;

int A()
{
    a = 200;
    return 0;
}

int B()
{
    a += 100;
    return 0;
}

int main(int argc, char* argv[])
{
    A();
    printf("%d\n", a);
    B();
    printf("%d\n", a);
    printf("%d\n", a - 200);

    return 0;
}