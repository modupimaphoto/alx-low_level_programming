#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev -  prints a string, in reverse.
 * @s: string to reverse.
 */
void print_rev(char *s)
{
	int str_len = strlen(s);
	int i = 0;
	for (i = str_len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
