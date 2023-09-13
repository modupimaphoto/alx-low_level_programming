#include <stdio.h>

/*
 * printFibonacci - check the code
 *
 * @n: parameter.
 */
void printFibonacci(int n)
{
	int fib1 = 1, fib2 = 2, nextFib;
	int i;

	printf("%d, %d, ", fib1, fib2);

	for (i = 3; i <= n; i++)
	{
		nextFib = fib1 + fib2;
		printf("%d", nextFib);

		if (i != n)
		{
			printf(", ");
		}

		fib1 = fib2;
		fib2 = nextFib;
	}

	printf("\n");
}
/**
 * main - finds and prints the first 98 Fibonacci numbers.
 * Return: Always 0.
 */
int main(void)
{
	int n = 98;

	printFibonacci(n);
}
