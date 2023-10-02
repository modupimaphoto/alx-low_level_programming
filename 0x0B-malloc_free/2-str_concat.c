#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string parameter.
 * @s2: second string parameter.
 * Return: pinter or null.
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1, len2;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	result = malloc((len1 + len2 + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}
