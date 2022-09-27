#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "A WrongAnimal has been created" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	_type = type;
	std::cout << "A " << _type << " WrongAnimal has been created." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (_type);
}

void WrongAnimal::setType(std::string type)
{
	_type = type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "..." << std::endl;
}
