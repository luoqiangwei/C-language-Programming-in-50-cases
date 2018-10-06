#include <stdio.h>

int main(int argc, char* argv[])
{
    int a[10];
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 1; i < 10; i++)
    {
        for(int j = 1; j <= 10 - i; j++)
        {
            if(a[j-1] > a[j])
            {
                int t = a[j-1];
                a[j-1] = a[j];
                a[j] = t;
            }
        }
    }

    for(int i = 0; i < 10; i++)
        printf("%d\t", a[i]);
    printf("\n");

    return 0;
}