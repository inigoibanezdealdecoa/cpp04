#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
public:
	virtual ~Animal();

	//getters & setters
	const std::string getType() const;
	
	//operators
	Animal& operator=(const Animal& copy);

	virtual void makeSound() const;
protected:
	Animal();
	Animal(const Animal& copy);
	std::string _type;
};

#endif