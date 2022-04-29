#include "main.h"
/**
 * _strstr - first occurence of substring
 * @haystack: str to be checked
 * @needle: substring in the haystack
 * Return: 0
 */
char  *_strstr(char *haystack, char *needle)
{

char *s, *i;
while (*haystack != '\0')
{
s = haystack;
i = needle;
while (*haystack != '\0' && *i != '\0' && *haystack == *i)
{
haystack++;
i++;
}
if (*i == '\0')
return (s);
haystack = s + 1;
}
return (0);
}
