#include "Dog.hpp"

Dog::Dog() {
	_type = "Dog";
	_brain = new Brain();
	std::cout << "A Dog has been created." << std::endl;
}

Dog::Dog(const Dog& copy) {
	_brain = new Brain();
	*this = copy;

	std::cout << "Dog has been copied." << std::endl;
}

Dog::~Dog() {
	delete (_brain);
	std::cout << "A Dog has been deleted." << std::endl;
}

Dog& Dog::operator=(const Dog& copy) {
	Animal::operator=(copy);
	*_brain = *copy._brain;

	std::cout << "Dog assigment operator" << std::endl;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Woof!Woof!" << std::endl;
}

Brain* Dog::getBrain() const {
	return _brain;
}
