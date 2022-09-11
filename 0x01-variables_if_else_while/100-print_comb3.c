#include <stdio.h>
/**
 * main - print the numbers from zero to nine
 *
 * Return: always zero
 */
int main(void)
{
int digit1 = 0, digit2 = 0;
for (digit1 = 1; digit1 <= 10; digit1++)
{
for (digit2 = 1; digit2 <= 10; digit2++)
{
putchar('%d', digit1);
putchar('%d', digit2);
if (digit1 == 9 && digit2 == 9)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
