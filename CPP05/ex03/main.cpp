
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	std::cout << "\033[33m" << std::endl << "Test ex03 Intern" << "\033[0m" << std::endl;
	Intern Jr_Intern;
	AForm *robo_intern;
	Bureaucrat b("Big Guy", 40);

	try
	{
		robo_intern = Jr_Intern.makeForm("robotomyrequestform", "World");
		b.signForm(*robo_intern);
		b.executeForm(*robo_intern);
		delete robo_intern;
		robo_intern = Jr_Intern.makeForm("DoYouKnowMe", "Hmmmm");
		
	}
	catch(const std::exception& e)
	{
			std::cerr << "sorry that form doesn't exist" << std::endl;
	}
	return (0);
}