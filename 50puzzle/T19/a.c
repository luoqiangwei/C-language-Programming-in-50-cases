#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
    for(int i = 2; i < 1000; i++)
    {
        int sum = 1;
        for(int j = 2; j < i; j++)
        {
            if(i % j == 0) sum += j;
        }
        if(i == sum) 
            printf("%d\n", i);
    }

    return 0;
}