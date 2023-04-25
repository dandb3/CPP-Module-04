#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal(void);
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal& wrongAnimal);
	~WrongAnimal(void);

	WrongAnimal& operator=(const WrongAnimal& wrongAnimal);

	const std::string& getType(void) const;
	void makeSound(void) const;

};

#endif
