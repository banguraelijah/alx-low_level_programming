#include <stdio.h>
/**
 * main - run the code when ever it is excuted
 *
 * Return: 0 Always (success)
 */
int main(void)
{
int x = 'a';
while (x <= 'z')
{
putchar(x);
putchar('\n');
x++;
}
return (0);
}
