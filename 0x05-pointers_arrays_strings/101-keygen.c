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
	for (i = 0; i < 99; i++)
	{
		pswd[i] = rand() % 78 + 48;
		sum += (pswd[i] - '0');
		putchar(pswd[i]);
	}
	n = 2772 - sum - '0';
	pswd[99] = n + '0';
	putchar(n);
	putchar('\n');

	return (0);
}
