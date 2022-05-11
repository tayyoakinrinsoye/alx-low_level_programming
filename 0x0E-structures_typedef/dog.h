#ifndef _DOG_
#define _DOG_

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;

/**
 * struct dog - data type containing dogs
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * Description: This structure is for dogs with the attributes
 * name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
og_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
