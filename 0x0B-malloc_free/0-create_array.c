#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array and initilize it with an array of char
 * @size: size of the array to be created
 * @c: the char value to initilize the ARRAY with
 * Return: if size is 0 return null
 * Return a pointer to the array or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	return ('\0');
	arr = malloc(size);
	if (arr == NULL)
	return ('\0');
	for (i = 0; i < size; i++)
	arr[i] = c;
	return (arr);
}
