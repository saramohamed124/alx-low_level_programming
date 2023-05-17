#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - prints buffer in hexa
 * @s1: the address of memory to print
 * @s2: the address of memory to print
 *
 * Return: Nothing.
 */
char *str_concat(char *s1, char *s2)
{
char *p = s1;
int len1 = p - s1;
int len2 = p - s2;
char *result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
char *q = result;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (*p != '\0')
{
p++;
}
p = s2;
while (*p != '\0')
{
p++;
}
if (result == NULL)
{
return NULL;
}
p = s1;
while (*p != '\0')
{
*q = *p;
p++;
q++;
}
p = s2;
while (*p != '\0')
{
*q = *p;
p++;
q++;
}
*q = '\0';
return (result);
}
