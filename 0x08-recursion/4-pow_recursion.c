#include "main.h"
#include <math.h>
/**
 *_pow_recursion - prints a string, followed by a new line
 *@x : it is a value
 *@y : it is a value
 *Return: 0 always Success
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return(1);
return (x * _pow_recursion(x, y - 1));

}
