#include <stdio.h>

// void test0()
// {
//     return 10;
// }

void test1()
{
    void *p = NULL;
    int *pInt = NULL;
    char *pChar = NULL;
    // pChar = pInt;
    pChar = p;
}

int main(int argc, char const *argv[])
{
    // printf("%d\n", test0());
    test1();
    return 0;
}
