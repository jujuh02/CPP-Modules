#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <exception>
#include <string>

#include "AForm.hpp"

class AForm;

class Bureaucrat
{

    private:
            const  std::string   name;
        int                 grade;
    public:
            Bureaucrat();
            Bureaucrat(const std::string name, const int grade);
            Bureaucrat(const Bureaucrat &b);
            Bureaucrat &operator=(const Bureaucrat &b);
            ~Bureaucrat();
            const std::string   getName(void)const;
            int getGrade(void)const;
            void    incrementGrade();
            void    decrementGrade();
            void		signForm(AForm &form);
            void        executeForm(AForm const &form);
    class  GradeTooHighException : public std::exception
    {
        public:
                virtual const char *what() const throw();
    };
    class  GradeTooLowException : public std::exception
    {
        public:
               virtual const char *what() const throw();
    };
};

 std::ostream &operator<<( std::ostream &oss, const Bureaucrat &b);
#endif