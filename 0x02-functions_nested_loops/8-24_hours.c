#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int n, m;

	for (n = 0; n < 24; n++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
