#include "main.h"

/**
 * leet -  encodes a string into 1337.
 * @s: string type.
 * Return: string type.
 */
char *leet(char *s)
{
	int len, leetCount;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	len = 0;
	while (s[len] != '\0')
	{
		leetCount = 0;
		while (leetCount < 10)
		{
			if (leetLetters[leetCount] == s[len])
			{
				s[len] = leetNums[leetCount];
			}
			leetCount++;
		}
		len++;
	}
	return (s);
}
