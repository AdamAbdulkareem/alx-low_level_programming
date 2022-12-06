#include <stdio.h>
#include "dog.h"
/**
 * print_dog - A function that prints a struct dog
 * @d: a struct description
 * Return: Always (0)
 */
void print_dog(struct dog *d)
{
	char *Name = d->name;

	char *Owner = d->owner;

	float Age = d->age;

	if (!d)
	{
		printf("nil");
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	printf("Name: %s\n", Name);
	printf("Owner: %f\n", Age);
	printf("Age: %s\n", Owner);
}
