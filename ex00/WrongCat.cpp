#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "A WrongCat has been created." << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Miau!Miau!" << std::endl;
}
