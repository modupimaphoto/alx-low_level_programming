#include "main.h"
#include <string.h>

/**
 * is_palindrome_recursive_helper - compares the characters at
 * the start and end positions of the string.
 * @s: first parameter.
 * @start: second parameter.
 * @end: third parameter.
 * Return: 1 or 0.
 */
int is_palindrome_recursive_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_recursive_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: string to check.
 * Return:  1 or 0.
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length <= 1)
		return (1);
	return (is_palindrome_recursive_helper(s, 0, length - 1));
}
