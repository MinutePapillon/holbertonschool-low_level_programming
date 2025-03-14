#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 *new_dog- ..
 *@name: .. 
 *@age: ..
 *@owner: ..
 *Return: ..
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int long1 = 0, long2 = 0, i;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

		while (name[long1] != '\0')
			long1++;
		while (owner[long2] != '\0')
			long2++;

		dog = (dog_t *)malloc(sizeof(dog_t));
				if (dog == NULL)
				{
					return (NULL);
				}
		dog->name = malloc(long1 + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
			for (i = 0; i <= long1; i++)
			{
				dog->name[i] = name[i];
			dog->owner = malloc(long2 + 1);
			}
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
			for (i = 0; i <= long2; i++)
			dog->owner[i] = owner[i];
			dog->age = age;
			return (dog);
}
