#include "main.h"

/**
 * other_prime - allows to evaluate from 1 to n
 * @a: same as n
 * @b: iterates from 1 to n
 * Return: 1 if success
 */

int other_prime(int a, int b)
{
	if (a == b)
		return (1);
	if (a % b == 0)
		return (0);
	return (other_prime(a, b + 1));
}
/**
 * is_prime_number - for prime numbers
 * @n: number
 * Return: 1 if prime, -1 otherwise
 */



int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (other_prime(n, 2));
}
