#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - check the code.
 *
 * @n: String numbert to print prints all natural numbers.
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			--n;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			++n;
		}
	}
}
