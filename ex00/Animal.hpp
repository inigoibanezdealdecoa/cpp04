#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
public:
	Animal();
	Animal(std::string type);
	std::string getType() const;
	void setType(std::string);
	virtual void makeSound() const;
protected:
	std::string _type;
};

#endif