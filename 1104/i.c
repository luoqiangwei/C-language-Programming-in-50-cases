#include <stdio.h>

void printText(void *a, void(*myPrint)(void*))
{
    myPrint(a);
}

void myPrintInt(void *data)
{
    int *num = data;
    printf("%d\n", *num);
}

void test0()
{
    int a = 200;
    printText(&a, myPrintInt);
}

int main(int argc, char const *argv[])
{
    test0();
    return 0;
}
