#include "student.h"
#include "address.h"
#include "date.h"
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>

void std::swap(Student*,Student*);

int main(){

    std::ifstream infile("students.dat");
    std::ofstream fullReport("fullReport.txt");
    std::ofstream shortReport("shortReport.txt");
    std::ofstream sortedReport("alphaReport.txt");

    int i;
    Student *students = new Student[50];
    Address *addresses = new Address[50];
    Date *dates = new Date[50];

    for(i=0;i<50;i++){
        std::string temp, temp2, firstName, lastName, GPA, credits, address1, address2, city, state, zip, birthday, gradDay;

        int day, month, year;

        std::stringstream ss;

        getline(infile,temp);
        ss << temp;

        getline(ss,lastName, ',');
        getline(ss,firstName, ',');
        getline(ss,address1, ',');
        getline(ss,address2, ',');
        getline(ss,city, ',');
        getline(ss,state, ',');
        getline(ss,zip, ',');
        getline(ss,birthday, ',');
        getline(ss,gradDay, ',');
        getline(ss,GPA, ',');
        getline(ss,credits, ',');

        students[i].setLastName(lastName);
        students[i].setFirstName(firstName);
        addresses[i].setAddress1(address1);
        addresses[i].setAddress2(address2);
        students[i].setStudentAddress(addresses[i]);
        students[i].setStudentAddress2(addresses[i]);
        addresses[i].setCity(city);
        students[i].setStudentCity(addresses[i]);
        addresses[i].setState(state);
        students[i].setStudentState(addresses[i]);
        addresses[i].setZip(zip);
        students[i].setStudentZip(addresses[i]);
        dates[i].setDate(birthday);
        students[i].getStudentDateBirth(date[i]);
        dates[i].setDate(gradDay);
        students[i].getStudentDateGrad(date[i]);
        students[i].setGPA(GPA);
        students[i].setCredits(credits);

    }//end setting if

    int answer;
    int a,b,c;
    bool keepGoing = true;
    while(keepGoing){
        std::cout << "What report would you like? " << std::endl;
        std::cout << "1: Full Report" << std::endl;
        std::cout << "2: Short Report" << std::endl;
        std::cout << "3: Sorted Report" << std::endl;

        std::cin >> answer;
        if(answer==1){
            for(a=0;a<50;a++){
                students[a].printFullReport(fullReport);
            }
        }//end full report

        else if(reply==2){
            for(a<0;a<50;a++){
                shortReport << "Student " << a+1 << std::endl;
                students[a].printShortReport(shortReport);
            }
        }//end short report

        else if(answer==3){
            for(a=0;a<50-1;a++){
                for(b=0;b<50-1;b++){
                    if(students[b].getLastName().compare(students[b+1].getLastName())>0){
                        swap(students+b,students+b+1);
                    }//end if
                }//end for
            }//end for
            for(c=0;c<50;c++){
                students[c].printSortedReport(sortedReport);
            }//end for
        }//end sortedReport
        else{
            keepGoing = false; 
        }//end else
    }//end while

    fullReport.close();
    shortReport.close();
    sortedReport.close();
    delete[]dates;
    delete[]addresses;
    delete[]students;

return 0
}//end main

void swap(Student*students1,Student*students2){
    Student temp;
    temp = *students1;
    *students1 = *students2;
    *students2 = temp;
}