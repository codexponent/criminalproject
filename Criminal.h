#ifndef CRIMINAL_H
#define CRIMINAL_H
#include "Person.h"

class Criminal: public Person
{
	protected:
		int id;
		char sn[20];
		int si;
	public:
		Criminal();
		~Criminal();
		void setInfo();
		void showInfo();
		void showSpecificInfo(int sd, char se[20]/* searchName = 0*/);
};

#endif
