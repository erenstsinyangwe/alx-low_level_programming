/*
 * Requirement success
 * Code success
 * Efficiency success
 * Text answer success
 */

#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Description: Longer description
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

/**
 * init_dog - initializes a dog structure
 * @d: pointer to struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - prints the information of a dog
 * @d: pointer to struct dog
 */
void print_dog(struct dog *d);

/**
 * new_dog - creates a new dog structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to the new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - frees the memory allocated for a dog structure
 * @d: pointer to struct dog
 */
void free_dog(dog_t *d);

/**
 * _strcpy - copies a string
 * @dest: destination buffer
 * @src: source string
 * Return: pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src);

/**
 * _strlen - calculates the length of a string
 * @s: input string
 * Return: length of the string
 */
int _strlen(char *s);

#endif /* DOG_H */

/*
 * Requirement fail
 * Code fail
 * Efficiency fail
 * Text answer fail
 */
