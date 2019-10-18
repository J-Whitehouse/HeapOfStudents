#ifndef DATE_H
#define DATE_H
#include <iostream>

class Date{
    protected:
        int day;
        int month;
        int year;
        std::string date;

    public:
        Date();

        ~Date();

        int getDay();
        void setDay(int day);

        int getMonth();
        void setMonth(int month);

        int getYear();
        void setYear(int year);

        std::string getDate();
        void setDate(std::string date);
}//end Date class
#endif