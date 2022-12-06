#include <stdio.h>
#include "dog.h"
/**
  * init_dog - A function that initialize a variable type
  * @d: An input character
  * @name: Dog's name
  * @age: Dog's age
  * @owner: Dog owner
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
