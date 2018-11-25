#include <stdio.h>
#include <stddef.h>

struct Person
{
    char a;
    int b;
};

int main(int argc, char const *argv[])
{
    struct Person p1;
    struct Person *p = &p1;
    printf("n的偏移量为：%d\n", offsetof(struct Person, b));
    return 0;
}
