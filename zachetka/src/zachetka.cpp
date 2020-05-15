//============================================================================
// Name        : zachetka.cpp
// Author      : Dima?
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <list>
#include "zachetka.h"
#include "student.h"

using namespace std;

enum subjects {PHISICA ,INFORMATICA}; //Можно не хардкодить в енум, а создать класс с данными
enum resultTypes {BALL, CREDIT};
Zachiotka::Zachiotka(){

}

Zachiotka& Zachiotka::addSubject(Subject s){
		this->subject.push_back(s);
		return *this;
}

std::list<Subject> Zachiotka::getSubjectList(){
	return subject;
}
Zachiotka& Zachiotka::setSubjects(std::list<Subject> l){
	this->subject = l;
	return *this;
}
Zachiotka& Zachiotka::setId(std::string id){
	this->id = id;
	return *this;
}
std::string  Zachiotka::getId(){
	return this->id;
}

ZachiotkaBuilder::ZachiotkaBuilder(){

}
ZachiotkaBuilder::~ZachiotkaBuilder(){

}
ZachiotkaBuilder& ZachiotkaBuilder::addSubject(Subject s){
		this->subjects.push_back(s);
		return *this;
}

Zachiotka* ZachiotkaBuilder::create (std::string s){
	Zachiotka* z;
	z =  new Zachiotka();
	z->setSubjects(this->subjects).setId(s);
	return z;
}




