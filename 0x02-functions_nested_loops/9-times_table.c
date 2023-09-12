#include "main.h"
/**
 * times_table - check the code.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int j;

		for (j = 0; j <= 9; j++)
		{
			int product = i * j;

			if (product < 10)
			{
				_putchar(' ');
			}
			_putchar(product);
			_putchar(',');
		}
		_putchar('\n');
	}
}
