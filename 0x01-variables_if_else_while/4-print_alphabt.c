#include <stdio.h>
/**
 * main - runs every time it is excuted
 *
 * Return: always 0 (success)
 */
int main(void)
{
int x = 'a';
while (x <= 'z')
{
if (x == 'q' || x == 'e')
{
x++;
}
else
{
putchar(x);
x++;
}
}
putchar('\n');
return (0);
}
