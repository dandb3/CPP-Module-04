#include <iostream>
#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type)
: type(type)
{
	std::cout << "Animal string constructor called" << std::endl;
}

Animal::Animal(const Animal& animal)
: type(animal.getType())
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& animal)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	this->type = animal.getType();
	return *this;
}

const std::string& Animal::getType(void) const
{
	return this->type;
}

void Animal::makeSound(void) const
{
	std::cout << "Abstract animal can't make any sound.." << std::endl;
}
