#include <stdio.h>
/**
 * main - print the numbers from zero to nine
 *
 * Return: always zero
 */
int main(void)
{
int c, i;
c = i = '0';
for (c = '0'; c <= '9'; c++)
{
for (i = '0'; i <= '9'; i++)
{
putchar(c);
putchar(i);
if ((c != '9') || (c == '9' && i != '9'))
{
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
