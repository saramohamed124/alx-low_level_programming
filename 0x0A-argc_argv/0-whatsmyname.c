#include <stdio.h>
/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */
/**
 * argc: it is integer value
 * argv: it is string value
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s", argv[i]);
}
putchar('\n');
return (0);
}
