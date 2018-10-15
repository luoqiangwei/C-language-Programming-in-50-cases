#include <stdio.h>
#include <stdlib.h>

int swap(int* x, int* y);

int main(int argc, char* argv[])
{
    int m = 0;
    int n = 0;
    if(argc > 1)
    {
        m = strtol(argv[1], NULL, 10);
        n = strtol(argv[2], NULL, 10);
    }
    else
    {
        scanf("%d%d", &m, &n);
    }

    if(m < n) swap(&m, &n);

    int mMn = m * n;
    int r = 1;
    while(r)
    {
        r = m % n;
        m = n;
        n = r;
    }
    printf("%d\t%d\n", m, mMn / m);

    return 0;
}

int swap(int* x, int* y)
{
	*x ^= *y;
	*y ^= *x;
	*x ^= *y;
	return 0;
}