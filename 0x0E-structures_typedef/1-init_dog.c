#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 *
 * @d: pointer to address of my_dog
 * struct dog: dog structure
 * @name: input for  dog name
 * @age: input for dog age
 * @owner: input for dog owner
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		/*d->name = name;*/
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}

}
