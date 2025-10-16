#include "Animal.hpp"

Animal::Animal() {
    std::cout << "A Default animal has been created!" << std::endl;
    type = "Animal";
}

Animal::Animal(const Animal &copy) {
    std::cout << "Copy constructor of Animal called" << std::endl;
    this->type = copy.type;
}

Animal& Animal::operator=(const Animal &copy) {
    std::cout << "Copy assignment operator of Animal called" << std::endl;
    if (this != &copy) {
        this->type = copy.type;
    }
    return (*this);
}

Animal::~Animal() {
    std::cout << "Animal " << type << " destroyed!" << std::endl;
}

void    Animal::makeSound() const {
    std::cout << "Generic animal sound 🐾" << std::endl;
}

std::string Animal::getType() const {
    return (this->type);
}
