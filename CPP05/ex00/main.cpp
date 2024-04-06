#include "Bureaucrat.hpp"

int main()
{
	try
	{
		std::cout << "overload test" << std::endl;
	Bureaucrat hi("hi", 2);
	std::cout << hi << std::endl;
	Bureaucrat bye("bye", 1595);
	std::cout << bye << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;

	}
	try
	{
		Bureaucrat d = Bureaucrat("beeeee", 1);
		std::cout << d;
		std::cout << "Trying to increase grade" << std::endl;
		std::cout << d.getName() << "'s ";
		d.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}