#include "Dog.hpp"

Dog::Dog() {
    std::cout << "A Dog has been created!" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &copy) : Animal(copy) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog& Dog::operator=(const Dog& copy) {
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

Dog::~Dog() {
    std::cout << "A Dog has been destructed!" << std::endl;
}

void    Dog::makeSound() const {
    std::cout << "Woof Woof! 🐶" << std::endl;
}