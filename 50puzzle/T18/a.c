#include <stdio.h>
#include <stdlib.h>

int copy(char* in, char* out, int offset);

int main(int argc, char* argv[])
{
    char store[1000];
    char* other;
    int sum = 0;
    if(argc > 1)
    {
        for(int i = 0; argv[1][i] != '\0'; i++)
        {
            store[i] = argv[1][i];
        }
    }
    else
    {
        gets(store);
    }

    while(1)
    {
        sum += strtol(store, &other, 10);
        if(other[0] != '\0')
            copy(other, store, 1);
        else
            break;
    }
    
    printf("%d\n", sum);
    return 0;
}

int copy(char* in, char* out, int offset)
{
    for(int i = 0; in[i] != '\0'; i++)
    {
        out[i] = in[i+offset];
    }
    return 0;
}