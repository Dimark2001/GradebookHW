#ifndef GROUP_H_
#define GROUP_H_
#include <list>
#include "student.h"

class StudentsGroup {
	private:
		std::list<Student*> students;
	public:
		StudentsGroup();
		StudentsGroup& add (Student* student);
		std::list<Student*> getList ();

};
#endif /* GROUP_H_ */
