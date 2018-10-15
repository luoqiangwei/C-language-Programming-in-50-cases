#include <stdio.h>

int main(int argc, char* argv[])
{
    int count = 0;
    int a[3][3];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < 3; i++)
    {
        count += a[i][i];
        count += a[i][2-i];
    }
    count -= a[1][1];
    printf("%d\n", count);

    return 0;
}