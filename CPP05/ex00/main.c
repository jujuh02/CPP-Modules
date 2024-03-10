#include "Bureaucrat.hpp"

int main()
{
    try
	{
		Bureaucrat b = Bureaucrat("bob", 150);
		std::cout << b;
		Bureaucrat d = Bureaucrat("david", 151);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}