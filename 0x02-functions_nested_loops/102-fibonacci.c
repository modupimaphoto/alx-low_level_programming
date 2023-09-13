#include <stdio.h>

/**
 * main - entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, f1, f2, f3;

	f1 = 1;
	f2 = 2;

	printf("%d, %d", f1, f2);
	for (i = 0; i < 48; i++)
	{
		f3 = f1 + f2;
		printf(", %d", f3);
		f1 = f2;
		f2 = f3;
	}
	printf("\n");
	return (0);
}
