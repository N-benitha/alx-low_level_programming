#include "main.h"
/**
 * cap_string - capitalizing a whole string
 * @s: string
 *
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	int i = 1, j, check;
	char a[0] = ',';
	char a[1] = ';';
	char a[2] = '.';
	char a[3] = '!';
	char a[4] = '?';
	char a[5] = '"';
	char a[6] = '(';
	char a[7] = ')';
	char a[8] = '{';
	char a[9] = '}';
	char a[10] = '\n';
	char a[11] = '\t';
	char a[12] = ' ';

	if (s[0] > 96 && s[0] < 123)
		s[0] -= 32;

	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
		{
			j = 0;
			check = 0;
			while (check == 0 && j < 13)
			{
				if (s[i - 1] == a[j])
				{
					check = 1;
				}
				j++;
			}
			if (check == 1)
			{
				s[i] -= 32;
			}
		}
		i++;
	}
	return (s);
}
