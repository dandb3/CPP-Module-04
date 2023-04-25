#include <iostream>
#include "Cat.hpp"

Cat::Cat(void)
: Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& cat)
: Animal(cat.getType())
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& cat)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	Animal::operator=(cat);
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow~ Meow~" << std::endl;
}
