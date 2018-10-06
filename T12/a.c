#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
    int count = 0;
    int flag = 0;
    for(int i = 101; i <= 200; i++)
    {
        for(int j = 2; j < sqrt(i); j++)
        {
            if(i % j == 0) 
            {
                flag = !flag;
                break;
            }
        }
        if(!flag)
        {
            printf("%d\n", i);
            count++;
        }
        flag = 0;
    }
    printf("\n%d\n", count);
    return 0;
}