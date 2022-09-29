#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(const Brain& copy) {
    *this = copy;
    std::cout << "Brain has been copied." << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destructor." << std::endl;
}

Brain& Brain::operator=(const Brain& copy) {
    for (int i = 0; i < 100; i++) {
        this->_ideas[i] = copy._ideas[i];
    }
    std::cout << "Brain assigned." << std::endl;
    return (*this);
}