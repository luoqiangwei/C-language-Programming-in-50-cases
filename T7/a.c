#include "stdio.h"

int main()
{
	char a=176,b=219;
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			if (i == j || 4 - i == j) printf ("%c%c", b, b);
			else printf("%c%c", a, a);
		}
		printf("\n");
	}
	return 0;
}
