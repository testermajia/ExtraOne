/* CIT237 Extracredit 1
/* Hanfei Xu
*/

#include "Cd.h"
#include <iostream>
using namespace std;


Cd::Cd(){
	cout<<"\n Cd default constructor";
	label[1]='\0';
	performers[1]='\0';
	selections = 0;
	playtime=0.0;
	sLength1=0;
	sLength2=0;
}
Cd::Cd(char *s1, char *s2, int n, double x){
	cout<<"\n Cd constructor with args";
	for (unsigned  i=0;i<strlen(s1);i++){ //strlen(string)v.s. sizeof(array)
		performers[i] = s1[i]; //array of char v.s. string
	}

	for (unsigned  i=0;i<strlen(s2);i++){
		label[i]=s2[i];
	}

	selections = n;
	playtime = x;
	//store string length in to variables for other functions
	//since the original source string only passed to constructor.
	sLength1=strlen(s1);
	sLength2=strlen(s2);
}


Cd::Cd(const Cd &d){
	cout<<"\n Cd copy constructor";

	//use default array length
	for(int i=0;i<50;i++ ){
		performers[i]=d.performers[i];
	}

	for(int i=0;i<20;i++ ){
		label[i]=d.label[i];
	}

	selections=d.selections;
	playtime=d.playtime;
	sLength1=d.sLength1;
	sLength2=d.sLength2;
}
	

Cd::~Cd(){
	cout<<"\n destroyed Cd";
}


void Cd::report() const{
	cout<<"\n Performer: ";
	for(int i=0;i<sLength1;i++){
		cout<<performers[i];
	}

	cout<<"\n Label: ";
	for(int i=0;i<sLength2;i++){
		cout<<label[i];
	}

	cout<<"\n Selections: "<<selections;
	cout<<"\n Playtime: "<<playtime;
	cout<<"\n";
	
}

Cd& Cd:: operator=(const Cd &d){
	//cout<<"\n Cd overload =";
	for(int i=0;i<50;i++ ){
		performers[i]=d.performers[i];
	}

	for(int i=0;i<20;i++ ){
		label[i]=d.label[i];
	}

	selections=d.selections;
	playtime=d.playtime;
	sLength1=d.sLength1;
	sLength2=d.sLength2;

	return *this;
}