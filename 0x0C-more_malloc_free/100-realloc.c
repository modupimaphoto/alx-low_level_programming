#include "main.h"
#include <stdlib.h>
/**
 * _realloc -  reallocates a memory block using malloc and free.
 * @ptr: first parameter.
 * @old_size: second paramter.
 * @new_size: third parameter.
 * Return: a ponter or null.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	min_size = old_size < new_size ? old_size : new_size;
	memcpy(new_ptr, ptr, min_size);
	free(ptr);
	return (new_ptr);
}
