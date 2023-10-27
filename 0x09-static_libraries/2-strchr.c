#include "main.h"

/**
 * *_strchr - locates character in a string
 * @s: string
 * @c: character
 * Return: NULL if charcter not found, c otherwise
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			break;
	return (s[i] == c ? (s + i) : '\0');
}
