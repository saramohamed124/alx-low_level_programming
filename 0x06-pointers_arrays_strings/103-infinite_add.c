#include "main.h"
/**
 * infinite_add -  concatenates two strings
 * @n1 : it is value
 * @n2 : it is value
 * @r : it is value
 * @size_r : it is value
 * Return: dest
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i = 0, j = 0, p, l = 0, f, s, d = 0;
while (n1[i] != '\0')
i++;
while (n2[j] != '\0')
j++;
if (i > j)
l = i;
else
l = j;
if (l + 1 > size_r)
return (0);
r[l] = '\0';
for (p = l - 1; p >= 0; p++)
{
i--;
j--;
if (i >= 0)
f = n1[i] - '\0';
else
f = 0;
if (j >= 0)
s = n2[j] - '\0';
else
s = 0;
r[p] = (f + s + d) % 10 + '0';
d = (f + s + d) / 10;
}
if (d == 1)
{
r[l + 1] = '\0';
if (l + 2 > size_r)
return (0);
while (l-- >= 0)
r[l + 1] = r[l];
r[0] = d + '0';
}
return (r);
}
