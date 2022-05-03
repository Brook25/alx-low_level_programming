#include <stdlib.h>
/**
 * strtow - splits a string into words
 * @str: string
 * Return: pointer to an array
 */
char **strtow(char *str)
{
	char **ptr;
	int i, l, len, start, end, j = 0;
	int words =  countWords(str);

	if (!str || !countWords(str))
		return (NULL);
	ptr = malloc(sizeof(char *) * (words + 1));
	if (!ptr)
		return (NULL);
	for (i = 0; i < words; i++)
	{
		start = startIndex(str, j);
		end = endIndex(str, start);
		len = end - start;
		ptr[i] = malloc(sizeof(char) * (len + 1));
		if (!ptr[i])
		{
			i -= 1;
			while (i >= 0)
			{
				free(ptr[i]);
					i--;
			}
			free(ptr);
			return (NULL);
		}
		for (l = 0; l < len; l++)
			ptr[i][l] = str[start++];
		ptr[i][l++] = '\0';
		j = end + 1;
	}
	ptr[i] = NULL;
	return (ptr);
}
/**
 * isSpace - checks if char is space or not
 * @c: char input
 * Return: 1 if true or 0 if not
 */

int isSpace(char c)
{
	return (c == ' ');
}
/**
 * startIndex - returns the first entry of non-space char
 * @s: string input
 * @index: index
 * Return: entry of first non-space character
 */


int startIndex(char *s, int index)
{

	while (isSpace(*(s + index)))
		index++;
	return (index);
}

/**
 * endIndex - returns last entry of non-space character
 * @s: string input
 * @index: 1st entry
 * Return: entry of last non-space character
 */

int endIndex(char *s, int index)
{
	while (!isSpace(*(s + index)))
		index++;
	return (index);
}
/**
 * countwords - counts numbers of words in strings
 * @s: string input
 * Return: total number of words
 */


int countWords(char *s)
{
	int wordOn = 0;
	int words = 0;

	while (*s)
	{
		if (isSpace(*s) && wordOn)
			wordOn = 0;
		else if (!isSpace(*s) && !wordOn)
		{
			wordOn = 1;
			words++;
		}
		s++;
	}
	return (words);
}
