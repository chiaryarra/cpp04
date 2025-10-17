#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* objects[3];
    objects[0] = new Dog();
    objects[1] = new Cat();
    objects[2] = new Animal();
    int i = -1;
    while (++i < 3)
        delete objects[i];
    return 0;
}