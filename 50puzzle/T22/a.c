#include <stdio.h>

int main(int argc, char* argv[])
{
    char A[] = {'a', 'b', 'c'};
    char B[] = {'x', 'y', 'z'};
    for(int i = 0; i < sizeof(B) / sizeof(char); i++)
    {
        for(int j = 0; j < sizeof(B) / sizeof(char); j++)
        {
            for(int z = 0; z < sizeof(B) / sizeof(char); z++)
            {
                if(i == j || i == z || j == z || B[i] == 'x' || B[z] == 'x' || B[z] == 'z') continue;
                printf("%c\t%c\n%c\t%c\n%c\t%c\n", A[0], B[i], A[1], B[j], A[2], B[z]);
            }
        }
    }

    return 0;
}