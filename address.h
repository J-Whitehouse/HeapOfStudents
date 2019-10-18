#ifndef ADDRESS_H
#define ADDRESS_H
#include <iostream>
#include <string>

class Address{
        protected:
            std::string address1;
            std::string address2;
            std::string city;
            std::string state;
            std::string zip;

        public:
            Address();

            ~Address();

            std::string getAddress1();
            void setAddress1(std::string address1);

            std::string getAddress2();
            void setAddress2(std::string address2);

            std::string getCity();
            void setCity(std::string city);

            std::string getState();
            void setState(std::string state);

            std::string getZip();
            void setZip(std::string zip);
};//end Address class
#endif