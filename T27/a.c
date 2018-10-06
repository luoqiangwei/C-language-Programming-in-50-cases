#include <stdio.h>
#include <stdlib.h>

int print(int num, char* str);

int main(int argc, char* argv[])
{
    char str[6];
    if(argc > 1)
    {
        for(int i = 0; i < 6; i++)
            str[i] = argv[1][i];
    }
    else
    {
        gets(str);
    }
    print(5 - 1, str);
    
    return 0;
}

int print(int num, char* str)
{
    printf("%c", str[num]);
    if(num)
        print(num - 1, str);
}