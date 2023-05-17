#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr- prints buffer in hexa
 * @ac: the address of memory to print
 * @av: the size of the memory to print
 *
 * Return: Nothing.
 */
char *argstostr(int ac, char **av)
{
int ch = 0, i = 0, j = 0, k = 0;
char *s;
if (ac == 0 || av == 0)
return (NULL);

while (i < ac)
{
while (av[i][j])
{
ch++;
j++;
}
j = 0;
i++;
}
s = malloc((sizeof(char) * ch) + ac + 1);
i = 0;
while (av[i])
{
while (av[i][j])
{
s[k] = av[i][j];
k++;
j++;
}
s[k] = '\n';
j = 0;
k++;
i++;
}
k++;
s[k] = '\0';
return (s);
}
