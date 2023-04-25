#include <iostream>
#include "Cat.hpp"

Cat::Cat(void)
: Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	brain_ = new Brain();
}

Cat::Cat(const Cat& cat)
: Animal(cat.getType())
{
	std::cout << "Cat copy constructor called" << std::endl;
	brain_ = new Brain(*cat.getBrain());
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete brain_;
}

Cat& Cat::operator=(const Cat& cat)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	Animal::operator=(cat);
	*brain_ = *cat.getBrain();
	return *this;
}

const Brain* Cat::getBrain(void) const
{
	return brain_;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow~ Meow~" << std::endl;
}
