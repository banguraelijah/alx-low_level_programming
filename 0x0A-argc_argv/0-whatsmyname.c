#include "main.h"
#include <stdio.h>

/**
 * @argc: number of things entered on the command line
 * @argv: an array that holds the string values ente4red on the command line
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
