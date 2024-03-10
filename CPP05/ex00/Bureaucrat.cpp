#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(150)
{

}

Bureaucrat::Bureaucrat(const std::string name, int grade) :name(name), grade(grade)
{
    std::cout << "Bureaucrat name constructor called" << std::endl;
    if (grade > 150)
        throw   GradeTooHighException();
    else if (grade < 0)
        throw   GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return("Grade is more than 150");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return("Grade is less than 0");
}

void Bureaucrat::incrementGrade()
{
    if (this->grade >= 150)
        GradeTooHighException();
    this->grade++;
}

void Bureaucrat::decrementGrade()
{
    if (this->grade < 1)
        GradeTooLowException();
    this->grade--;
}

const std::string Bureaucrat::getName(const std::string name)
{
    return (name);
}

int Bureaucrat::getGrade(int grade)
{
    return (grade);
}

std::ostream &operator <<(std::ostream os, const Bureaucrat &b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
	return (os);
}