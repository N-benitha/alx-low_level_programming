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
		return (lastdigit * -1);

	_putchar(last_digit + '0');

	return (last_digit);

}
