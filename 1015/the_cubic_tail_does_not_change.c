#include <stdio.h>

#define true 1
#define false 0

int main(int argc, char* argv)
{
    int count = 0;
    for(int i = 1; i < 10000; i++)
    {
        long long t = i * i * i;
        int currNum = i;
        char isSame = true;
        while(1)
        {
            if(!currNum) break;
            if(currNum && currNum % 10 != t % 10)
            {
                isSame = false;
            }
            currNum /= 10;
            t /= 10;
        }
        if(isSame) count++;
    }
    printf("%d\n", count);
    return 0;
}

// 立方尾不变

// 有些数字的立方的末尾正好是该数字本身。
// 比如：1,4,5,6,9,24,25,....

// 请你计算一下，在10000以内的数字中（指该数字，并非它立方后的数值），符合这个特征的正整数一共有多少个。

// 请提交该整数，不要填写任何多余的内容。