#include<stdio.h>

int main(int argc, char* argv[])
{
	const int p = 15;
	for (int y = -30; y < 30; y++)
	{
		for(int x = 0; x < 30; x++)
		{
			if(y * y - 20 < 2 * p * x && 2 * p * x < y * y + 20)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}

	return 0;
}