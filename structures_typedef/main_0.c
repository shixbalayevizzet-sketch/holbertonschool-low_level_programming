#include <stdio.h>
#include "dog.h" /* Funksiya prototipini və struct-ı buradan götürür */

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	struct dog my_dog;

	/* init_dog funksiyasını çağırırıq */
	init_dog(&my_dog, "Ghost", 4.75, "Jon Snow");
	
	/* Nəticəni yoxlamaq üçün çap edirik */
	printf("My name is %s, and I am %.2f :) - Woof!\n", my_dog.name, my_dog.age);
	
	return (0);
}
