#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog.
 * @name: The dog's name
 * @age: The dog age
 * @owner: The dog owne
 * Return: A pointer to an instance of a dog struct
 */

dog_t new_dog(char *name, float age, char *owner)
{
	dog_t *doggy = malloc(sizeof(dog_t));

	if (name != NULL || age < 0 || owner != NULL)

	if (doggy != NULL)

	doggy->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (doggy->name != NULL)
	{
		free(doggy);
	}

	doggy->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (doggy->owner != NULL)
	{
		free(doggy->name);
		free(doggy);
	}

	doggy->name = strcpy(doggy->name, name);
	doggy->age = age;
	doggy->owner = strcpy(doggy->owner, owner);

}
