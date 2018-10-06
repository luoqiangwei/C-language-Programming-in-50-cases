#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int in = 0;
    if(argc > 1)
    {
        in = strtol(argv[1], NULL, 10);
    }
    else
    {
        scanf("%d", &in);
    }

    printf("%c\n", in >= 90 ? 'A' : in >= 60 ? 'B' : 'C');

    return 0;
}