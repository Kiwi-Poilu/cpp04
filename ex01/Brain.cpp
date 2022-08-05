#include "Brain.hpp"
#include <string>
#include <stdlib.h>

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;

    this->ideas = new std::string[100];
    for (int i = 0; i <= 99; i++)
    {
        this->ideas[i] = (std::string)"idea number " += (i/10) + 48; 
        this->ideas[i] += (i%10) + 48;
    }
}

Brain::Brain(const Brain &toCopy)
{
    std::cout << "Copy constructor called" << std::endl;

    this->ideas = new std::string[100];
    for (int i = 0; i <= 99; i++)
        this->ideas[i] = toCopy.ideas[i];
}

Brain&    Brain::operator=(const Brain &toCopy)
{
    std::cout << "Copy assignement operator called" << std::endl;
    if (this->ideas)
        delete(this->ideas);
    this->ideas = new std::string[100];
    for (int i = 0; i <= 99; i++)
        this->ideas[i] = toCopy.ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
    delete [] (this->ideas);
}

void    Brain::showThoughts()
{
    for (int i = 0; i <= 99; i++)
        std::cout << this->ideas[i] << std::endl;
}