#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings.
 * @dest: type string.
 * @src: type string.
 * @n: bytes from src.
 * Return: pointer.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, z;

	len = 0;
	while (dest[len] != '\0')
		len++;
	for (z = 0; z < n && src[z] != '\0'; z++, len++)
		dest[len] = src[z];
	dest[len] = '\0';
	return (dest);
}
