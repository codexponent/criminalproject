#include <iostream>
#include "Person.h"
using namespace std;

Person::Person()
{
}

Person::~Person()
{
}

/**
 * Sets the person Information
 */
void Person::setInfo(){
	cout<<"Enter Criminal Name: ";
	cin>>name;
}

/**
 * Shows the person Information
 */
void Person::showInfo(){
	cout<<"The Criminal Name is: "<<name<<endl;
}











