#include "Animal.hpp"

Animal::Animal()
{
	_type = "Animal";
	std::cout << "An Animal has been created with default constructor." << std::endl;
}

Animal::Animal(const Animal& copy)
{
	*this = copy;
	std::cout << "Animal copy constructor called" << std::endl; // just to prove it works
}

Animal::~Animal()
{
	std::cout << "An Animal has been deleted" << std::endl;
}

const std::string Animal::getType() const
{
	return (_type);
}

Animal& Animal::operator=(const Animal &copy){
	std::cout << "Animal asignment operator." << std::endl;
	_type = copy._type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "This Animal has no specific Sound." << std::endl;
}
