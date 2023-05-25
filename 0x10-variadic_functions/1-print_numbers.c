#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - return the sum of all its parameters
 *@separator: it is value
 *@n: it is value
 * Return: always 0 success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
int  i = n;

va_list ap;
if (!n)
{
printf("\n");
return;
}

va_start(ap, n);
while (i--)
printf("%d%s", va_arg(ap, int),
i ? (separator ? separator : "") : "\n");

va_end(ap);
}
