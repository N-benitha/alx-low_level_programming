#include "main.h"
/**
 * main - check code
 * Description: prints alphabets in lower case
 * Return: Always 0.
 */
int main (void)
{
	print_aplhabet();

	_putchar('\n');

	return (0);
}
void print_aplhabet(void)
{
	for(int i= 'a'; i <= 'z'; i++)
		_putchar(i);
}
