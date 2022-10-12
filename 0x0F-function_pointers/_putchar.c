#include <unistd.h>

/**
 * _putchar - writes the character to stdout
 * @c: the character
 *
 * Return: on success 1
 * On error, -1 and an eror message is set approprately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
