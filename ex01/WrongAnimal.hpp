#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal& tocopy);
        virtual ~WrongAnimal();
        WrongAnimal &operator=(const WrongAnimal &toCopy);
        std::string getType() const;
        void    makeSound(void) const;
    protected:
        std::string type;
};

#endif