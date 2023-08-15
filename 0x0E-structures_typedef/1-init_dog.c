#include "dog.h"

/**
 * init_dog - initalizes a dog
 *
 * @d: dog to init_dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 
 * Return: void
 *
 * Return: 0  (sucesss)
 *
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
