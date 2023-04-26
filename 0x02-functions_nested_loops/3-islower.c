#include "main.h"
/**
 * _islower :  Checks for  lowercase characters
 * @c: The character to be checked
 * Return: 1 for lowercase characters and 0 for anything else
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
