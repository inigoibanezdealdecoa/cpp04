#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	Dog *dog = new Dog();
	Cat *cat = new Cat();

	std::cout << "_____________________________________\n" << std::endl;

	cat->getBrain()->_ideas[0] = "Idea 1";
	cat->getBrain()->_ideas[1] = "Idea 2";

	Cat *cat2 = new Cat();
	std::cout << std::endl;

	std::cout << "Cat2 = Cat" << std::endl;
	*cat2 = *cat;

	std::cout << "Cat ideas:" << std::endl;
	for (int i = 0; i < 2; i++)
        std::cout << "Idea: " << cat->getBrain()->_ideas[i] << std::endl;

	std::cout << "Cat2 ideas" << std::endl;
	for (int i = 0; i < 2; i++)
        std::cout << "Idea: " << cat2->getBrain()->_ideas[i] << std::endl;

	std::cout << "Cat ideas change" << std::endl;
	cat->getBrain()->_ideas[1] = "I have a new Idea";
	for (int i = 0; i < 2; i++)
        std::cout << "Idea: " << cat->getBrain()->_ideas[i] << std::endl;

	std::cout << "Cat2 ideas" << std::endl;
	for (int i = 0; i < 2; i++)
        std::cout << "Idea: " << cat2->getBrain()->_ideas[i] << std::endl;

	delete dog;
	delete cat;
	delete cat2;

	std::cout << "_____________________________________\n" << std::endl;

	Animal *animals[10];

	for (int i = 0; i < 10; i++) {
		if (i < 10 / 2) {
			animals[i] = new Cat();
		} else {
			animals[i] = new Dog();
		}
	}

	for (int i = 0; i < 10; i++) {
		delete animals[i];
	}
}
