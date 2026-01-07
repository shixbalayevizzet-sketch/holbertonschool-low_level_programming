#include <stdio.h>

/**
 * print_name - prints a name using a specific function
 * @name: name of the person
 * @f: pointer to the printing function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
    {
        f(name);
    }
}
