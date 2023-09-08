#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
		{
			continue;
		}
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
