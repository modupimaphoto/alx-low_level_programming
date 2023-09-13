#include <stdio.h>
/*
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int c = 0;
	int sum = 0;

	while (c < 4000000)
	{
		c = a + b;
		if (c % 2 == 0)
		{
			sum += c;
		}
		a = b;
		b = c;
	}
	printf("%d\n", sum);
	return (0);
}
