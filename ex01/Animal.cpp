#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "default animal constructor called\n";
    this->type = "Unknown animal";
}

Animal::Animal(std::string type)
{
    std::cout << "naming animal constructor called" << std::endl;
    this->type = type;
}

Animal &Animal::operator=(const Animal &toCopy)
{
    std::cout << "copy assignement animal operator called" << std::endl;
    this->type = toCopy.type;
    return (*this);
}

Animal::Animal(const Animal &toCopy)
{
    std::cout << "Copy animal constructor called" << std::endl;
    this->type = toCopy.type;
}

Animal::~Animal()
{
    std::cout << "animal destructor called" << std::endl;
}

std::string    Animal::getType() const
{
    return (this->type);
}

void    Animal::makeSound() const
{
    std::cout << "?????" << std::endl;
}