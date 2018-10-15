#include <stdio.h>

// 下列程序的输出是(B) 。
// main()
// {int x;
// printf("%d\n",(x=3*5,x*2,x+10));}

int main(int argc, char* argv[])
{
    int x;
    printf("%d\n", (x = 3 * 5, x * 2, x + 10));
    return 0;
}

// x = 15
// x * 2 = 30
// x + 10 = 25 返回（输出）最后产生的这个数值
// x=(i=4,j=16,k=32) 也是同理，最后x的值为32

// main()
// {int a,b;
// a=50;b=90;
// printf("%d\n",(a,b));
// }
// 上面也是同理，最后输出的是90
