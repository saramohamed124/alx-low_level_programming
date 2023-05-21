#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_calloc - function that allocates memory using malloc
 *@nmemb: it is a value
 *@size: it is a value
 *
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int i = 0, l = 0;
char *p;
if (nmemb == 0 || size == 0)
return (NULL);

l = nmemb * size;
p = malloc(l);
if (p == NULL)
return (NULL);

while (i < l)
{
p[i] = 0;
i++;
}
return (p);
}
