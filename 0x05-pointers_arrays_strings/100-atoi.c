#include <stdio.h>
/**
 * _atoi - convert a string to an integer.
 * @s: string to convert.
 * Return: sign * result.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] == ' ')
		i++;
	if (s[i] == '-' || s[i] == '+')
		sign = (s[i++] == '-') ? -1 : 1;
	while (s[i] >= '0' && s[i] <= '9')
		result = result * 10 + (s[i++] - '0');
	return (sign * result);
}
