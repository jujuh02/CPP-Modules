
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << "\033[33m" << "Test ex01" << "\033[0m" << std::endl;
		std::cout << "Working tests (and overloaded operator):" << std::endl;
	Form a("Form A", 10, 8);
	Form b("Form B", 120, 80);
	std::cout << a << std::endl << b << std::endl;

	std::cout << std::endl << "Invalid grades:" << std::endl;
	Form c("Form C", 0, 8);
	Form d("Form C", 151, 8);
	Form e("Form C", 1, -8);
	Form f("Form C", 1, 800);

	std::cout << std::endl << "Signing forms:" << std::endl;
	Bureaucrat ba("John", 1);
	Bureaucrat bb("Bob", 10);
	a.beSigned(ba);
	b.beSigned(bb);

	std::cout << std::endl << "Invalid signs:" << std::endl;
	Bureaucrat bc("Charles", 150);
	Form C("Form C", 15, 20);
	bc.signForm(C);

	std::cout << std::endl << "Repeated signs:" << std::endl;
	ba.signForm(a);
	bb.signForm(a);

	return (0);
}