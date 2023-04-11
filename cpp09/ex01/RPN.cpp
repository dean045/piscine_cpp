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
    std::deque<int>			s_num;
    std::deque<char>		s_op;
	std::istringstream		stream(input);
    std::string				tmp;
    int                     nb1;
    int                     nb2;
    int                     nb3;

    while (getline(stream, tmp, ' '))
	{
        if (!isdigit(tmp[0]))
            s_op.push_back(tmp[0]);
        else if (isdigit(tmp[0]))
        {
            if (s_op.size() == 1)
            {
                nb2 = s_num.front();
                s_num.pop_front();
                nb1 = s_num.front();
                s_num.pop_front();
                nb3  = calculate(nb1, nb2, s_op.front());
                s_num.push_front(nb3);
                s_op.pop_front();
            }
            s_num.push_front(std::atoi(tmp.c_str()));
        }
    }
    while (s_op.size())
    {
        nb1 = s_num.back();
        s_num.pop_back();
        nb2 = s_num.back();
        s_num.pop_back();
        nb3  = calculate(nb1, nb2, s_op.back());
        s_num.push_back(nb3);
        s_op.pop_back();
    }
    std::cout<<s_num.front()<<std::endl;
}