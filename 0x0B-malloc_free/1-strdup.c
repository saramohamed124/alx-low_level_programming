#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - prints buffer in hexa
 * @str: the address of memory to print
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
char *new_str, *p;
int len = 0;
if (str != NULL)
{
while (str[len] != '\0')
{
len++;
}
}
new_str = (char *) malloc(len + 1);
p = new_str;
if (new_str != NULL && str != NULL)
{
while (*str != '\0')
{
*p++ = *str++;
}
*p = '\0';
}
else
{
return (NULL);
}
return (new_str);
}
