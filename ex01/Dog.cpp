#include "Dog.hpp"

Dog::Dog() : Animal("Dog") 
{
    std::cout << "default dog constructor called" << std::endl;
    this->brain = new Brain();
}

Dog::Dog(const Dog& toCopy) : Animal("Dog")
{
    std::cout << "copy dog constructor called" << std::endl;
    this->brain = new Brain(*(toCopy.brain));
    this->type = toCopy.type;
}

Dog::~Dog()
{
    std::cout << "dog destructor called" << std::endl;
    delete (this->brain);
}

Dog &Dog::operator=(const Dog& toCopy)
{
    std::cout << "dog copy assignement operator called" << std::endl;
    if (this->brain)
        delete(brain);
    this->brain = new Brain(*(toCopy.brain));
    this->type = toCopy.type;
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Ouaf!" << std::endl;
}

void    Dog::showThoughts() const
{
    this->brain->showThoughts();
}