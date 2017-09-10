#ifndef NEWFILE_H
#define NEWFILE_H
#include <fstream>
#include "Criminal.h"
using std::fstream;

class NewFile
{
	private:
		Criminal cl;
		fstream cfile;
		int sd;
		char se[20];
	public:
		NewFile();
		~NewFile();
		void write();
		void read();
		void update(int choice2);
		void remove(int choice3);
		void search(int searchId, char searchName[20]);
};

#endif
