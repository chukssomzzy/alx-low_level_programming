#ifndef _MAIN_H
#define _MAIN_H

/**
 * struct dog - dog struct
 * @name: dogs name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: new dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
