#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") 
{
    std::cout << "default wrong cat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& toCopy) : WrongAnimal("cat")
{
    std::cout << "wrong cat copy constructor called" << std::endl;
    this->type = toCopy.type;
}

WrongCat::~WrongCat()
{
    std::cout << "wrong cat destructor called" << std::endl;
}


WrongCat &WrongCat::operator=(const WrongCat& toCopy)
{
    this->type = toCopy.type;
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout << "Miaou!" << std::endl;
}