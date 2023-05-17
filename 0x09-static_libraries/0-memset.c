#include "main.h"
#include <string.h>
/**
 *_memset -  fills memory with a constant byte
 * @s : it is value
 * @b : it is value
 * @n : it is a value
 * Return: 0 always success
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
