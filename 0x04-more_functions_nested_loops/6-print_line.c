#include "main.h"
/**
 * print_line - straight line
 * @n: parameter to draw _
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(95);
		}
	}

	_putchar('\n');
}
