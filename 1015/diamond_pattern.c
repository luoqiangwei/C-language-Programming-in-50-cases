#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int in = 0;
    if(argc > 1)
    {
        in = strtod(argv[1], NULL);
    }
    else
    {
        scanf("%d", &in);
    }

    if (in % 2 == 0) return -1;

    for (int i = 0; i < in / 2 + 1; i++)
    {
        for (int j = 0; j < in / 2 - i; j++)
        {
            printf("  ");
        }
        for (int k = 0; k <= 2 * i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    for (int i = 0; i < in / 2; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("  ");
        }
        for(int k = 0; k < (in / 2 - i) * 2 - 1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}