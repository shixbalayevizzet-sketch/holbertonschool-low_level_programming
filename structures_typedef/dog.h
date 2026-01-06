#include "dog.h"

int main(void)
{
    dog_t my_dog; // No need for the 'struct' keyword here

    my_dog.name = "Ghost";
    my_dog.age = 4.75;
    my_dog.owner = "Jon Snow";

    return (0);
}
