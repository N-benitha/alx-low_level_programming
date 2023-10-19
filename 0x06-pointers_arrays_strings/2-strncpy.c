#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: string 1
 * @src: string 2
 * @n: number of bytes
 *
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, k = 0;

	while (k < n)
	{
		if (src[k] == '\0')
		{
			for (k = 0; k < n; k++)
			{
				dest[i] = '\0';
				i++;
			}
		}
		else
		{
			dest[i] = src[k];
			k++;
			i++;
		}
	}
	return (dest);
}
