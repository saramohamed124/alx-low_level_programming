#include "main.h"
#include <stdio.h>
/**
 *_print_rev_recursion - prints a string, followed by a new line
 *@s : it is a value
 *Return : 0 always Success
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
s++;
_print_rev_recursion(s);
s--;
putchar(*s);
}
