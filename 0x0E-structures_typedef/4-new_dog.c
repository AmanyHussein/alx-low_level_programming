#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - creates a new struct of type dog
  * @name: struct parameter name
  * @age: struct parameter age
  * @owner: struct parameter owner
  * Return: returns pointer to buffer of datatype dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len, own_len, i;
	dog_t *new;

	name_len = own_len = 0;
	while (name[name_len++])
		;
	while (owner[own_len++])
		;
	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = malloc(name_len * sizeof(new->name));
	if (new == NULL)
		return (NULL);
	for (i = 0; i < name_len; i++)
		new->name[i] = name[i];

	new->age = age;

	new->owner = malloc(own_len * sizeof(new->owner));
	if (new == NULL)
		return (NULL);
	for (i = 0; i < own_len; i++)
		new->owner[i] = owner[i];
	return (new);
}
