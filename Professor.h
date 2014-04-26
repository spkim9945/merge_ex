#pragma once
#include "Person.h"
class Professor : virtual public Person //inheritance class Person.
{
protected:
	char professorNum[11];
	char major[32];
public:
	Professor(void);
	~Professor(void);
	int getAge();
	char *getName();
	char *getProfessorNum();
	char *getMajor();
	int getSchoolYear();
	void setAge(int age);
	void setName(char *name);
	void setProfessorNum(char *professorNum);
	void setMajor(char *major);
	void Say();
};
