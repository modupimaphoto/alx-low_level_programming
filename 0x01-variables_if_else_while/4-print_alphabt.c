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
		putchar(c);
		if (c == 'e' || c == 'q')
		{
			continue;
		}
		c++;
	}
	putchar('\n');
}
