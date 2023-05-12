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
int res;
if (argc > 1)
{
res = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", res);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
