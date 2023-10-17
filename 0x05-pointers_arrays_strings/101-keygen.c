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

	n = 2772 - sum;
	if (n < 10)
	{
		pswd[98] = n + '0';
		pswd[99] = '\0';
	}
	else
	{
		pswd[98] = (n % 10) + '0';
		pswd[99] = (n / 10) + '0';
	}
	printf("\nPassword: %s\n", pswd);

	putchar('\n');
	printf("Password: %s\n, pswd);

	return (0);
}
