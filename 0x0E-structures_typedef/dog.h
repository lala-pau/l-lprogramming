#ifndef DOG_H
#define DOG_H

/**
  * struct dog - dog profile
  * @name: First member
  * @age: Second member
  * @owner: third member
  * Description: the name, age of the dog. The owner's name too
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _strlen(char *s);

#endif
