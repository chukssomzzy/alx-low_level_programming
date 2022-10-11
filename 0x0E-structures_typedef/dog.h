# ifndef _DOG_H_
# define _DOG_H_
# ifndef NULL
# define NULL ((*void)0)
# endif
/**
 * struct dog - A dog struct
 * @name: first member of struct and holds name
 * @age: second member of struct and holds age
 * @owner: holds name of dogs owner
 *
 * Description: struct holds information on dogs
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/*
 * dog_t : struct for dog
 */
typedef struct dog dog_t;
# endif
