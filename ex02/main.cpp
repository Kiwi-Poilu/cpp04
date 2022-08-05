#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    Animal *Billy = new Cat();

    Animal  *animals[10];
    Billy->makeSound();
    delete Billy;
     for (int i = 0; i < 10; i++)
     {
         if (i < 10 / 2)
             animals[i] = new Dog;
         else
             animals[i] = new Cat;
         std::cout << "\033[1;33m" << animals[i]->getType() << "\033[0m" << std::endl;
     }
     return (0);
}   