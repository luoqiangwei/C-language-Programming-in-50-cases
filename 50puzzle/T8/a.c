#include <stdio.h>

int main(int argc, char* argv[])
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = i; j <= 9; j++)
		{
			printf("%d×%d=%-4d", i, j, i * j);
		}
		printf("\n");
	}

	return 0;
}