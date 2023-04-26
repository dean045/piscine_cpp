#include "RPN.hpp"

int parse(std::string input)
{
    std::string::iterator	it;
    std::string::iterator	it_end;
	
	it_end = input.begin() + (input.size() - 1);
	if (*it_end != '+' && *it_end != '-' && *it_end != '/' && *it_end != '*')
		return (1);
    for (it = input.begin(); it != input.end(); it++)
    {
        if (!(isdigit(*it) || *it == ' ' || *it == '+' || *it == '-' || *it == '/' || *it == '*'))
            return (1);
        // if ((*it == '+' || *it == '-' || *it == '/' || *it == '*') && (it + 1 != input.end() && *(it + 1) != ' '))
        //     return (1);
        // if ((isdigit(*it) && (it + 1 != input.end() && *(it + 1) != ' ') && !(isdigit(*(it +1)))))
        //     return (1);
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

    while (getline(stream, tmp))
	{
        tmp.erase(remove_if(tmp.begin(), tmp.end(), ::isspace), tmp.end());
        for (size_t i = 0; i < tmp.length(); i++)
        {
            if (!isdigit(tmp[i]) && s_num.size() > 1)
            {
                nb1 = s_num.top();
                s_num.pop();
                nb2 = s_num.top();
                s_num.pop();
                if (tmp[i] == '/' && nb1 == 0)
                {
                    std::cerr<<"Error : Division by 0."<<std::endl;
                    return ;
                }
                nb3  = calculate(nb2, nb1, tmp[i]);
                s_num.push(nb3);
            }
            else if (isdigit(tmp[i]))
                s_num.push(tmp[i] - 48);
            else
            {
                std::cerr<<"Error : Invalid args1"<<std::endl;
                return ;
            }
        }
    }
    std::cout<<s_num.top()<<std::endl;
}