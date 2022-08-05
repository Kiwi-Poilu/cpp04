#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog& toCopy);
        ~Dog();
        Dog &operator=(const Dog& toCopy);
        void    makeSound(void) const;
        void    showThoughts() const;
    private:
        Brain *brain;
};

#endif