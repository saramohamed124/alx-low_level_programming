#include "main.h"
/**
 * _islower : Checked for  chracters lower
 * @c : The chracter to be checked
 * Return: 0 if lower . 1 if anything else
 */
int  _islower(int c)
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
