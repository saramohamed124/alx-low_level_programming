#include <stdarg.h>
/**
 * sum_them_all - return the sum of all its parameters
 *@n: it is value
 * Return: always 0 success
 */
int sum_them_all(const unsigned int n, ...)
{
int  i, s = 0, u = n;

va_list numbers;

va_start(numbers, n);
i = 0;
while (i < u)
{
s += va_arg(numbers, int);
i++;
}
va_end(numbers);
return (s);
}
