#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - sum of a and b
 * @a: first parameter
 * @b: second parameter
 *
 * Return: returns the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference of a and b
 * @a: first parameter
 * @b: second parameter
 *
 * Return: returns the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - product of a and b
 * @a: first parameter
 * @b: second parameter
 *
 * Return: returns product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div -  result of the division of a and b
 * @a: first parameter
 * @b: second parameter
 *
 * Return: returns the  result of the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder of the division of a and b
 * @a: first parameter
 * @b: second parameter
 *
 * Return: returns the  remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
