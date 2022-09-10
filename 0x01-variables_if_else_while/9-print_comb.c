#include <stdio.h>
/**
 * main - runs the code when executed
 *
 * Return: always 0 (success)
 */
int main(void)
{
int n;
while (n <= 9)
{
if (num == 9)
putchar(',');
putchar(' ');
else
putchar((n % 10) + '0');
n++;
}
putchar('\n');
return (0);
}
