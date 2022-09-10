#include <stdio.h>
/**
 * main - runs the code when executed
 *
 * Return: always 0 (success)
 */
int main(void)
{
int n;
int letter = 'a';
while (n <= 10)
{
putchar((n % 10) + '0');
n++;
}
while (letter <= 'f')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
