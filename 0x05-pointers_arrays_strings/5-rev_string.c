#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to the string
 * Return: Always 0
 */
void rev_string(char *s)
{
char *star_c, end_c, c;
int i, count;
int lenth = 0;
for (i = 0; s[i]; i++)
{
length++;
}
count = length;
star_c = s;
end_c = s;
for (i = 0; i < count -1; i++)
{
end_c++;
}
for(i = 0; i < count / 2; i++)
{
c = *end_c;
*end_c = *start_c;
*start_c = c;
start_c++;
end_c--;
}
}
