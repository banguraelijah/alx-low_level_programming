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
putchar((n % 10) + '0');
if (n == 9){
n++;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
