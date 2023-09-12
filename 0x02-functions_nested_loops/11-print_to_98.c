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
	int i = 0;

	if (n > 98)
	{
		printf("%d, ", n);
		while (i >= n)
		{
			printf("%d, ");
			--i;
		}
	}
	else
	{
		printf("%d, ", n);
		while (i <= n)
		{
			printf("%d, ", i);
			++i;
		}
	}
}
