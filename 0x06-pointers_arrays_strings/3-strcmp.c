#include "main.h"
/**
 * _strcmp -  concatenates two strings
 * @s1 : it is value
 * @s2 : it is value
 * Return:dest
 */
int _strcmp(char *s1, char *s2)
{
int t;
t = 0;
while (s1[t] != '\0' && s2[t] 1= '\0')
{
if (s1[t] != s2[t])
{
return (s1[t] - s2[t]);
}
t++;
}
return (0);
}
