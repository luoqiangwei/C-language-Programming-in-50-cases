#include <stdio.h>

#define true 1
#define false 0

int length(int a);
int check(int a, int b);

// 小明发现了一个奇妙的数字。它的平方和立方正好把0~9的10个数字每个用且只用了一次。
// 你能猜出这个数字是多少吗？

// 请填写该数字，不要填写任何多余的内容。

int main(int argc, char* argv[])
{
    for(int i = 1; ; i++)
    {
        int mi = i * i;
        int ma = i * i * i;
        if(length(mi) + length(ma) < 10) continue;
        if(check(mi, ma))
        {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}

int check(int a, int b)
{
    int store[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    while(a)
    {
        int t = a % 10;
        a /= 10;
        store[t]++;
    }
    while(b)
    {
        int t = b % 10;
        b /= 10;
        store[t]++;
    }
    for(int i = 0; i < 10; i++)
    {
        if(store[i] != 1) return false;
    }
    return true;
}

int length(int a)
{
    int count = 0;
    while(a)
    {
        count++;
        a /= 10;
    }
    return count;
}