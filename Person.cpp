#include"Person.h"

	Person::Person()
  {
    setName("","");
  }
	
	string Person::getName()
  {
    return (first + " " + last); 
  }
	void Person::setName(string f, string l)
  {
    first = f;
    last = l;
  }

	string Person::getID()
  {
    return (id); 
  }
	void Person::setID(string f)
  {
    id = f;
  }
