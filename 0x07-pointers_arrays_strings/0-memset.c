#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @b: byte
 * @n: nummber of bytes to fill
 *
 * Return: pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
