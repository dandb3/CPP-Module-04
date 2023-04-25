#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{
protected:
	std::string type;

public:
	Animal(void);
	Animal(std::string type);
	Animal(const Animal& animal);
	virtual ~Animal(void);

	Animal& operator=(const Animal& animal);

	const std::string& getType(void) const;
	virtual void makeSound(void) const;

};

#endif
