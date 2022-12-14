#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - Dog data
 * @name: Name of the doge
 * @age: Age of the dog
 * @owner: Owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;
void free_dog(dog_t *d);

#endif
