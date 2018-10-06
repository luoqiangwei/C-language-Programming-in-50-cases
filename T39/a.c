#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int in = 0;
    int a[] = {1, 34, 46, 57, 86, 96, 245, 467};
    if(argc > 1)
    {
        in = strtol(argv[1], NULL, 10);
    }
    else
    {
        scanf("%d", &in);
    }

    

    return 0;
}