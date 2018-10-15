#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int in = 0;
    int mod = 2;
    if(argc > 1)
    {
        in = strtol(argv[1], NULL, 10);
    }
    else
    {
        scanf("%d", &in);
    }

    while(in != 1)
    {
        if (in % mod == 0)
        {
            in /= mod;
            printf("%d\n", mod);
        }
        else
        {
            mod++;
        }
    }

    return 0;
}