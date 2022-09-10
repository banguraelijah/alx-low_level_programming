#include <stdio.h>
/**
 * main - runs the code when ever it is excuted
 *
 * Return: always 0 (success)
 */
int main(void)
{
int n;
while (n < 10)
{
putchar((n % 10) + '0')
n++;
}
putchar('\n');
return (0);
}
