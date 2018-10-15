#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int I = 0;
	double percnet[] = { 0.1, 0.075, 0.5, 0.5, 0.03, 0.03, 0.015, 0.015, 0.015, 0.015, 0.01 };
	int max = sizeof(percnet) / sizeof(double) - 1;
	double count = 0;
	int loop = 0;

    if(argc > 1)
    {
        I = strtol(argv[1], NULL, 10);
    }
    else
    {
        scanf("%d", &I);
    }
	
	while (1)
	{
		if (I < 100000)
		{
			count += I * percnet[loop];
			break;
		}
		count += 100000 * percnet[loop];
		if (loop < max) 
		{
			loop++;
		}
		I -= 100000;
	}

	printf("%0.2f\n", count);
	return 0;
}
