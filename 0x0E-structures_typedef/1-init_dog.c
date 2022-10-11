# include <stdlib.h>
# include "dog.h"
/**
 * init_dog - initializes a struct with a pointer
 * @d: dog struct
 * @name: name property of dog struct
 * @age: age of dog struct
 * @owner: owner of dog struct
 *
 * Description: initialise a struct
 * Return: void and NULL on fail
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
