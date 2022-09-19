#include "main.h"

/**
 * puts - a fun that prints every other character of a str starting with the first char
 * @str: the string used
 *
 * Return: void
 */
void puts2(char *str)
{
int len;

while (str[len] != '\0')
{
if (len % 2 == 0)
{
_putchar(str[len]);
}
len++;
}
_putchar('\n');
}
