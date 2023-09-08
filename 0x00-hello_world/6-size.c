#include <stdio.h>
/**
 * main - entry ponit of the program
 *
 * Return: Always 0
 */`
int main(void)
{
	printf("Size of char: %ld byte(s)\n", sizeof(char));
	printf("Size of int: %ld byte(s)\n", sizeof(int));
	printf("size of long int: %ld bytes(s)\n", sizeof(long int));
	printf("Size of long long int: %ld bytes(s)\n", sizeof(long long int));
	printf("Size of float: %ld bytes(s)", sizeof(float));
	return (0);
}
