#include <iostream>
#include "Person.h"
using namespace std;

Person::Person()
{
}

Person::~Person()
{
}

void Person::setInfo(){
	cout<<"Enter Criminal Name: ";
	cin>>name;
}

void Person::showInfo(){
	cout<<"The Criminal Name is: "<<name<<endl;
}











