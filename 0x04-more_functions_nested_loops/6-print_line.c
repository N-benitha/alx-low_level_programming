#include "main.h"
/**
 * print_line - straight line
 * @n: parameter to draw _
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	for (i = 0; i <= n; i++)
	{
		if (i <= 0)
			_putchar('\n');
		else
			_putchar(95);
	}
	_putchar('\n');
}
