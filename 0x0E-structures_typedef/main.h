#ifndef MAIN.H
#define MAIN.H

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
typedef struct dog dog_t;
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif
