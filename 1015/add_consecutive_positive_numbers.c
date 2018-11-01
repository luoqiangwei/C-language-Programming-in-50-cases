#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv)
{
    int in = 0;
    if (argc > 1)
    {
        in = strtol(argv[1], NULL, 10);
    }
    else
    {
        scanf("%d", &in);
    }
    int store[10000];
    for(int i = 0; i < in / 2 + 1; i++)
        store[i] = i + 1;

    char isNone = 1;
    for (int i = 0; i < in / 2 + 1; i++)
    {
        int curr = 0;
        for(int j = i; j < in / 2 + 1; j++)
        {
            curr += store[j];
            if(curr > in) break;
            else if(curr == in)
            {
                isNone = 0;
                for(int z = i; z <= j; z++) printf("%d ", store[z]);
                printf("\n");
                break;
            }
        }
    }
    if(isNone) printf("NONE\n");

    return 0;
}