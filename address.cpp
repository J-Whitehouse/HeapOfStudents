#include "address.h"
#include <string>
#include <iostream>

Address::Address(){

}

Address::~Address(){

}

std::string Address::getAddress1(){
    return address1;
}

void Address::setAddress1(std::string address1){
    Address::address1 = address1;
}

std::string Address::getAddress2(){
    return address2;
}

void Address::setAddress2(std::string address2){
    Address::address2 = address2;
}

std::string Address::getCity(){
    return city;
}

void Address::setCity(std::string city){
    Address::city = city;
}

std::string Address::getState(){
    return state;
}

void Address::setState(std::string state){
    Address::state = state;
}

std::string Address::getZip(){
    return zip;
}

void Address::setZip(std::string zip){
    Address::zip = zip;
}