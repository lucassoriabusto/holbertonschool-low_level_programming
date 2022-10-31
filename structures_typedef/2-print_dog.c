#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 * @d: pointer the struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age)
	{
		printf("Age: %f\n", d->age);
	}
	else
	{
		printf("(nil)");
	}
	if (d->owner == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
