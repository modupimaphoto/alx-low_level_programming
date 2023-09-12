#include "main.h"
/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 10)
	{
		char c = 'a';

		while (a <= 'z')
		{
			_putchar(c);
			++c;
		}
		++i;
		putchar('\n');
	}
}
