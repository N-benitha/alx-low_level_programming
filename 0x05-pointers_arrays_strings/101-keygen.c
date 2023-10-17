#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - generates random passwords
 *
 * Return: Always 0
 */

int main(void)
{
	int i, sum, n;
	int pswd[100];
	
	sum = 0;

	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
		pswd[i] = rand() % 78;
		sum += (pswd[i] + '0');
		putchar(pswd[i] + '0');
		if ((2272 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
