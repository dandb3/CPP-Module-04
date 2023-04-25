#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal* animals[10];
	for (int i = 0; i < 10; ++i) {
		if (i % 2 == 0)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	for (int i = 0; i < 10; ++i) {
		animals[i]->makeSound();
		if (i % 2 == 0)
			std::cout << "Brain address: " << dynamic_cast<Cat*>(animals[i])->getBrain() << std::endl;
		else
			std::cout << "Brain address: " << dynamic_cast<Dog*>(animals[i])->getBrain() << std::endl;
	}
	for (int i = 0; i < 10; ++i) {
		delete animals[i];
	}
	return 0;
}
