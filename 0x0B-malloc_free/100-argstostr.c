#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: int type.
 * @av: char type.
 * Return: a pointer or null.
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;

	str = malloc(len + 1);

	if (str == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < ac; i++)
	{
		strcpy(str + j, av[i]);
		j += strlen(av[i]);
		str[j++] = '\n';
	}
	str[len] = '\0';
	return (str);
}
