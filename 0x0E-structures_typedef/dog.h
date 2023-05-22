#ifndef DOG_H
#define DOG_H
int _putchar(char c);
/**
 * struct dog - dog
 * @name: Name of the dog
 * @age: age of teh dog
 * @owner: Owner of the dog
 *
 * Description: describes a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
