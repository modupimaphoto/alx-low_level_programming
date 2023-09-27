#include "main.h"

/**
 * is_prime_recursive_helper - divides the number n
 * by increasing divisors starting from 2.
 * @n: fisrt parameter.
 * @divisor: second parameter.
 * Return: returns 0 (not a prime number).
 */
int is_prime_recursive_helper(int n, int divisor)
{
	if (divisor == n)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime_recursive_helper(n, divisor + 1));
}
/**
 * is_prime_number - check is number is prine number.
 * @n: number to check.
 * Return: 1 or 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_recursive_helper(n, 2));
}
