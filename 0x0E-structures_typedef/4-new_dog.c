#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: returns dog or Null
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(sizeof(dog_t)));

	if (dog == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		;
	i++;

	dog->name = malloc(sizeof(char) * i);

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; owner[i]; i++)
		;
	i++;
	dog->owner = malloc(sizeof(char) * i);
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		dog->name = name[i];
	dog->name[i] = '\0';
	for (i = 0; owner[i]; i++)
		dog->owner[i] = name[i];
	dog->owner[i] = owner[i];
	dog->age = age;
	return (dog);
}