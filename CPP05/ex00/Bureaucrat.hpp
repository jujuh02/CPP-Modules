#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <exception>

class BUREAUCRAT
{

    private:
            const int                 grade;
            const  std::sting   name;
    public:
            Bureaucrat();
            Bureaucrat(const std::string name, const int grade);
            Bureaucrat(const Bureaucrat &b);
            Bureaucrat &operator=(const Bureaucrat &b);
            ~Bureaucrat();
            std::ostream &operator<<( std::ostream &os, const Bureaucrat &b);
            const std::string   getName(const std::string name);
            int getGrade(int grade);
            void    incrementGrade();
            void    decrementGrade();
    class  GradeTooHighException : public std::exception
    {
        public:
                const char *what() const throw
    }
    class  GradeTooLowException : public std::exception
    {
        public:
                const char *what() const throw
    }
};

#endif