#include <stdio.h>
/**
 * main - print the numbers from zero to nine
 *
 * Return: always zero
 */
int main(void)
{
int c, i;
int c = '48';
int i = c + '1'
for (c = '0'; c <= '57'; c++)
{
for (i = '0'; i <= '57'; i++)
{
putchar(c);
putchar(i);
if ((c != '9') || (c == '9' && i != '9'))
{

putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
