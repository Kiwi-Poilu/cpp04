#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        Animal();
        Animal(std::string type);
        Animal(const Animal& tocopy);
        Animal &operator=(const Animal &toCopy);
        std::string type;
    public:
        virtual ~Animal();
        std::string getType() const;
        virtual void    makeSound(void) const = 0; // pure virtual function = abstract class
};

#endif