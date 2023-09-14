#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 *
 * @c: git to check.
 *
 * Return: Alwayss 0.
 */
int _isdigit(int c)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (c >= '0' && c <= '9')
		{
			return (1);
		}
	}
	return (0);
}
