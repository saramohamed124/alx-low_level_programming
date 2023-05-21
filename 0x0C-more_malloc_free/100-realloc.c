#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - function that allocates memory using malloc
 *@ptr: it is a value
 *@old_size: it is a value
 *@new_size: it is a value
 * Return: Always 0.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *nptr;
unsigned int i;
if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
nptr = malloc(new_size);
if (nptr == NULL)
return (NULL);

return (nptr);
}
else
{
if (new_size == 0)
{
free(ptr);
return (NULL);
}
}
nptr = malloc(new_size);
if (nptr == NULL)
return (NULL);

for (i = 0; i < old_size && i < new_size; i++)
{
nptr[i] = ((char *) ptr)[i];
}
free(ptr);
return (nptr);
}
