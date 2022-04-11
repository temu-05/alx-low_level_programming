#ifndef DOG_H
#define DOG_H

struct dog{
	char *name;
	float age;
	char *owner;
};
int main(void){
	struct dog my_dog;
	my_dog.name ="jack";
	my_dog.age = 4;
	my_dog.owner = "Temu"
	
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
