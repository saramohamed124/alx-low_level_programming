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
char *s = malloc(sizeof(char) * size);
unsigned int i = 0;
while (i < size)
{
s[i] = c;
i++;
}
return (s);
}
