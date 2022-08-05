#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat& toCopy);
        ~WrongCat();
        WrongCat &operator=(const WrongCat& toCopy);
        void makeSound(void) const;
};

#endif