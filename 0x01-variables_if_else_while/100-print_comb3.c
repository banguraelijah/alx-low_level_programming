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
for (c = '0'; c <= '57'; c++)
{
for (i = '0'; i <= '57'; i++)
{
putchar(c);
putchar(i);
if ((c != '57') || (c == '57' && i != '57'))
{

putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
