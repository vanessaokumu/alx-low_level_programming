#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *doggy;
	int i, j, k;
	char *n, *o;

	doggy = malloc(sizeof(struct dog));
	if (doggy == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	n = malloc(sizeof(char) * i + 1);
	if (n == NULL)
	{
		free(doggy);
		return (NULL);
	}
	o = malloc(sizeof(char) * j + 1);
	if (o == NULL)
	{
		free(n);
		free(doggy);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		n[k] = name[k];
	for (k = 0; k <= j; k++)
		o[k] = owner[k];

	doggy->name = n;
	doggy->age = age;
	doggy->owner = o;

	return (doggy);
}
