#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strcat - function that concatenates two strings and print two chars
 * @dest : it is string will be printed
 * @src : it is string to be print
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
int s;
int h;
s = 0;
while (dest[s] != '\0')
{
s++;
}
h = 0;
while (src[h] != '\0')
{
dest[s] = src[h];
s++;
h++;
}
dest[s] = '\0';
return (dest);
}
