#include <stdio.h>
/**
 * main - Entry point
 * @argc: it is integer value
 * @argv: it is string value
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s", argv[i]);
putchar('\n');
}
return (0);
}
