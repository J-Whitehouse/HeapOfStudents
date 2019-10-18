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

void Student::printFullReport(std::ofstream& fullReport){
    fullReport << "Name: " << getFirstName() << " " << getLastName() << std::endl;
    fullReport << "Address: " << getStudentAddress().getAddress1() << 
    "\nAddress 2: " << getStudentAddress2().getAddress2() << 
    "\nCity: " << getStudentCity().getCity() <<
    "\nState: " << getStudentState().getState() << 
    "\nZip: " << getStudentZip().getZip() << 
    "\nDate of Birth: " << getStudentDateBirth().getDate() <<
    "\nCredits: " << getCredits() << 
    "\nGPA: " << getGPA() << 
    "\nDate of Graduation: " << getStudentDateGrad().getDate() <<
    "\n_________________________________________________________" << std::endl;
}

void Student::printShortReport(std::ofstream& shortReport){
    shortReport << "First Name: " << getFirstName() << 
    "\nLast Name: " << getLastName() << std::endl;
}

void Student::printSortedReport(std::ofstream& sortedReport){
    sortedReport << "Last Name: " << getLastName() << ", " << getFirstName() << std::endl;
}