#include "main.h"
/**
 * _strcat - concatenates 2 strings
 * @dest: string 1
 * @src: string 2
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
