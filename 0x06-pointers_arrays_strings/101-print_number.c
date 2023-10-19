#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 * Return: Always 0
 */

void print_number(int n)
{
	unsigned int i = 1;

	if (n < 0)
	{
		_putchar('-');
		n = (unsigned int)-n;
	}
	if (n == 0)
		_putchar('0');
	else
	{
		while ((n / i) > 0)
			i *= 10;

		while (i > 1)
		{
			i /= 10;
			_putchar((n / i) + '0');
			n %= i;
		}
	}
	_putchar('\n');
}