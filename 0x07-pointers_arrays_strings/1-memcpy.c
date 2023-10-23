#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory area 1
 * @src: memory area 2
 * @n: bytes to copy
 *
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
