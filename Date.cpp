#include "Date.h"
#include <ctime>
#include <iostream>

void Date::set_day(int d) { day = d; }
void Date::set_month(int m) { month = m; }
void Date::set_year(int y) { year = y; }

Date Date::now() {
    std::time_t t = std::time(0);
    std::tm *now = std::localtime(&t);

    Date date{now->tm_mon + 1, now->tm_mday, now->tm_year + 1900};
    return date;
}

std::ostream &operator<<(std::ostream &os, const Date &d) {
    os << d.month << "/" << d.day << "/" << d.year;
    return os;
}

void Date::operator+=(const Date &rhs) { this->set_day(this->day + rhs.day); }

void Date::operator-=(const Date &rhs) { this->set_day(this->day - rhs.day); }
