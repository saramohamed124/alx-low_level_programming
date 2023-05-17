#include "main.h"
#include <string.h>
/**
 *_strstr -  fills memory with a constant byte
 * @haystack : it is value
 * @needle : it is value
 * Return: 0 always success
 */

char *_strstr(char *haystack, char *needle)
{
char *u;
u = strstr(haystack, needle);
return (u);
}
