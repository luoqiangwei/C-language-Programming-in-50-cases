#include <stdio.h>

int main(int argc, char* argv[])
{
    char num[5];
    int isHuiwen = 1;
    if(argc > 1)
    {
        for(int i = 0; i < 5; i++)
            num[i] = argv[1][i];
    }
    else
    {
        gets(num);
    }

    for(int i = 0; i < 5 / 2; i++)
        if(num[i] != num[5 - 1 - i]) isHuiwen = 0;

    if(isHuiwen)
        printf("TRUE\n");
    else
        printf("FALSE\n");

    return 0;
}