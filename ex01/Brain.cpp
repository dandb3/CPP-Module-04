#include <iostream>
#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& brain)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; ++i)
		this->ideas_[i] = brain.getIdeas()[i];
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& brain)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	for (int i = 0; i < 100; ++i)
		this->ideas_[i] = brain.getIdeas()[i];
	return *this;
}

const std::string* Brain::getIdeas(void) const
{
	return this->ideas_;
}
