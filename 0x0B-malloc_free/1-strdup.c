#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str:  string given as a parameter.
 * Return: return a pointer.
 */
char *_strdup(char *str)
{
	char *new_str;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	new_str = malloc(sizeof(char) * (len + 1));

	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		new_str[i] = str[i];

	new_str[i] = '\0';
	return (new_str);
}
