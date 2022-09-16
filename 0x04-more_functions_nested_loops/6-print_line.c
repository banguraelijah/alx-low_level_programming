#inculde "main.h"

/**
 * void print_line - draw a straight line in the terminal
 * @: number of time the character should be printed
 */
void print_line(int n)
{
	if (n <= 0)
{
	_putchar('\n');
}
	else
{
	int i;

	for (i = 1; i <= n; i++)
{
	_putchar('_');
}
	_putchar('\n');
}
}
