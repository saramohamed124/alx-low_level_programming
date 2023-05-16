#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - prints buffer in hexa
 * @str: the address of memory to print
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
size_t len = strlen(str);
char *copy = (char *)malloc(len + 1);
memcpy(copy, str, len + 1);
return copy;
}
