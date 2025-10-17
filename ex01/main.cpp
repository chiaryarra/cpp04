#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* objects[5];
    int i = -1;
    while (++i < 5)
    {
        if (i % 2 == 0)
            objects[i] = new Cat();
        else
            objects[i] = new Dog();
    }
    i = -1;
    while (++i < 5)
        delete objects[i];
    return 0;
}