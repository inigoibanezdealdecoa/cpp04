#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(std::string type);
	std::string getType() const;
	void setType(std::string);
	void makeSound() const;
protected:
	std::string _type;
};

#endif
