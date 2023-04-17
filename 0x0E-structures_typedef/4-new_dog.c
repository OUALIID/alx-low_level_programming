#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog.
 * @name: The dog's name
 * @age: The dog age
 * @owner: The dog owne
 *
 * Return: Always 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p != NULL)
	{
		p->name = name;
		p->age = age;
		p->owner = owner;
	}
	return (*p);
}
