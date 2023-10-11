#include "main.h"
/**
 * _abs - absolute value of number
 *@n: number to be checked
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
