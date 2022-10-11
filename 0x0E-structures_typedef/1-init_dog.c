#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - initilize the variable of type struct dog
 *
 * @d: pointer to struct dog
 *
 * @name: name of the dog
 *
 * @owner: owner of the dog
 *
 * @age: age of the dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d != NULL)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
}
