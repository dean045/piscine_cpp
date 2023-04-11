#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac == 2 && !parse(av[1]))
    {
        do_op(av[1]);
    }
    else
        std::cerr<<"Error : Invalid args"<<std::endl;
    return (0);
}