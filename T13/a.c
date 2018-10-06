#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
    for (int i = 100, flag = 0; i < 1000; i++)
    {
        flag = (int)pow(i % 10, 3) + (int)pow(i / 10 % 10, 3) + (int)pow(i / 100 % 10, 3) == i ? i : 0;
        if(flag) printf("%d\n", flag);
    }
    return 0;
}