#include "main.h"
/**
 *strlen_recursion - prints a string, followed by a new line
 *@s : it is a value
 *Return: 0 always Success
*/
int strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + strlen_recursion(s + 1));
}
/**
 *comp - prints a string, followed by a new line
 *@s : it is a value
 *@num1 : it is a value
 *@num2 : it is a value
 *Return: 0 always Success
*/

int comp(char *s, int num1, int num2)
{
if (*(s + num1) == *(s + num2))
{
if (num1 == num2 || num1 == num2 + 1)
return (1);
return (0 + comp(s, num1 + 1, num2 - 1));
}
return (0);
}
/**
 *is_palindrome - prints a string, followed by a new line
 *@s : it is a value
 *Return: 0 always Success
*/
int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return (comp(s, 0, strlen_recursion(s) - 1));
}
