# include <stdlib.h>
# include "dog.h"


/**
 * new_dog - create a Dog struct and returns a pointer to struct
 * @name: name of dog to copy to new_dog
 * @age: age of dog to copy to new_dog
 * @owner: owner of dog to copy to neq new_dog
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);
	(*dog).name = name;
	(*dog).age = age;
	(*dog).owner = owner;
	return (dog);
}
