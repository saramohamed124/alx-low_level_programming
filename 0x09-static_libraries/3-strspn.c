#include <string.h>
/**
 *_strspn -  fills memory with a constant byte
 * @s : it is value
 * @accept : it is value
 * Return: 0 always success
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int o;
o = strspn(s, accept);
return (o);
}
