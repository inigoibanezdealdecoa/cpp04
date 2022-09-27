#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << "A Cat has been created." << std::endl;
}

Cat::~Cat()
{
	std::cout << "A Cat has been deleted." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Miau!Miau!" << std::endl;
}
