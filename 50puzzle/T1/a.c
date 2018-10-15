#include <stdio.h>

int main(int argc, char *argv[])
{
	int count = 0;
	for (int i = 1; i <= 4; i++)
	{
		for (int j = 1; j <= 4; j++)
		{
			if (i == j) continue;
			for (int k = 1; k <= 4; k++)
			{
				if (j == k || i == k) continue;
				count++;
				printf("%d%d%d\n", i, j, k);
			}
		}
	}
	printf ("\n%d\n", count);
	return 0;
}