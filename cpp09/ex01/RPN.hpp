#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <deque>
# include <cstdlib>
# include <sstream>
# include <string>

int parse(std::string input);
int		calculate(int a, int b, char sign);
void    do_op(std::string input);

#endif