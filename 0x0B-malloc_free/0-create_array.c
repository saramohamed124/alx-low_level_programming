#include "main.h"
#include <stdlib.h>
/**
 * create_array - prints buffer in hexa
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
char *s = malloc(size);
if (size == 0 || s == 0)
return (0);

while (size--)
s[size] = c;

return (s);
}
