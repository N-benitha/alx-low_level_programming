#include "main.h"
/**
 * string_toupper - from lowercase to uppercase
 * @s: string
 *
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] > 'A' && s[i] < 'Z')
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}