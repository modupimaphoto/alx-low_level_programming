#include <stdio.h>

/**
 * main - entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
	int f1 = 1;
	int f2 = 2;
	int f3 = 0;
	int sum = 0;

	while (f1 <= 4000000)
	{
		if (f1 % 2 == 0)
		{
			sum += f1;
		}
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	printf("%d\n", sum);
	return (0);
}
