#include "BitcoinExchange.hpp"

Date::Date(std::string d)
{
	std::string date[3];
	date_split(d, date);
	int tmp_y = atoi(date[0].c_str());
	int tmp_m = atoi(date[1].c_str());
	int tmp_d = atoi(date[2].c_str());
	if (tmp_y <= 0 || tmp_m < 1 || tmp_m > 12 || tmp_d < 1 || tmp_d > 31)
		throw Date::InvalideInput();
	this->year = std::string(date[0]);
	this->month = std::string(date[1]);
	this->day = std::string(date[2]);
	this->y_val = tmp_y;
	this->m_val = tmp_m;
	this->d_val = tmp_d;
}

Date::Date(Date const &ref)
{
	this->day = ref.day;
	this->month = ref.month;
	this->year = ref.year;
	this->y_val = ref.y_val;
	this->m_val = ref.m_val;
	this->d_val = ref.d_val;
}

Date::~Date()
{
}

Date& Date::operator=(const Date& ref) 
{
	this->day = ref.day;
	this->month = ref.month;
	this->year = ref.year;
	this->y_val = ref.y_val;
	this->m_val = ref.m_val;
	this->d_val = ref.d_val;
	return (*this);
}

bool Date::operator==(const Date& src) const
{
	return (this->y_val == src.y_val && this->d_val == src.d_val && this->m_val == src.m_val);
}

bool Date::operator<(const Date& src) const
{
	return (this->y_val < src.y_val || (this->y_val == src.y_val && this->m_val < src.m_val) || (this->y_val == src.y_val && this->m_val == src.m_val && this->d_val < src.d_val));
}

bool Date::operator<=(const Date& src) const
{
	return (this->y_val < src.y_val || (this->y_val == src.y_val && this->m_val < src.m_val) || (this->y_val == src.y_val && this->m_val == src.m_val && this->d_val <= src.d_val));
}

bool Date::operator>=(const Date& src) const
{
	return (this->y_val > src.y_val || (this->y_val == src.y_val && this->m_val > src.m_val) || (this->y_val == src.y_val && this->m_val == src.m_val && this->d_val >= src.d_val));
}

bool Date::operator>(const Date& src) const
{
	return (this->y_val > src.y_val || (this->y_val == src.y_val && this->m_val > src.m_val) || (this->y_val == src.y_val && this->m_val == src.m_val && this->d_val > src.d_val));
}

const char* Date::InvalideInput::what(void) const throw() 
{
  return ("Bad input");
}

std::string Date::getYear() const
{
	return year;
}

std::string	Date::getDay() const
{
	return day;
}

std::string Date::getMonth() const 
{
	return month;
}

std::ostream&	operator<<(std::ostream& fd, const Date& src)
{
	fd<<src.getYear()<<"-"<<src.getMonth()<<"-"<<src.getDay();
	return (fd);
}