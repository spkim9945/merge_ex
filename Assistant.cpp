#include "Assistant.h"
#include <iostream>

using namespace std;

Assistant::Assistant()
{

}

Assistant::~Assistant(void)
{
}
void Assistant::setName(char *name) //set assistant's name
{
	strcpy(this->name, name); //variable 'name' is inherrited by class 'Name'
}
void Assistant::setAge(int age) //set assistant's age
{
	this->age = age;
}
void Assistant::setMajor(char *major) //set assistant's major
{
	strcpy(Professor::major, major); //variable 'major' is inheritted by class 'Professor'
}

void Assistant::setAssistantNum(char *assistantNum) //set assistant's number
{
	strcpy(Student::studentNum, assistantNum); //variable studentNum is inheritted by class 'Student'
}

void Assistant::setAssistantYear(int year) //set assistant's year
{
	Student::schoolYear = year; //variable 'schoolYear' is inheritted by class 'Student'
}

char *Assistant::getName() //return assistant's name
{
	return this->name;
}

int Assistant::getAge() //return assistant's age
{
	return this->age;
}

char *Assistant::getMajor() //return assistant's major
{
	return Professor::major;
}

char *Assistant::getAssistantNum() //return assistant's number
{
	return Student::studentNum;
}

int Assistant::getAssistantYear() //return assistant's year.
{
	return Student::schoolYear;
}
void Assistant::Say()
{
	cout<<"<<Assistant>>"<<endl;
	cout<<"Name : "<<Assistant::getName()<<endl;
	cout<<"Age : "<<Assistant::getAge()<<endl;
	cout<<"Major : "<<Assistant::getMajor()<<endl;
	cout<<"Assistant Number : "<<Assistant::getAssistantNum()<<endl;
	cout<<"Assistant's Year : "<<Assistant::getAssistantYear()<<endl;

}