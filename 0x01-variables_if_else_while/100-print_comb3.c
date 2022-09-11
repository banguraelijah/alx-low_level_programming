#include <stdio.h>
/**
 * main - print the numbers from zero to nine
 *
 * Return: always zero
 */
int main(void)
{
int n1;
int n2;
while (n1 < 10)
{
while (n2 < 10)
{
putchar((n1 % 10) + '0');
putchar((n2 % 10) + '0');
if (n1 == 9 && n2 == 9)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
