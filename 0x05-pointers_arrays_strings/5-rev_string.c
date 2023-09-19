#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string.
 * @s: string to reverses.
 */
void rev_string(char *s)
{
	int str_len = strlen(s);
	int i;

	for (i = 0; i < str_len / 2; i++)
	{
		char temp = s[i];

		s[i] = s[str_len - i - 1];
		s[str_len - i - 1] = temp;
	}
}
