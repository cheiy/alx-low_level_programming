#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - Function prints a struct dog
 * @d: Pointer to the dog struct.
 *
 * Description: Function prints a struct dog.
 *
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		printf("Owner: %s\n", d->owner);
	}
}
