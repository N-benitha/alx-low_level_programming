#include "main.h"

/**
 * palindrome1 - gets length of a
 * @a: string
 * @l: int to count length
 * Return: 1 if success, -1 otherwise
 */

int palindrome1(char *a, int l)
{
	if (*a == 0)
		return (l - 1);
	return (palindrome1(a + 1, l + 1));
}
/**
 * palindrome2 - compares string to reverse string
 * @a: string
 * @l: length
 * Return: 1 if successful, -1 otherwise
 */

int palindrome2(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (palindrome2(a + 1, l - 2));
}
/**
 * is_palindrome - checks if string is palindrome
 * @s: string
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int l;

	l = palindrome1(s, 0);
	return (palindrome2(s, l));
}
