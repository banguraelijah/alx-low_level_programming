#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers of arguments passed
 * @argc: number of argument passed
 * @argv: void
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
