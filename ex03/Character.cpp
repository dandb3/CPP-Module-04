#include <iostream>
#include "Character.hpp"

Character::Character(void)
: name_("default")
{
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; ++i)
		isEmpty_[i] = true;
}

Character::Character(const Character& character)
: name_(character.getName())
{
	AMateria* const* targetSlots = character.getSlots();
	const bool* targetIsEmpty = character.getIsEmpty();
	int i;

	std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < 4; ++i)
		isEmpty_[i] = targetIsEmpty[i];
	for (int i = 0; i < 4; ++i)
		if (!isEmpty_[i])
			slots_[i] = targetSlots[i]->clone();
}

Character::~Character(void)
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; ++i)
		if (!isEmpty_[i])
			delete slots_[i];
}

Character& Character::operator=(const Character& character)
{
	AMateria* const* targetSlots = character.getSlots();
	const bool* targetIsEmpty = character.getIsEmpty();
	int i;

	std::cout << "Character copy assignment operator called" << std::endl;
	name_ = character.getName();
	for (int i = 0; i < 4; ++i)
		isEmpty_[i] = targetIsEmpty[i];
	for (int i = 0; i < 4; ++i)
		if (!isEmpty_[i])
			slots_[i] = targetSlots[i]->clone();
}

const std::string& Character::getName(void) const
{
	return name_;
}

const bool* Character::getIsEmpty(void) const
{
	return isEmpty_;
}

AMateria* const* Character::getSlots(void) const
{
	return slots_;
}

void Character::equip(AMateria* m)
{
	int i = 0;

	for (; i < 4; ++i)
		if (isEmpty_[i])
			break;
	if (i == 4) {
		std::cout << name_ << "'s slots are full!" << std::endl;
		return;
	}
	slots_[i] = m;
	isEmpty_[i] = false;
}

/* has to memorize the address of unequipped Materia */
void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4) {
		std::cout << "Invalid index" << std::endl;
		return;
	}
	if (isEmpty_[idx]) {
		std::cout << "Empty slot" << std::endl;
		return;
	}
	isEmpty_[idx] = true;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4) {
		std::cout << "Invalid index" << std::endl;
		return;
	}
	if (isEmpty_[idx]) {
		std::cout << "Empty slot" << std::endl;
		return;
	}
	slots_[idx]->use(target);
}
