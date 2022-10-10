#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - defines a structure called dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: dog defines a data structure of type
 * struct wih the label dog. It defines 3 members that are
 * attributes of dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif /* DOG_H_ */
