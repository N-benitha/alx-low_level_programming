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
	char pswd[100];
	
	sum = 0;

	srand(time(NULL));
	for (i = 0; i < 98; i++)
	{
		pswd[i] = rand() % 78 + 48;
		sum += (pswd[i] - '0');
		putchar(pswd[i]);
	}

	n = (2772 - sum) % 10;
	pswd[98] = n + '0';
	pswd[99] = 2772 - sum - n + '0';
	putchar(pswd[98]);
	putchar(pswd[99]);

	putchar('\n');

	return (0);
}
