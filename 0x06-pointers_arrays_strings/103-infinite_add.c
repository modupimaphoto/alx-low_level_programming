#include "main.h"
#include <string.h>
/**
 * infinite_add -  adds two numbers.
 * @n1: firtst number.
 * @n2: second number.
 * @r: is the buffer that the function will use to store the result.
 * @size_r: buffer size.
 * Return: Always a pointer.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int i = len1 - 1;
	int j = len2 - 1;
	int k = size_r - 1;

	while (i >= 0 || j >= 0)
	{
		int sum = carry;

		if (i >= 0)
		{
			sum += n1[i] - '0';
			i--;
		}
		if (j >= 0)
		{
			sum += n2[j] - '0';
			j--;
		}
		carry = sum / 10;
		r[k] = sum % 10 + '0';
		k--;
	}
	if (carry > 0 && k >= 0)
	{
		r[k] = carry + '0';
	}
	else if (k < 0 && carry > 0)
	{
		return (0);
	}
	return (r + k + 1);
}
