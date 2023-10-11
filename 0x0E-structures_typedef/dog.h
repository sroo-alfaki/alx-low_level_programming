#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct
 * @name:dag name
 * @age: dag age
 * @owner: owner name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
