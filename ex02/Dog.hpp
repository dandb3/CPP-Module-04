#ifndef DOG_HPP
# define DOG_HPP

# include "Brain.hpp"
# include "Animal.hpp"

class Dog : public Animal
{
private:
	Brain* brain_;

public:
	Dog(void);
	Dog(const Dog& dog);
	virtual ~Dog(void);

	Dog& operator=(const Dog& dog);
	const Brain* getBrain(void) const;
	virtual void makeSound(void) const;

};

#endif
