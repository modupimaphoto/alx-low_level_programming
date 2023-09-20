#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings.
 * @dest: type string.
 * @src: type string.
 * Return: pointer.
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
