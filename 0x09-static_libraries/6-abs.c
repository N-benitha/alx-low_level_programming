#include "main.h"
/**
 * _abs - computes absolute value of an integer
 * @n: takes in an integer
 * Return: n if positive or zero, -n if negative
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);

	else
		return (n);
}
