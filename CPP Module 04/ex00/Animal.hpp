#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal& ref);
	Animal& operator=(const Animal& ref);
	virtual ~Animal();

	std::string getType() const;
	virtual void makeSound() const;
};

#endif