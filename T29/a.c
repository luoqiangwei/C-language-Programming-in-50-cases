#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int in = 0;
    int count = 0;
    if(argc > 1)
    {
        in = strtol(argv[1], NULL, 10);
    }
    else
    {
        scanf("%d", &in);
    }
    
    while(in)
    {
        printf("%d", in % 10);
        in /= 10;
        count++;
    }
    printf("\n%d\n", count);

    return 0;
}