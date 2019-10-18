#include "student.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

Student::Student(){

}

Student::~Student(){

}

std::string Student::getFirstName(){
    return firstName;
}

void Student::setFirstName(std::string firstName){
    Student::firstName = firstName;
}

std::string Student::getLastName(){
    return lastName;
}

void Student::setLastName(std::string lastName){
    Student::lastName = lastName;
}

std::string Student::getGPA(){
    return gpa;
}

void Student::setGPA(std::string gpa){
    Student::gpa = gpa;
}

std::string Student::getCredits(){
    return credits;
}

void Student::setCredits(std::string credits){
    Student::credits = credits;
}

Address Student::getStudentAddress(){
    return address1;
}

void Student::setStudentAddress(Address address1){
    Student::address1 = address1;
}

Address Student::getStudentAddress2(){
    return address2;
}

void Student::setStudentAddress2(Address address2){
    Student::address2 = address2;
}

Address Student::getStudentCity(){
    return city;
}

void Student::setStudentCity(Address city){
    Student::city = city;
}

Address Student::getStudentState(){
    return state;
}

void Student::setStudentState(Address state){
    Student::state = state;
}

Address Student::getStudentZip(){
    return zip;
}

void Student::setStudentZip(Address zip){
    Student::zip = zip;
}

Date Student::getStudentDateBirth(){
    return dateBirth;
}

void Student::setStudentDateBirth(Date dateBirth){
    Student::dateBirth = dateBirth;
}

Date Student::getStudentDateGrad(){
    return dateGrad;
}

void Student::setStudentDateGrad(Date dateGrad){
    Student::dateGrad = dateGrad;
}

void Student::printFullReport(ofstream& fullReport){
    fullReport << "Name: " << getFirstName() << " " << getLastName() << std::endl;
    fullReport << "Address: " << getStudentAddress() << 
    \n"Address 2: " << getStudentAddress2() << 
    \n"City: " << getStudentCity() <<
    \n"State: " << getStudentState() << 
    \n"Zip: " << getStudentZip() << 
    \n"Date of Birth: " getStudentDateBirth() <<
    \n"Credits: " << getStudentCredits() << 
    \n"GPA: " << getStudentGPA() << 
    \n"Date of Graduation: " << getStudentDateGrad() <<
    \n"_________________________________________________________" << std::endl;
}

void Student::printShortReport(ofstream& shortReport){
    shortReport << "First Name: " << getFirstName() << 
    \n"Last Name: " << getLastName() << std::endl;
}

void Student::printSortedReport(ofstream& sortedReport){
    sortedReport << "Last Name: " << getLastName() << "First Name: " << getFirstName() << endl;
}