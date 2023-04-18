#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - structure for dog info
 * @name: Dog's name
 * @age: age of dog
 * @owner: name of owner
 *
 * Description: This structure contains information regarding dogs
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
