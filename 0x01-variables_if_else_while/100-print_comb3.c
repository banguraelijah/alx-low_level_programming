#include <stdio.h>
/**
 * main - print the numbers from zero to nine
 *
 * Return: always zero
 */
int main(void)
{
int n1 = 0, n2;
while (n1 <= 9)
{
n2 = 0;
while (n2 <= 9)
{
if (n1 != n2 && n1 < n2)
{
putchar(n1);
putchar(n2);
if (n1 + n2 != 17)
{
putchar(',');
putchar(' ');
}
}
n2++;
}
n1++;
}
putchar('\n');
return (0);
}
