#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j, tmp;
    int A[] = {1, 4, 8, 1, 9, 4, 0, 67, 23, 75};
    for(i = 1; i < sizeof A / sizeof(int); i++)
    {
        for(j = 0; j < sizeof A / sizeof(int) + 1; j++)
        {
            if(A[j] > A[j+1])
            {
                A[j] ^= A[j+1];
                A[j+1] ^= A[j];
                A[j] ^= A[j+1];
            }
        }
    }

    for(i = 0; i < sizeof A / sizeof(int); i++)
    {
        printf("%d\n", A[i]);
    }
    return 0;
}
