#include "main.h"
#include <stdio.h>
/**
 *_sqrt_recursion - prints a string, followed by a new line
 *@n : it is a value
 *@i :it is a value
 *Return: 0 always Success
*/
int _sqrt(int n, int i);
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
/**
 *_sqrt - prints a string, followed by a new line
 *@n : it is a value
 *@i : it is a value
 *Return: 0 always Success
*/
int _sqrt(int n, int i)
{
int sqrt = i * i;
if (sqrt > n)
return (-1);
if (sqrt == n)
return (i);

return (_sqrt(n, i + 1));
}
