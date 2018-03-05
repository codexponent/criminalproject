#include <iostream>
#include <fstream>
#include <string.h>
#include "NewFile.h"
using std::fstream;
using namespace std;

NewFile::NewFile()
{
}

NewFile::~NewFile()
{
}

/**
 * Writes on the New File
 */
void NewFile::write(){
	cfile.open("CriminalRecords.txt", ios::app|ios::ate|ios::out);
	cl.setInfo();
	cfile.write((char*)&cl, sizeof(cl));
	cfile.close();
}

/**
 * Reads the New File
 */
void NewFile::read(){
	cfile.open("CriminalRecords.txt", ios::app|ios::ate|ios::in);
	cfile.seekg(0);
	while(cfile.read((char*)&cl, sizeof(cl))){
		cl.showInfo();
	}
	cfile.close();
}

/**
 * Updates the New File
 * choice2: id of choosen number
 */
void NewFile::update(int choice2){
	cfile.open("CriminalRecords.txt", ios::ate|ios::in|ios::out);
	
	int object, position;
	object = choice2;
	position = (object - 1) * sizeof(cl);
	
	cfile.seekp(position);
	cl.setInfo();
	cfile.write((char*)&cl, sizeof(cl));
	cfile.close();
	
}

/**
 * Removes the choosen data
 * choice3: id of choosen number
 */
void NewFile::remove(int choice3){
	int del, position, currentPosition;
	currentPosition = 0;
	del = choice3;
	position = (del - 1);
	
	ifstream forinput;
	forinput.open("CriminalRecords.txt", ios::binary);
	ofstream foroutput;
	foroutput.open("Temporary.txt", ios::trunc);
	while(forinput.read((char*)&cl, sizeof(cl))){
		if (currentPosition == position){
			cout<<"The File That You Selected Has Been Deleted"<<endl;
		}else{
			foroutput.write((char*)&cl, sizeof(cl));
		}
		currentPosition++;
	}
	foroutput.close();
	forinput.close();
	
	ifstream forinputfile;
	forinputfile.open("Temporary.txt", ios::binary);
	ofstream foroutputfile;
	foroutputfile.open("CriminalRecords.txt", ios::trunc);
	while(forinputfile.read((char*)&cl, sizeof(cl))){
		foroutputfile.write((char*)&cl, sizeof(cl));
	}
	foroutputfile.close();
	forinputfile.close();
	
}

/**
 * Searches the choosen data
 * searchId: id of choosen number
 * searchName[20]: character of choosen string
 */
void NewFile::search(int searchId, char searchName[20]/*searchName == 0*/){
	sd = searchId;
	strcpy(se, searchName);
	cfile.open("CriminalRecords.txt", ios::app|ios::ate|ios::in);
	cfile.seekg(0);
	while(cfile.read((char*)&cl, sizeof(cl))){
		cl.showSpecificInfo(sd, se/*searchName == 0*/);
	}
	cfile.close();	
}

