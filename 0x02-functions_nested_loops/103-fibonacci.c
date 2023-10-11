#include <stdio.h>
/**
 * main - Entry point
 * Description: prints sum of even Fibonacci terms not above 4m
 * Return: Always 0
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	float sumtot;

	while (1)
	{
		sum = fib1 + fib2;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			sumtot += sum;

		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", sumtot);

	return (0);
}
