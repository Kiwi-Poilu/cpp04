#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog& toCopy);
        ~Dog();
        Dog &operator=(const Dog& toCopy);
        void    makeSound(void) const;
};

#endif