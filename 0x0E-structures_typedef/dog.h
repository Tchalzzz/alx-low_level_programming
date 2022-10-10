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

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H_
