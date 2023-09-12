#include "main.h"
/**
 * print_varibles - entry point.
 *
 * _putchar
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		++c;
	}
	_putchar('\n');
}
