#include <stdio.h>
/**
 * main - Entry point
 * Description: printing the sum of all multiples of 3 or 5 below 1024
 * Return: Always 0
 */
int main(void)
{
	int i, j, k, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		j = i % 3;
		k = i % 5;
		if (j == 0 || k == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
