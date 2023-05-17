#include "main.h"
#include <string.h>
/**
 *_strpbrk -  fills memory with a constant byte
 * @s : it is value
 * @accept : it is value
 * Return: 0 always success
 */

char *_strpbrk(char *s, char *accept)
{
char *o;
o = strpbrk(s, accept);
return (o);
}
