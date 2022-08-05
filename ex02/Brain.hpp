#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    public:
        Brain();
        Brain(const Brain &toCopy);
        ~Brain();
        Brain&    operator=(const Brain &toCopy);
        void    showThoughts();
        std::string *ideas;
};

#endif