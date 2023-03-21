#ifndef DATE_HPP
#define DATE_HPP

class Date
{
	private:
		std::string	year;
		std::string	month;
		std::string	day;
		int			y_val;
		int			m_val;
		int			d_val;
	public:
		Date(std::string d);
		Date(Date const &ref);
		class InvalideInput: public std::exception
		{
			public: const char* what(void) const throw();
		};
		std::string getYear() const;
		std::string getMonth() const;
		std::string	getDay() const;
		Date& operator=(const Date &ref);
		bool operator<(const Date &src)  const;
		bool operator<=(const Date &src) const;
		bool operator>=(const Date &src) const;
		bool operator>(const Date &src)  const;
		bool operator==(const Date &src) const;
		~Date();
};

std::ostream&	operator<<(std::ostream& fd, const Date& src);


#endif