

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

// Twinkle::Twinkle(float const p) : a(p), b(2)
// {
// 	std::cout << "constuctor called"<< std::endl;
// 	return;
// }
// Twinkle::~Twinkle()
// {
// 	std::cout << "destroyed" << std::endl;
// }
// void Twinkle::bar(void)const
// {
// 	std::cout << "this->a" << this->a << std::endl;
// 	std::cout << "this->b" << this->b << std::endl;
// 	return;
// }