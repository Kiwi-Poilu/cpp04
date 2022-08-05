#include "Cat.hpp"

Cat::Cat() : Animal("Cat") 
{
    std::cout << "default cat constructor called" << std::endl;
}

Cat::Cat(const Cat& toCopy) : Animal("cat")
{
    std::cout << "copy cat constructor called" << std::endl;
    this->type = toCopy.type;
}

Cat::~Cat()
{
    std::cout << "cat destructor called" << std::endl;
}


Cat &Cat::operator=(const Cat& toCopy)
{
    this->type = toCopy.type;
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "Miaou!" << std::endl;
}