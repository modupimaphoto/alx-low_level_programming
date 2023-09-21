#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @str: string to encode.
 * Return: Always pointer.
 */
char *rot13(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if ((*ptr >= 'A' && *ptr <= 'M') || (*ptr >= 'a' && *ptr <= 'm'))
		{
			*ptr += 13;
		}
		else if ((*ptr >= 'N' && *ptr <= 'Z') || (*ptr >= 'n' && *ptr <= 'z'))
		{
			*ptr -= 13;
		}
		ptr++;
	}
	return (str);
}
