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

struct Person
{
    char name[64];
    int age;
};

void printPerson(void *data)
{
    struct Person *p = data;
    printf("%s\t%d\n", p->name, p->age);
}

void test1()
{
    struct Person p = {"aaa", 10};
    printText(&p, printPerson);
}

int main(int argc, char const *argv[])
{
    test0();
    test1();
    return 0;
}
