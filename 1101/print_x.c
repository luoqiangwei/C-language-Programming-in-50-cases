#include <stdio.h>

void X(int x);
void D(int x);

int main(int argc, char *argv[])
{
    int m = 0;
    int n = 0;
    scanf("%d%d", &m, &n);
    int mid = n / 2 + 1;
    int t = m;
    for(int i = 0; i < mid; i++)
    {
        D(i);
        X(m);
        D(mid - 2 * i);
        if(i >= mid - m + 1)
        {
            if(mid - 2 * (i - 1) == 1) t -= 1;
            else t -= 2;
            X(t);
        }
        else X(m);
        D(i);
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