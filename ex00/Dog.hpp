#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog(void);
	Dog(const Dog& dog);
	virtual ~Dog(void);

	Dog& operator=(const Dog& dog);
	virtual void makeSound(void) const;

};

#endif
