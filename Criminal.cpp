#include <iostream>
#include <string.h>
#include "Criminal.h"
using namespace std;

Criminal::Criminal()
{
}

Criminal::~Criminal()
{
}

void Criminal::setInfo(){
	Person::setInfo();
	cout<<"Enter Criminal ID: ";
	cin>>id;
}

void Criminal::showInfo(){
	Person::showInfo();
	cout<<"The Criminal ID is: "<<id<<endl;
}

void Criminal::showSpecificInfo(int sd, char se[20]/* searchName == 0*/){
	si = sd;
	strcpy(sn, se);
	if (si == 0){
		if (strcmp(sn, name) == 0/*sn = name*/){
			Criminal::showInfo();
		}
	}else{
		if (si == id){
			Criminal::showInfo();
		}
	}
}
