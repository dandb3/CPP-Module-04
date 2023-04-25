#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat(void)
: WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& wrongCat)
: WrongAnimal(wrongCat.getType())
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& wrongCat)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	WrongAnimal::operator=(wrongCat);
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << "Meow~ Meow~" << std::endl;
}
