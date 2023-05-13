#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: it is integer value
 * @argv: it is string value
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
if (argc == 2)
{
int i, lcents = 0, mon = atoi(argv[1]);
int cents [] = {25, 10, 5, 2, 1};
for (i = 0; i < 5; i++)
{
if (mon >= cents[i])
{
lcents += mon / cents[i];
mon = mon % cents[i];
if (mon % cents[i] == 0)
{
break;
}
}
}
printf("%d\n", lcents);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
