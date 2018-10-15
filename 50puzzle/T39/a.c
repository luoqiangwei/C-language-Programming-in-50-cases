#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int in = 0;
    int a[9] = {1, 34, 46, 57, 86, 96, 245, 467};
    if(argc > 1)
    {
        in = strtol(argv[1], NULL, 10);
    }
    else
    {
        scanf("%d", &in);
    }

    for(int i = 0; i < 8; i++)
    {
        if(a[i] > in)
        {
            for(int j = 8; j > i; j--)
                a[j] = a[j-1];
            a[i] = in;
            break;
        }
    }

    for(int i = 0; i < 9; i++)
        printf("%d\t", a[i]);
    printf("\n");

    return 0;
}