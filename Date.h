#include <iostream>

class Date {
  private:
    int year, month, day;

  public:
    Date(int d = 0, int m = 0, int y = 0) : year(y), month(m), day(d) {}
    void set_day(int d);
    void set_month(int m);
    void set_year(int y);

    static Date now();

    friend std::ostream &operator<<(std::ostream &os, const Date &d);
	void operator+=(const Date &rhs);
	void operator-=(const Date &rhs);
};
