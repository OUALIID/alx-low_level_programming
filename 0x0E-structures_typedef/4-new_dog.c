#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog.
 * @name: The dog's name
 * @age: The dog age
 * @owner: The dog owner
 *
 * Return: Always 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}
}
