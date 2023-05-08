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
memset(s, b, n);
return (0);
}
