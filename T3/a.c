#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
	long long i = 1;
	double garbage = 0;
	while (1)
	{
		if (modf(sqrt(i + 100), &garbage) == 0 && modf(sqrt(i + 268), &garbage) == 0) break;
		i++;
	}
	printf("%d\n", i);
	
	return 0;
}