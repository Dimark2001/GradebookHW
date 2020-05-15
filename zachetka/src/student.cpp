#include <iostream>
#include <list>
#include "student.h"

using namespace std;

long Student::next_id = 0;

Student::Student(std::string firstName, std::string middleName, std::string lasName, std::string group){
		this->firsName = firstName;
		this->lastName = lastName;
		this->middleName = middleName;
		this->group = group;
		zachiotka = NULL;
		id = next_id++;
		semester = 1;
       }
Student::Student(){
	id = next_id++;
	semester = 1;
	zachiotka = NULL;
}
Student::~Student(){

}
Student& Student::setSemester(int s){
	this->semester = s;
	return *this;
}
Student& Student::setFirstName(string firstName){
	this->firsName = firstName;
	return *this;
}
Student& Student::setMiddleName(string middleName){
	this->middleName = middleName;
	return *this;
}
Student& Student::setLastName(string lastName){
	this->lastName = lastName;
	return *this;
}
Student& Student::setGroup(string group){
	this->group = group;
	return *this;
}
Student* Student::create(){
	return this;
}
std::string Student::getFullName(){
	return this->lastName + " " + this->firsName + " " + this->middleName;
}
long Student::getId(){
	return id;
}
std::string Student::getStringId(){
	return std::to_string(id);
}
Zachiotka* Student::getZachiotka(){
	return this->zachiotka;
};
Student& Student::setZachiotka(Zachiotka* z){
	this->zachiotka = z;
	return *this;
};
