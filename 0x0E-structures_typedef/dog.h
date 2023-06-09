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
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
