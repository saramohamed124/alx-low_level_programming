#include "main.h"
/**
 * _isalpha - Checks for letter, lowercase and uppercase character
 * @c: The character to be checked
 * Return: 1 for letter, lowercase and uppercase characters and 0 for else
 */
int _isalpha(int c)
{
if ((c = 97 && c <= 122) || (c = 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
