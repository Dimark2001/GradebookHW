/*
 * main.cpp
 *
 *  Created on: Mar 25, 2020
 *      Author: yuri
 */

#include <iostream>
#include <list>
#include "zachetka.h"
#include "student.h"
#include "group.h"

using namespace std;

int main() {

	ZachiotkaBuilder zb;
	zb.addSubject(Subject("Physic", 0, 0))
	  .addSubject(Subject("Hrenotien", 0, 0))
	  .addSubject(Subject("Zakon bozhij", 0, 0))
	  .addSubject(Subject("Upotreblenie spirtnogo", 0, 0));

	Zachiotka* z;
	z = zb.create("1");
	for (Subject s : z->getSubjectList()){
		cout << s.name << "\n";
	}

	Student st1, st2;
	st1.setFirstName("Dima").setMiddleName("").setLastName("Kosarev").setGroup("Figli-Migli").setZachiotka(zb.create(std::to_string(st1.getId())));
	st2.setFirstName("Lioshik").setMiddleName("").setLastName("Kosarev").setGroup("Figli-Migli").setZachiotka(zb.create(std::to_string(st1.getId())));

	StudentsGroup sg;
    sg.add(&st1);
    sg.add(&st2);

    for (Student* s : sg.getList()){
    	cout << s->getFullName() << "\n";
    	cout << "Has subjects:" << "\n";
    	for (Subject sj : s->getZachiotka()->getSubjectList()){
    		cout << " - " << sj.name << "\n";
    	}
    }

	return 0;
}

