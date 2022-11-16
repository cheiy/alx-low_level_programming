#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - Defines a new type called dog.
 * @name: First member.
 * @age: Second member.
 * @owner: Third member.
 * Description: Defines a new type called dog.
 */
struct dog
{
	char *name;
	double age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
