#include <stdio.h>
// 以下程序的输出结果是
// #include <stdio.h>
// void main()
// {
// unsigned char a,b;
// a=0x0a|3;
// b=0x0a&3;
// printf("%d %d\n",a,b);
// }

int main(int argc, char* argv[])
{
    unsigned char a, b;
    a = 0x0a | 3;
    b = 0x0a & 3;
    // 11 2
    printf ("%d %d\n", a, b);
    return 0;
}
