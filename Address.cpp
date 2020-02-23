#include "Address.h"
#include <iomanip>
using namespace std;

Address::Address()
{
	setStreetAddress("");
	setCity("");
	setState("");
	settZipCode("");
}

Address::Address(string A_streetaddress, string A_city)
{
	A_streetaddress = streetaddress;
	A_city = city;
}

Address::Address(string A_streetaddress, string A_city, string A_state)
{
	A_streetaddress = streetaddress;
	A_city = city;
	A_state = state;
}

Address::Address(string A_streetaddress, string A_city, string A_state, string A_streetaddress)
{
	A_streetaddress = streetaddress;
	A_city = city;
	A_state = state;
	A_zip = zipcode;
}


void Address::setStreetAddress(string A_streetaddress){streetaddress = A_streetaddress};
void Address::setCity(string A_city){ city= A_city};
void Address::setState(string A_state){ state = A_state}; 
void Address::settZipCode(string A_zip){ zipcode = A_zip};

string Address::getStreetAddress(){return streetaddress};
string Address::getCity(){return city};
string Address::getState(){return state}; 
string Address::getZipCode(){return zipcode};









////#ifndef ADDRESS_H
//#define ADDRESS_H
//#include "Address.h"
//#include <string>



//class Address
//{
//Address()
//Address(std::string)
//Address(std::string, std::string)
//Address(std::string, std::string, std::string)	
//Address(std::string, std::string, std::string, std::string)	

	
//Public:

//void setStreetAddress(std::string);
//void setCity(std::string);
//void setState(std::string); 
//void settZipCode(std::string);

//string getStreetAddress();
//string getCity();
//string getState(); 
//string getZipCode();
//};
//#endif