#include "main.h"
/**
 * rot13 -  concatenates two strings
 * @rot : it is value
 * Return: dest
 */
char *rot13(char *rot)
{
int l;
char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
char *ptr = rot;
while (*rot)
{
for (l = 0; l <= 53; l++)
{
if (*rot == rot13[l])
{
*rot = ROT13[l];
break;
}
}
l++;
}
return (ptr);
}
