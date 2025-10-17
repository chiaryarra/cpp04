#include "Cat.hpp"

Cat::Cat () {
    std::cout << "A Cat has been created!" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat (const Cat &copy): Animal(copy) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat& Cat::operator=(const Cat &copy) {
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

Cat::~Cat () {
    delete this->brain;
    std::cout << "A Cat just got destroyed!" << std::endl;
}

void    Cat::makeSound() const {
    std::cout << "Meow meow! 🐱" << std::endl;
}

