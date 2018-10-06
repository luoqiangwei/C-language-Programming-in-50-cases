#include <stdio.h>

int swap(int* x, int* y);

int main(int argc, char* argv[])
{
	int x = 0;
	int y = 0;
	int z = 0;
	int t = 0;
	scanf("%d %d %d", &x, &y, &z);
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