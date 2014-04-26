#pragma once
#include "Person.h"
class Student : virtual public Person //inheritance class Person.
{
protected:
	int schoolYear;
	char studentNum[11];
	char major[32];
public:
	Student();
	~Student(void);
	int getAge();
	char *getName();
	char *getStudentNum();
	char *getMajor();
	int getSchoolYear();
	void setAge(int age);
	void setName(char *name);
	void setStudentNum(char *studentNum);
	void setMajor(char *major);
	void setSchoolYear(int year);
	void Say();
};
