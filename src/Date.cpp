
#include <iostream>
#include <stdlib.h>
#include "Date.h"
#include "BlogEntry.h"

using namespace std;


Date::Date(){
   int day = 1;
   int month = 1;
   int year = 1;
return;
}

Date::Date(int day, int month, int year) throw (logic_error){
cout << day << "/" << month << "/" << year << endl;
return;
}

int Date::getDay() const {
    int i;
    for (i = 0; Date == "/"; ++i)

    return day;
}

int Date::getMonth() const {
return month;
}

int Date::getYear() const {
return year;
}

bool Date::isLeapYear(int year){
    while (year > 1901) {
        return true;
    }
    return false;
}
//int Date::getDayOfWeek(int day, int month, int year) const {

//}
int Date::daysInMonth(int month, int year){
    while (year > 1901);{
        return daysInMonth(month,year);
    }
    return 0;
}
ostream& operator<<(ostream& out, const Date& date){
    return out << date.month << "/" << date.day << "/" << date.year;
}


void Date::showStructure() const {
    // Outputs data in same form as operator<<.
    // NOTE: could do "cout << *this << endl", but that would not compile
    // if operator<< has not been defined.
    cout << month << "/" << day << "/" << year << endl;
}





