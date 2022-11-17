#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Function creates a new dog.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner.
 *
 * Description: Function creates a new dog.
 *
 * Return: Pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy;
	char *owner_copy;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	if (name == NULL || owner == NULL)
	{
		free(dog);
		return (NULL);
	}
	name_copy = malloc(sizeof(*name));
	if (name_copy == NULL)
	{
		free(dog);
		return (NULL);
	}
	else
		name_copy = name;
	dog->name = name;
	dog->age = age;
	owner_copy = malloc(sizeof(*owner));
	if (owner_copy == NULL)
	{
		free(dog);
		free(name_copy);
		return (NULL);
	}
	dog->owner = owner;

	return (dog);
}
