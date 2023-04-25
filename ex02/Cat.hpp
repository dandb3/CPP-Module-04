#ifndef CAT_HPP
# define CAT_HPP

# include "Brain.hpp"
# include "Animal.hpp"

class Cat : public Animal
{
private:
	Brain* brain_;

public:
	Cat(void);
	Cat(const Cat& cat);
	virtual ~Cat(void);

	Cat& operator=(const Cat& cat);
	const Brain* getBrain(void) const;
	virtual void makeSound(void) const;

};

#endif
