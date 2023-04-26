#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *putchar() is a function
 * Return: Always 0 (Success)
*/
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
