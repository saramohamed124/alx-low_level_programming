#include "main.h"
/**
 * cap_string -  concatenates two strings
 * @str : it is value
 * Return: dest
 */
char *cap_string(char *str)
{
int text = 0;
while (str[text])
{
while (!(str[text] >= 'a' && str[text] <= 'z'))
text++;
if (str[text - 1] == ' ' ||
str[text - 1] == '\n' ||
str[text - 1] == ',' ||
str[text - 1] == '"' || 
str[text - 1] == '\t' || 
str[text - 1] == ':' || 
str[text - 1] == ';' || 
str[text - 1] == '?' || 
str[text - 1] == '.' || 
str[text - 1] == '(' || 
str[text - 1] == ')' || 
str[text - 1] == '{' || 
str[text - 1] == '}' || 
text == 0)
str[text] -= 32;
text++;
}
return (str);
}
