#include <stdio.h>
/**
 * main - runs the code when excuted
 *
 * Return: always 0 (success)
 */
int main(void)
{
int x = 'a';
int y = 'A';
while (x <= 'z')
{
putchar(x);
x++;
}
while (y <= 'Z')
{
putchar(y);
y++;
}
putchar('\n');
return (0);
}
