#include "main.h"
/**
 * _islower - checks for lowecase character
 * @c: parameter to be checked
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
