#include <stdio.h>
/**
 * main - print the numbers from zero to nine
 *
 * Return: always zero
 */
int main(void)
{
int digit1 = 0;
int digit2 = 0
while (digit1 < 10)
{
while (digit2 < 10)
{
putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');
if (digit1 == 9 && digit2 == 9)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
