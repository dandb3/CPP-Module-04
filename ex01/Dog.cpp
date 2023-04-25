#include <iostream>
#include "Dog.hpp"

Dog::Dog(void)
: Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
	brain_ = new Brain();
}

Dog::Dog(const Dog& dog)
: Animal(dog.getType())
{
	std::cout << "Dog copy constructor called" << std::endl;
	brain_ = new Brain(*dog.getBrain());
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete brain_;
}

Dog& Dog::operator=(const Dog& dog)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	Animal::operator=(dog);
	*brain_ = *dog.getBrain();
	return *this;
}

const Brain* Dog::getBrain(void) const
{
	return brain_;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof! Woof!" << std::endl;
}
