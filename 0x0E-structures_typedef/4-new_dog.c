#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - function that tills length
 *
 * @str:string to be calc on
 *
 * Return: string length
 *
*/
int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}

/**
 * _strcopy - function that copy a string
 *
 * @str:string to be coppied
 * @dest: copy destination
 * Return: destination
 *
*/
int _strcopy(const char *str, char *dest)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);


}
/**
 * new_dog - function that creates a new dog.
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: void
 *
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
