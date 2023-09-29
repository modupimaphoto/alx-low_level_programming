#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_positive_number(char *str)
{
	int i;

	if (str[0] == '\0')
		return (0);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (isdigit(str[i]) == 0)
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - entry point.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, sum;
	sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (is_positive_number(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
