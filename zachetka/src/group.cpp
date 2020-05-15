/*
 * group.cpp
 *
 *  Created on: Mar 25, 2020
 *      Author: yuri
 */
#include "group.h"
#include "student.h"
using namespace std;

StudentsGroup::StudentsGroup(){

}

StudentsGroup& StudentsGroup::add (Student* student) {
	this->students.push_back(student);
	return *this;
}


std::list<Student*> StudentsGroup::getList (){
	return this->students;
}
