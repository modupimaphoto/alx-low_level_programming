#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character of a string.
 * @str: string ti print.
 */
void puts2(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
