#include "main.h"
/**
 * times_table - check the code.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	for (int i = 0; i <= 10; i++)
	{
		int product = 9 * i;

		_putchar('9');
		_putchar(' ');
		_putchar('x');
		_putchar(' ');
		_putchar(i + '0');
		_putchar(' ');
		_putchar('=');
		_putchar(' ');
		if (product < 10)
		{
			_putchar(product + '0');
		}
		else
		{
			_putchar(product / 10 + '0');
			_putchar(product % 10 + '0');
		}
		_putchar('\n');
	}
}
