#include <stdio.h>
// 如有以下程序： unsigned int a=6; int b=-20; char c; c=(a+b>6);则c 的值为

int main(int argc, char* argv[])
{
    unsigned int a = 6;
    int b = -20;  
    char c;
    c = (a + b > 6);  // a + b   int -> unsigned; b > 0
    printf("%d\n", c);
    return 0;
}
