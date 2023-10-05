#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat -  concatenates two strings.
 * @s1: first parameter.
 * @s2: second parameter.
 * @n: memory to allocate.
 * Return: a pointer or null.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;
	ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (i = 0; i < len2; i++)
		ptr[len1 + i] = s2[i];
	ptr[len1 + n] = '\0';

	return (ptr);
}
