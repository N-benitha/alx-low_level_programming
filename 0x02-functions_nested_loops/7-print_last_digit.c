#include "main.h"
/**
 * print_last_digit - last digit of a number
 * @n: parameter to be worked on
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
		return (last_digit * -1);
	else
		return (last_digit);

	_putchar(last_digit + '0');
	_putchar('\n');
}
