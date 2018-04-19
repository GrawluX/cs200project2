#include<iostream>

#ifndef PERSON_H
#define PERSON_H

class Person {
	public:
		Person();
	
		string getName();
		void setName(string f, string l);
	private:
		string first;
		string last;
};

#endif
