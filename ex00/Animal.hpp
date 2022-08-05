#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal& tocopy);
        virtual ~Animal();
        Animal &operator=(const Animal &toCopy);
        std::string getType() const;
        virtual void    makeSound(void) const;
    protected:
        std::string type;
};

#endif