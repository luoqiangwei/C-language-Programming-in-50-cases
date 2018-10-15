#include <stdio.h>

int main(int argc, char* argv[])
{
    register int i = 0;
    while(1)
    {
        printf("%d\n", i);
        i++;
        if(i == 1000) break;
    }

    return 0;
}