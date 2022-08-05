#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    std::cout << "Creating an animal" << std::endl;
    const Animal *meta = new Animal();
    std::cout << "Creating a cat" << std::endl;
    const Animal *cat = new Cat();
    std::cout << "Creating a dog\n" << std::endl;
    const Animal *dog = new Dog();

    
    std::cout << "Type of each animal(in the same order)" << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    std::cout << dog->getType() << " \n" << std::endl;


    std::cout << "Sound of each animal(in the same order)" << std::endl;
    meta->makeSound();
    cat->makeSound();
    dog->makeSound();

    std::cout << std::endl;
    delete(meta);
    delete(cat);
    delete(dog);
    std::cout << "\nNow creating animals using the wrong Cat and wrong Animal classes" << std::endl;
    std::cout << "Creating a wrongAnimal" << std::endl;
    const WrongAnimal *wrongMeta = new WrongAnimal();
    std::cout << "Creating a wrongCat\n" << std::endl;
    const WrongAnimal *wrongCat = new WrongCat();

    std::cout << "Type of each wrong animal(in the same order" << std::endl;
    std::cout << wrongMeta->getType() << " " << std::endl;
    std::cout << wrongCat->getType() << " \n" << std::endl;

    std::cout << "Sound of each wrong animal(in the same order)" << std::endl;
    wrongMeta->makeSound();
    wrongCat->makeSound();
    std::cout << std::endl;
    
    delete(wrongMeta);
    delete(wrongCat);
    return (0);
}