#include <stdio.h>

void X(int x);
void D(int x);

int main(int argc, char *argv[])
{
    int m = 0;
    int n = 0;
    scanf("%d%d", &m, &n);
    int x = n + (m - 1);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < x; j++)
        {
            int a = n - i;
            int b = n - m - i;
            if(j >= i && j < i + m || j < x - i && j >= x - m - i) X(1);
            else(D(1));
        }
        printf("\n");
    }


    return 0;
}

void X(int x)
{
    while(x-- > 0)
        printf("*");
}

void D(int x)
{
    while(x-- > 0)
        printf(".");
}