#include <stdio.h>
int *fun()
{
    int a[4], k;
    for (k = 0; k < 4; k++)
        a[k] = k;
    return (a);
}
void main()
{
    int *p, j;
    p = NULL;
    p = fun();
    for (j = 0; j < 4; j++)
    {
        printf("%d\n", *p);
        p++;
    }
}
