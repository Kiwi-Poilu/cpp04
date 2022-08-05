#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "default cat constructor called" << std::endl;
    this->brain = new Brain();
}

Cat::Cat(const Cat& toCopy) : Animal("Cat")
{
    std::cout << "copy cat constructor called" << std::endl;
    this->brain = new Brain(*(toCopy.brain));
    this->type = toCopy.type;
}

Cat::~Cat()
{
    std::cout << "cat destructor called" << std::endl;
    delete(this->brain);

}

Cat &Cat::operator=(const Cat& toCopy)
{
    std::cout << "copy cat assignement operator called" << std::endl;
    this->brain = new Brain(*(toCopy.brain));
    this->type = toCopy.type;
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "Miaou!" << std::endl;
}

void    Cat::showThoughts() const
{
        this->brain->showThoughts();
}