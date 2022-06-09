int _putchar(char c);
void print_alphabet(void)
{
	int i = 0;

	while(i < 10)
	{
		char c;

		for(c = 'a'; c <= 'z'; c++)
			_putchar(c);

		i++;
		_putchar('\n');
	}
}
