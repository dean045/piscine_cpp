#include "RPN.hpp"

int parse(std::string input)
{
    std::string::iterator	it;
    std::string::iterator	it_end;
	
	it_end = input.begin() + (input.size() - 1);
	if (*it_end != '+' && *it_end != '-' && *it_end != '/' && *it_end != '*')
		return (1);
    it = input.begin();
    if (!isdigit(*it) || !isdigit(*(it ++)))
        return (1);
    for (it = input.begin(); it != input.end(); it++)
    {
        if (!(isdigit(*it) || *it == ' ' || *it == '+' || *it == '-' || *it == '/' || *it == '*'))
            return (1);
    }
    return (0);
}

int		calculate(int a, int b, char sign)
{
	if (sign == '+')
		return (a + b);
	else if (sign == '-')
		return (a - b);
	else if (sign == '*')
		return (a * b);
	else
        return (a / b);
}

void    do_op(std::string input)
{
    std::stack<int>			s_num;
	std::istringstream		stream(input);
    std::string				tmp;
    int                     nb1;
    int                     nb2;
    int                     nb3;

    while (getline(stream, tmp, ' '))
	{
        if (!isdigit(tmp[0]) && s_num.size() > 1)
        {
            nb1 = s_num.top();
            s_num.pop();
            nb2 = s_num.top();
            s_num.pop();
            if (tmp[0] == '/' && nb1 == 0)
            {
                std::cerr<<"Error : Division by 0."<<std::endl;
                return ;
            }
            nb3  = calculate(nb2, nb1, tmp[0]);
            s_num.push(nb3);
        }
        else if (isdigit(tmp[0]))
        {
            s_num.push(std::atoi(tmp.c_str()));
        }
        else
        {
            std::cerr<<"Error : Invalid args"<<std::endl;
            return ;
        }
    }
    std::cout<<s_num.top()<<std::endl;
}