
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	std::cout << "Working tests:" << std::endl;
	ShrubberyCreationForm Sform("tree form");
	RobotomyRequestForm Rform("robot form");
	PresidentialPardonForm Pform("president form");
	Bureaucrat d("Bob", 1);
	Bureaucrat e("Alice", 150);

	std::cout << std::endl << "Signing forms: " << std::endl;
	d.signForm(Sform);
	e.signForm(Rform);
	d.signForm(Rform);
	e.signForm(Rform);
	e.signForm(Rform);

	std::cout << std::endl << "Executing forms: " << std::endl;
	d.executeForm(Sform);
	e.executeForm(Rform);
	d.executeForm(Rform);
	e.executeForm(Pform);
	d.signForm(Pform);
	d.executeForm(Pform);
	return (0);
}