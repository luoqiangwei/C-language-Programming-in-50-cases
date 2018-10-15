#include <stdio.h>

int main(int argc, char* argv[])
{
    for(int i = 0; i < 7; i++)
    {
        if(i < 4)
        {
            for(int j = 0; j < 7 / 2 - i; j++)
            {   
                printf("  ");
            }
            for(int j = 0; j < 2 * i + 1; j++)
            {
                printf(" *");
            }
        }
        else
        {
            for(int j = 0; j < 7 / 2 - (7 - i) + 1; j++)
            {   
                printf("  ");
            }
            for(int j = 0; j < 2 * (7 - i) - 1; j++)
            {
                printf(" *");
            }
        }
        printf("\n");
    }

    return 0;
}