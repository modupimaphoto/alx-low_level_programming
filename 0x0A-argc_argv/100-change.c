#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int cents, coins, i;
	int values[] = {25, 10, 5, 2, 1};

	coins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		while (cents >= values[i])
		{
			cents -= values[i];
			coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
