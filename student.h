#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <fstream>
#include <string>
#include "date.h"
#include "address.h"

class Student{
    protected:
        std::string firstName;
        std::string lastName;
        std::string GPA;
        std::string credits;
        Address address1;
        Address address2;
        Address city;
        Address state;
        Address zipcode;
        Dates dateBirth;
        Dates gradDate;

    public:
        Student();

        ~Student();

        std::string getFirstName();
        void setFirstName(std::string firstName);

        std::string getLastName();
        void setLastName(std::string lastName);

        std::string getGPA();
        void setGPA(std::string gpa);

        std::string getCredits();
        void setCredits(std::string credits);

        void setStudentAddress(Address address1);
        Address getStudentAddress();

        void setStudentAddress2(Address address2);
        Address getStudentAddress2();

        void setStudentCity(Address city);
        Address getStudentCity();

        void setStudentState(Address state);
        Address getStudentState();

        void setStudentZip(Address zip);
        Address getStudentZip();

        void setStudentDateBirth(Date dateBirth);
        Date getStudentDateBirth();

        void setStudentDateGrad(Date dateGrad);
        Date getStudentDateGrad();

        void printFullReport(ofstream&);
        void printShortReport(ofstream&);
        void printSortedReport(ofstream&);
}; //end Student class
#endif