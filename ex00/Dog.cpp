#include "Dog.hpp"

Dog::Dog() : Animal("Dog") 
{
    std::cout << "default dog constructor called" << std::endl;
}

Dog::Dog(const Dog& toCopy) : Animal("cat")
{
    std::cout << "copy dog constructor called" << std::endl;
    this->type = toCopy.type;
}

Dog::~Dog()
{
    std::cout << "dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog& toCopy)
{
    this->type = toCopy.type;
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Ouaf!" << std::endl;
}