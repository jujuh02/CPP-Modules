

#include "test.class.hpp"
#include <iostream>

Twinkle::Twinkle(char p1, int p2, float p3) : a(p1), b(p2), c(p3)
{
	std::cout << "constructor here" << std::endl;
	std::cout << "this->a = " << this->a << std::endl;

	std::cout << "this->b = " << this->b << std::endl;
	std::cout << "this->c = " << this->c << std::endl;
}
Twinkle::~Twinkle()
{
	std::cout << "finish" << std::endl;
	return ;
}