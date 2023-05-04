#include "main.h"
/**
 * leet -  concatenates two strings
 * @s : it is value
 * Return: dest
 */
char *leet(char *s)
{
int y, u;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";
for (y = 0; s[y] != '\0'; y++)
{
for (u = 0; u < 10; u++)
{
if (s[y] == s1[u])
{
s[y] = s2[u];
}
}
}
return (s);
}
