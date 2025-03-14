#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

/**
 * new_dog - function that prints a struct dog
 * @name: pointeur
 * @age: pointeur
 * @owner: pointeur
 *
 * Return: Return NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int nameLen = 0, ownerLen = 0;

	if (name != NULL && owner != NULL)
	{
		nameLen = _strlen(name) + 1;
		ownerLen = _strlen(owner) + 1;
		dog = malloc(sizeof(dog_t));

		if (dog == NULL)
			return (NULL);

		dog->name = malloc(sizeof(char) * nameLen);
		
		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}
		dog->owner = malloc(sizeof(char) * ownerLen);
		
		if (dog->owner == NULL)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}
		dog->name = _strcpy(dog->name, name);
		dog->owner = _strcpy(dog->owner, owner);
		dog->age = age;
	}
	return (dog);
}
/**
 * _strcpy - function that copy
 * @dest: ..
 * @src: ..
 *
 * Return: the pointer to des 
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
/**
 * _strlen - function that return the length of a string
 * @s: ..
 *
 * Return: string length
 */
int _strlen(char *s)
{
        int i;

        for (; *s != '\0'; s++)
        {
                i++;
        }
        return (i);
}

