#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << "A Dog has been created." << std::endl;
}

Dog::~Dog()
{
	std::cout << "A Dog has been deleted." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof!Woof!" << std::endl;
}
