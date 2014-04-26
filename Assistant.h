#pragma once
#include "Person.h"
#include "Professor.h"
#include "Student.h"

class Assistant : public Professor, public Student
{
public:
	Assistant(void);
	~Assistant(void);
	void setName(char *name);
	void setAge(int age);
	void setMajor(char *major);
	void setAssistantNum(char *assistantNum);
	void setAssistantYear(int year);
	char *getName();
	int getAge();
	char *getMajor();
	char *getAssistantNum();
	int getAssistantYear();
	void Say();
};
