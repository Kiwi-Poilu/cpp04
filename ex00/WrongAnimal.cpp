#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "default wrong animal constructor called\n";
    this->type = "Unknown animal";
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "naming wrong animal constructor called" << std::endl;
    this->type = type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &toCopy)
{
    std::cout << "Overloaded copy assignement operator used\n";
    this->type = toCopy.type;
    return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &toCopy)
{
    std::cout << "wrong animal copy constructor called" << std::endl;
    this->type = toCopy.type;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "wrong animal destructor called" << std::endl;
}

std::string    WrongAnimal::getType() const
{
    return (this->type);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "?????" << std::endl;
}