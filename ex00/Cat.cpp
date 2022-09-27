#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << "A Cat has been created." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Miau!Miau!" << std::endl;
}
