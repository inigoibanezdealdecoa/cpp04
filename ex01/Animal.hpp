#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
public:
	Animal();
	Animal(const Animal& copy);
	virtual ~Animal();

	//getters & setters
	const std::string getType() const;
	
	//operators
	Animal& operator=(const Animal& copy);

	virtual void makeSound() const;
protected:
	std::string _type;
};

#endif