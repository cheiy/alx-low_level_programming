#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Function frees dogs.
 * @d: Pointer to the dog struct
 *
 * Description: Function frees dogs.
 *
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d->owner != NULL)
		free(d);
	if (d->name != NULL)
		free(d);
	if (d != NULL)
		free(d);
}
