#ifndef ZACHETKA_H_
#define ZACHETKA_H_
#include <list>

typedef struct {
int a;
}a;

struct Subject {
	std::string name;
	int type;
	int result;
	Subject(std::string n, int t, int r){
		this->name = n;
		this->type = t;
		this->result = r;
	}
};

class Zachiotka {
public:
	Zachiotka& addSubject(Subject);
	Zachiotka& setSubjects(std::list<Subject>);
	Zachiotka(std::list<Subject>);
	Zachiotka();
	std::list<Subject> getSubjectList();
	std::string getId();
	Zachiotka& setId(std::string);
private:
	std::list<Subject> subject;
	std::string id;
};

class ZachiotkaBuilder {
public:
	 ZachiotkaBuilder ();
	 ZachiotkaBuilder& addSubject(Subject);
	 Zachiotka* create (std::string);
	 ~ZachiotkaBuilder ();
private:
	 std::list <Subject> subjects;
};




#endif /* ZACHETKA_H_ */
