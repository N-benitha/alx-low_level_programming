#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: takes in a number
 * Return: -1 if n is negative, otherwise 0
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
