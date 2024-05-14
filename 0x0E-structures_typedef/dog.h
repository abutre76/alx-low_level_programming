#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for dog
 * @name: first member, dog name
 * @age: second member, dog age
 * @owner: third member, dog's owner
 *
 * Description: dog struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
