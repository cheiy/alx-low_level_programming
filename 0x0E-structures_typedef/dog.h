#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - Defines a new type called dog.
 * @name: First member.
 * @age: Second member.
 * @owner: Third member.
 * Description: Defines a new type called dog.
 */
typedef struct dog
{
	char *name;
	double age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
