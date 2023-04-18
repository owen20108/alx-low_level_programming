#include "dog.h"
#include<stdio.h>
/**
 * _strdup - allocates new array of memory for string to be stored
 * @str: the string to copy
 *
 * Return: pointer to array or null
 */
char *_strdup(char *str)
{
	char *ar;
	unsigned int i, size;

	if (str == NULL)
		return (NULL);
	for (size = 0; *(str + size) != '\0'; size++)
		;
	ar = malloc((size + 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		ar[i] = str[i];
	}
	ar[i] = '\0';
	return (ar);
}
/**
 * new_dog - creates a new dog struct
 * @name: new name of the dog
 * @age: new age
 * @owner: new name of owner
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dog;
	char *newname;
	char *newowner;

	dog = malloc(sizeof(struct dog));
	if (dog == NULL)
		return (NULL);
	newname = _strdup(name);
	dog->name = newname;
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	newowner = _strdup(owner);
	dog->owner = newowner;
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->age = age;
	return (dog);
}
