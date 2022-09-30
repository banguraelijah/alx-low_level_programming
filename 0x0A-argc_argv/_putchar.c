#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: the chara to print
 *
 * Return: 1 on success
 * On error, -1 is returned and error is set approprately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
