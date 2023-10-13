#include "main.h"
/**
 * more_numbers - prints 10 times numbers from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	j = 0;

	while (j < 10)
	{
		for (i = 0; i <= 14; i++)
			_putchar(i + '0');
		_putchar('\n');
		j++;
	}
	_putchar('\n');
}
