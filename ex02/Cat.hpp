#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat& toCopy);
        ~Cat();
        Cat &operator=(const Cat& toCopy);
        void makeSound(void) const;
        void showThoughts() const;
    private:
        Brain *brain;
};

#endif