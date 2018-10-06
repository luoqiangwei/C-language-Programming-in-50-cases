#include "stdio.h"
#include "conio.h"
int main(int argc, char* argv[])
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if((i + j) % 2 == 0) printf("  ");
            else printf("%c%c", 219, 219);
        }
        printf("\n");
    }
    return 0;
}
