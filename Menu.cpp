#include <iostream>
#include <string.h>
#include "Menu.h"
using namespace std;

Menu::Menu()
{
}

Menu::~Menu()
{
}

void Menu::showMenu(){
	cout<<"Welconme To The Eastern Jail Criminal Records"<<endl;
	cout<<"_________________"<<endl;
	cout<<"||1. Add    (A)||"<<endl;
	cout<<"||2. Edit   (E)||"<<endl;
	cout<<"||3. Delete (D)||"<<endl;
	cout<<"||4. Show   (S)||"<<endl;
	cout<<"||5. Search (R)||"<<endl;
	cout<<"||6. Exit   (Q)||"<<endl;
	cout<<"-----------------"<<endl;
}

void Menu::setMenu(){
	cout<<"Enter Choice: ";
	cin>>choice;
	
	switch(choice){
		case 'A':
		case 'a':
		case '1':{
			cout<<"You Have Choosen To Add Criminals"<<endl;
			nf.write();
			showMenu();
			setMenu();
			break;
		} 
		
		case '2':
		case 'E':
		case 'e':{
			cout<<"Enter the Criminal Number to Edit: ";
			cin>>choice2;
			nf.update(choice2);
			showMenu();
			setMenu();
			break;
		}
		
		case '3':
		case 'D':
		case 'd':{
			cout<<"Enter the Criminal Number to Delete: ";
			cin>>choice3;
			nf.remove(choice3);	//this includes overriding function too
			showMenu();
			setMenu();
			break;
		}
		
		case 'S':
		case 's':
		case '4':{
			cout<<"You Have Choosen to Show Criminal's"<<endl;
			nf.read();
			showMenu();
			setMenu();
			break;
		}
		
		case '5':
		case 'R':
		case 'r':{
			cout<<"How Do You Want to Search Your Records"<<endl;
			cout<<"-----------"<<endl;
			cout<<"1. ID   (I)"<<endl;
			cout<<"2. Name (N)"<<endl;			
			cout<<"-----------"<<endl;
			cin>>choice1;
			switch(choice1){
				case '1':
				case 'I':
				case 'i':{
					cout<<"Enter the ID to Search: ";
					cin>>searchId;
					strcpy(searchName, "");
					nf.search(searchId, searchName/*searchName == 0*/);		
					break;
				}
				
				case '2':
				case 'N':
				case 'n':{
					cout<<"Enter the Name to Search: ";
					cin>>searchName;
					searchId = 0;
					nf.search(searchId, searchName);
					break;
				}
				
				default:{
					cout<<"Wrong Number"<<endl;
					break;
				}
			}
			showMenu();
			setMenu();
			break;
		}
				
		case '6':
		case 'Q':
		case 'q':
		case '0':{
			cout<<"Thank You For Using The Program"<<endl;
			break;
		}
		
		default:{
			cout<<"Other Features Comming Soon!"<<endl;
		}
	}
}
