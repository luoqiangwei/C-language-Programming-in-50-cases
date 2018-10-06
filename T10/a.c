#include "stdio.h"
#include "conio.h"
int main(int argc, char* argv[])
{
    printf("\1\1\n");
    for (int i = 0; i < 10; i++)
    {
        for(int j = 0; j < (i + 1) * 2; j++)
        {
            printf("%c", 219);
        }
        printf("\n");
    }
    return 0;
}
