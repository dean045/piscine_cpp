#ifndef PMERGE_ME_HPP
# define PMERGE_ME_HPP


# include <iostream>
# include <vector>
# include <deque>
# include <cstdlib>
# include <sstream>
# include <string>
# include <cstring>
# include <ctime>
# include <math.h>

int	parse(int ac, char **av);

template<class T>
void PrintContainer(T& container)
{
	typedef typename T::iterator Iter;
    for (Iter p = container.begin(); p != container.end(); ++p)
    	std::cout<<*p<<" ";
	
    std::cout<<std::endl;
}

template<class T>
void AddToContainer(T& container, char **av, int ac)
{
	for (int i = 1; i < ac; i++)
  		container.push_back(std::atoi(av[i]));
}

template<class T>
void AddToContainer(T& container, T& src,size_t pos, size_t len)
{
    std::cerr<<"pos"<<pos<<" to"<<len<<std::endl; 
	for (size_t i = pos ; i < len; i++)
  		container.push_back(src[i]);
}

template<class T>
void mysort(std::vector<T>& A) {
    std::vector<int> v = A;
    A.clear();
    int n = v.size();
    if (n == 1) {
        return ;
    } else {
        std::vector<int> pairs;
        for (int i = 0; i < n-1; i += 2) {
            if (v[i] > v[i+1]) {
                pairs.push_back(v[i]);
                pairs.push_back(v[i+1]);
            } else {
                pairs.push_back(v[i+1]);
                pairs.push_back(v[i]);
            }
        }
        if (n % 2 != 0) {
            pairs.push_back(v[n-1]);
        }std::vector<int> largerElements;
        largerElements.insert(largerElements.begin(), pairs.begin() + pairs.size()/2, pairs.end());
        mysort(largerElements);
        A.push_back(pairs[0]);
        for (int i = 1; i < n; i++) {
            std::vector<int>::iterator it = lower_bound(A.begin(), A.end(), pairs[i]);
            A.insert(it, pairs[i]);
        }
    }
}

template<class T>
void mysort(std::deque<T>& A) {
    std::deque<int> v = A;
    A.clear();
    int n = v.size();
    if (n == 1) {
        return ;
    } else {
        std::deque<int> pairs;
        for (int i = 0; i < n-1; i += 2) {
            if (v[i] > v[i+1]) {
                pairs.push_back(v[i]);
                pairs.push_back(v[i+1]);
            } else {
                pairs.push_back(v[i+1]);
                pairs.push_back(v[i]);
            }
        }
        if (n % 2 != 0) {
            pairs.push_back(v[n-1]);
        }std::deque<int> largerElements;
        largerElements.insert(largerElements.begin(), pairs.begin() + pairs.size()/2, pairs.end());
        mysort(largerElements);
        A.push_back(pairs[0]);
        for (int i = 1; i < n; i++) {
            std::deque<int>::iterator it = lower_bound(A.begin(), A.end(), pairs[i]);
            A.insert(it, pairs[i]);
        }
    }
}

#endif