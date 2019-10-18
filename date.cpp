#include "date.h"

Date::Date(){

}

Date::~Date(){

}

int Date::getDay(){
    return day;
}

void Date::setDay(int day){
    Date::day = day;
}

int Date::getMonth(){
    return month;
}

void Date::setMonth(int month){
    Date::month = month;
}

int Date::getYear(){
    return year;
}

void Date::setYear(int year){
    Date::year = year;
}

std::string Date::getDate(){
    return date;
}

void Date::setDate(std::string date){
    Date::date = date;
}