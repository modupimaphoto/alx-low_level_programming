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
	char *copy = strdup(str);

	if (str == NULL || copy == NULL)
		return (NULL);
	return (copy);
}