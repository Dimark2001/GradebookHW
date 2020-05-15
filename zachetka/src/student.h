/*
 * student.h
 *
 *  Created on: Mar 25, 2020
 *      Author: yuri
 */

#ifndef STUDENT_H_
#define STUDENT_H_
#include <string>
#include "zachetka.h"

class Student {
    public:
		Student();

		Student(std::string firstName, std::string middleName, std::string lasName, std::string group);

		Student& setFirstName (std::string);
		Student& setMiddleName(std::string);
		Student& setLastName(std::string);
		Student& setGroup(std::string group);
		Student& setSemester(int semester);
		Zachiotka* getZachiotka();
		Student& setZachiotka(Zachiotka*);
		std::string getFullName();
		Student* create();
		~Student();
		long getId();
		std::string getStringId();
        std::string firsName;
        std::string lastName;
        std::string middleName;
        std::string group;
        int semester;
    private:
        long id;
        Zachiotka* zachiotka;
        static long next_id;
};
#endif /* STUDENT_H_ */
