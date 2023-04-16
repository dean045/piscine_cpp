#ifndef PMERGE_ME_HPP
# define PMERGE_ME_HPP


# include <iostream>
# include <vector>
# include <list>
# include <cstdlib>
# include <sstream>
# include <string>
# include <cstring>

int	parse(int ac, char **av);

template<class T>
void insertionSort(T& A, int p, int q) {
    for (int i = p; i < q; i++) {
        int tempVal = A[i + 1];
        int j = i + 1;
        while (j > p && A[j - 1] > tempVal) {
            A[j] = A[j - 1];
            j--;
        }
        A[j] = tempVal;
    }
}

template<class T>
void merge(T& A, int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;
    typename T<int> LA(A.begin() + p, A.end() - q);
    typedef typename T<int> RA(A.begin() + q + 1, A.end());
    int RIDX = 0;
    int LIDX = 0;
    for (int i = p; i < r - p + 1; i++) {
        if (RIDX == n2) {
            A[i] = LA[LIDX];
            LIDX++;
        } else if (LIDX == n1) {
            A[i] = RA[RIDX];
            RIDX++;
        } else if (RA[RIDX] > LA[LIDX]) {
            A[i] = LA[LIDX];
            LIDX++;
        } else {
            A[i] = RA[RIDX];
            RIDX++;
        }
    }
}

template<class T>
void sort(T& A, int p, int r) {
    if (r - p > 5) {
        int q = (p + r) / 2;
        sort(A, p, q);
        sort(A, q + 1, r);
        merge(A, p, q, r);
    } else {
        insertionSort(A, p, r);
    }
}

template<class T>
void AddToContainer(T& container, char **av, int ac)
{
	for (int i = 1; i < ac; i++)
  		container.push_back(std::atoi(av[i]));
}

template<class T>
void PrintContainer(T& container)
{
	int i = 0;
	typedef typename T::iterator Iter;
    for (Iter p = container.begin(); p != container.end(); ++p)
	{
    	std::cout<<*p<<" ";
		if (++i == 10)
		{
			std::cout<<"[..]"<<std::endl;
			return ;
		}
	}
	
	std::cout<<std::endl;
}

#endif