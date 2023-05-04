#include "main.h"
/**
 * _strncat -  concatenates two strings
 * @dest : it is value
 * @src : it is value
 * @n : it is value
 * Return:dest
 */
char *_strncat(char *dest, char *src, int n)
{
int s;
int e;
s = 0;
while (dest[s] != '\0')
{
s++;
}
e = 0;
while (e < n && src[e] != '\0')
{
dest[s] = src[e];
s++;
e++;
}
dest[s] = '\0';
return (dest);
}
