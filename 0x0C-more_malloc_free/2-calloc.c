#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc -  allocates memory for an array, using malloc.
 * @nmemb: an array.
 * @size: in bytes.
 * Return: a pointer or NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int totalSize;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	totalSize = nmemb * size;
	ptr = malloc(totalSize);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, totalSize);

	return (ptr);
}
