#include "main.h"
#include <string.h>
/**
 *_memcpy -  fills memory with a constant byte
 * @dest : it is value
 * @src : it is value
 * @n : it is a value
 * Return: 0 always success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest, src, n);
return (0);
}
