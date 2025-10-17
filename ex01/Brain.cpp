#include "Brain.hpp"

Brain::Brain() {
    std::cout << "A Brain has been created" << std::endl;
}

Brain::Brain(const Brain& copy) {
    std::cout << "Copy constructor of Brain called" << std::endl;
    int i = -1;
    while (++i < 100)
        this->ideas[i] = copy.ideas[i];
}

Brain& Brain::operator=(const Brain& copy) {
    std::cout << "Copy assignment operator of Brain called" << std::endl;
    if (this != &copy)
    {
        int i = -1;
        while (++i < 100)
            this->ideas[i] = copy.ideas[i];
    }
    return (*this);
}

Brain::~Brain() {
    std::cout << "A Brain has been destructed" << std::endl;
}