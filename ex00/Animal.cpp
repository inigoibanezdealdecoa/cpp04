#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "An Animal has been created" << std::endl;
}

Animal::Animal(std::string type)
{
	_type = type;
	std::cout << "An " << _type << " Animal has been created." << std::endl;
}

std::string Animal::getType() const
{
	return (_type);
}

void Animal::setType(std::string type)
{
	_type = type;
}

void Animal::makeSound() const
{
	std::cout << "..." << std::endl;
}
