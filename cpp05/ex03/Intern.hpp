#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();
		Intern &operator=( Intern const & rhs );
		Form *makeForm(std::string name, std::string target);
		Form *Pf(std::string target);
		Form *Rf(std::string target);
		Form *Sf(std::string target);
	private:

};

#endif