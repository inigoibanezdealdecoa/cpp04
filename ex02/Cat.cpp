#include "Cat.hpp"

Cat::Cat() {
	_type = "Cat";
	_brain = new Brain();
	std::cout << "A Cat has been created." << std::endl;
}

Cat::Cat(const Cat& copy) {
	_brain = new Brain();
	*this = copy;

	std::cout << "Cat has been copied." << std::endl;
}

Cat::~Cat() {
	delete (_brain);
	std::cout << "A Cat has been deleted." << std::endl;
}

Cat& Cat::operator=(const Cat& copy) {
	Animal::operator=(copy);
	*_brain = *copy._brain;

	std::cout << "Cat assigment operator" << std::endl;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Miau!Miau!" << std::endl;
}

Brain* Cat::getBrain() const {
	return _brain;
}
