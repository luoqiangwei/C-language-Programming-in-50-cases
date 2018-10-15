#include <stdio.h>

int A()
{
    printf("A is completed\n");
    return 0;
}

int B()
{
    A();
    return 0;
}

int C()
{
    B();
    return 0;
}

int main(int argc, char* argv[])
{
    C();

    return 0;
}