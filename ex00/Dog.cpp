#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << "A Dog has been created." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof!Woof!" << std::endl;
}
