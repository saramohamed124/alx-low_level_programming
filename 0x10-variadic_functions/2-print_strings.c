#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - return the sum of all its parameters
 *@separator: it is value
 *@n: it is value
 * Return: always 0 success
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
int  i = n;
char *str;
va_list ap;

if (!n)
{
printf("\n");
return;
}

va_start(ap, n);
while (i--)
printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)",
i ? (separator ? separator : "") : "\n");

va_end(ap);
}
