#include <stdio.h>
/**
 * main - program that prints all possible different combinations of three #
 *
 * Return: always 0
 */
int main(void)
{
int n1 = 0, n2, n3;
while (n1 <= 9)
{
n2 = 0;
while (n2 <= 9)
{
n3 = 0
while (n3 <= 9)
{
if (n1 != n2 && n1 < n2 && n2 != n3 && n2 < n3)
{
putchar(n1);
putchar(n2);
putchar(n3);
if (n1 + n2 + n3 != 24)
{
putchar(',');
putchar(' ');
}
}
n3++
}
n2++
}
n1++
}
putchar('\n');
return (0);
