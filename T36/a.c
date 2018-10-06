#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
    for(int i = 2; i < 100; i++)
    {
        int no = 0;
        for(int j = 2; j <= sqrt(i); j++)
        {
            if(i % j == 0)
            {
                no = 1;
                break;
            }
        }
        if(!no) printf("%d\n", i);
    }

    return 0;
}