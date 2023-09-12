#include "main.h"
#include <ctype.h>
/**
 * _isalpha - check tghe code.
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}
