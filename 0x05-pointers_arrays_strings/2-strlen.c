#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: string
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	return (len);
}
