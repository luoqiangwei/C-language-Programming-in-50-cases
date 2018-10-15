#include <stdio.h>
#include <stdlib.h>

int swap(int* x, int* y);

int main(int argc, char* argv[])
{
	int x = 0;
	int y = 0;
	int z = 0;
	
    if(argc > 1)
    {
        x = strtol(argv[1], NULL, 10);
        y = strtol(argv[2], NULL, 10);
        z = strtol(argv[3], NULL, 10);
    }
    else
    {
        scanf("%d %d %d", &x, &y, &z);
    }

	if (x > y) swap(&x, &y);
	if (x > z) swap(&x, &z);
	if (y > z) swap(&y, &z);
	printf("%d\t%d\t%d\n", x, y, z);

	return 0;
}

int swap(int* x, int* y)
{
	*x ^= *y;
	*y ^= *x;
	*x ^= *y;
	return 0;
}