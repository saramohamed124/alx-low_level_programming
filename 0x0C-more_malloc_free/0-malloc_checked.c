#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - function that allocates memory using malloc
 *@b: it is a value
 *
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
void *o;
o = malloc(b);
if (o == NULL)
{
exit(98);
}
return (o);
}
