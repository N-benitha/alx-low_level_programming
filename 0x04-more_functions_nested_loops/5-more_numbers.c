#include "main.h"
/**
 * more_numbers - prints 10 times numbers from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j, res1, res2;

	j = 0;

	while (j < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i < 10)
			{
				res2 = i;
			}
			else
			{
				res1 = i / 10;
				res2 = i % 10;
				_putchar(res1 + '0');
			}
			_putchar(res2 + '0');
		}
		j++;

		i = 0;
	}
	_putchar('\n');
}
