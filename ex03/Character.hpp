#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string name_;
	AMateria* slots_[4];
	bool isEmpty_[4];

public:
	Character(void);
	Character(const Character& character);
	virtual ~Character(void);

	Character& operator=(const Character& character);
	virtual const std::string& getName(void) const;
	const bool* getIsEmpty(void) const;
	AMateria* const* getSlots(void) const;

	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

};

#endif
