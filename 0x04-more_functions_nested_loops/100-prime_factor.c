#include <stdio.h>
/**
 * main - largest prime number
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long n, i, max;

	n = 612852475143;
	max = 1;

	for (i = 3; i <= n; i +=2)
	{
		while (n % i == 0)
		{
			max = n;
			n = n / i;
		}
	}
	printf("%lu\n", max);
	return (0);
}
