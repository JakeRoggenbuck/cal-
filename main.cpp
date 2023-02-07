#include "Date.h"
/* #include "Month.h" */
#include <iostream>

void display_today() {
    Date day = Date::now();

    std::cout << day << "\n"; // 2/6/2023
    day += 1;
    std::cout << day << "\n"; // 2/6/2023
}

/* void display_month() { */
/*     Month month = Month::now(); */

/*     std::cout << month << "\n"; // 2/2023 */
/*     month += 1; */
/*     std::cout << month << "\n"; // 3/2023 */
/* } */

/* void display_whole_month() { */
/*     Month month = Month::now(); */
/*     month += 1; */

/*     std::cout << month.full() << "\n"; */

/*     /1* Su Mo Tu We Th Fr Sa */
/*                  1  2  3  4 */
/*         5  6  7  8  9 10 11 */
/*        12 13 14 15 16 17 18 */
/*        19 20 21 22 23 24 25 */
/*        26 27 28 29 30 31 */
/*      *1/ */
/* } */

int main() {
    display_today();
    /* display_month(); */
    /* display_whole_month(); */
}
