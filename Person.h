#ifndef PERSON_H
#define PERSON_H

class Person
{
	protected:
		char name[20];
	public:
		Person();
		~Person();
		void setInfo();
		void showInfo();		
};

#endif
