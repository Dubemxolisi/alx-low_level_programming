#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's basic info
 * @name: First Member
 * @age: Second member
 * @owner: Third member
 * Desciption: Longer description
 */

struct dog

{
	char *name;
	float age;
	char *owner;

};

/**
 * dog_t - typodef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlem(char *s);

#endif
