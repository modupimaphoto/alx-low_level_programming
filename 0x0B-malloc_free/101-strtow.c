#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * strtow - returns a pointer to an array of strings (words).
 * @str: char type.
 * Return: a pointer or null.
 */
char **strtow(char *str)
{
	int word_count = 0, in_word = 0, i, j;
	char **words;
	int word_index, word_length;

	if (str == NULL || strcmp(str, "") == 0)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
		in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			word_count++;
        	}
	}
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	word_index = 0;
	word_length = 0;
	in_word = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if (in_word == 1)
			{
				words[word_index] = malloc((word_length + 1) * sizeof(char));
				if (words[word_index] == NULL)
				{
					for (j = 0; j < word_index; j++)
					{
						free(words[j]);
					}
				free(words);
				return NULL;
				}
			strncpy(words[word_index], str + i - word_length, word_length);
			words[word_index][word_length] = '\0';
			word_index++;
			word_length = 0;
			in_word = 0;
			}
		} 
		else
		{
			word_length++;
			in_word = 1;
		}
	}
	if (in_word == 1)
	{
		words[word_index] = malloc((word_length + 1) * sizeof(char));
		if (words[word_index] == NULL)
		{
			for (j = 0; j < word_index; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		strncpy(words[word_index], str + strlen(str) - word_length, word_length);
		words[word_index][word_length] = '\0';
		word_index++;
	}
	words[word_index] = NULL;
	return (words);
}
