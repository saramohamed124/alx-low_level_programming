#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _abs - Computes the absolute value of an integer.
 * int: The character to be checked
 * Return: 1 for letter, lowercase and uppercase characters and 0 for else
 */
int _abs(int x)
{
if( x < 0)
{
int abs_val;
abs_val = x * -1;
return (abs_val);
}
return (x);
}
