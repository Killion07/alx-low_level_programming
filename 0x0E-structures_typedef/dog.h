#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - Dog data
 * @name: Name of the doge
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
