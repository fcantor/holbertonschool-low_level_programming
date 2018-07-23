#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - This struct creates a new type
 * @name: First member, char pointer
 * @age: Second member, float
 * @owner: Third memeber, char pointer
 *
 * Description: This struct has three elements and is a new type dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog - Typdef for dog type
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _DOG_H_ */
