#include <stdio.h>

int main(int argc, char* argv)
{
    const int goal = 2015;
    int a[49];
    for(int i = 1; i < 50; i++)
    {
        a[i-1] = i;
    }
    
    for(int i = 0; i < 49;  i++)
    {
        for(int j = i; j < 49; j++)
        {
            if(i == j) continue;
            int count = 0;
            if(i + 1 == j)
            {
                count = a[i] * a[j] * a[j+1];
            }
            else
            {
                count = a[i] * a[i+1] + a[j] * a[j+1];
            }
            for(int k = 0; k < 50; k++)
            {
                if(k == i || k == i+1 || k == j || k == j+1) continue;
                count += a[k];
            }
            if(count == goal) printf("%d\t%d\n", i+1, j+1);
            // 16
        }
    }

    return 0;
}

// 加法变乘法

// 我们都知道：1+2+3+ ... + 49 = 1225
// 现在要求你把其中两个不相邻的加号变成乘号，使得结果为2015

// 比如：
// 1+2+3+...+10*11+12+...+27*28+29+...+49 = 2015
// 就是符合要求的答案。

// 请你寻找另外一个可能的答案，并把位置靠前的那个乘号左边的数字提交（对于示例，就是提交10）。

// 注意：需要你提交的是一个整数，不要填写任何多余的内容。