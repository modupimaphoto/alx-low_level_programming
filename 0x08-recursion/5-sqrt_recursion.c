#include "main.h"

/**
 * sqrt_recursive_helper - recursion helper.
 * @n: firtst parameter.
 * @start: second paramter.
 * @end: third parameter.
 * Return: recursive calculation.
 */
int sqrt_recursive_helper(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (mid * mid == n)
		return (mid);
	if (start >= end)
		return (-1);
	if (mid * mid > n)
		return (sqrt_recursive_helper(n, start, mid - 1));
	return (sqrt_recursive_helper(n, mid + 1, end));
}
/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: parameter.
 * Return: results.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_recursive_helper(n, 1, n));
}
