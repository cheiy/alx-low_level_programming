#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Function initializes a variable of type struct dog
 * @d: Pointer to the dog struct.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner.
 *
 * Description: Function initiliazes a varible of type struct dog.
 *
 * Return: 0 always.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL && name != NULL && owner != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
