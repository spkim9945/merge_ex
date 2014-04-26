#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(void) //inheritance Person class and bring arguments name, age.
{
}

Student::~Student(void) 
{
}

int Student::getAge() //return age
{
	return age;
}

char *Student::getMajor() //return major
{
	return major;
}

char *Student::getName() //return name
{
	return name;
}

int Student::getSchoolYear() //return school year
{
	return schoolYear;
}

char *Student::getStudentNum() //return student number
{
	return studentNum;
}

void Student::setAge(int age) //set student's age
{
	this->age = age;
}

void Student::setName(char *name) //set student's name
{
	strcpy(this->name, name);
}

void Student::setStudentNum(char *studentNum) //set student's number
{
	strcpy(this->studentNum, studentNum);
}

void Student::setMajor(char *major) //set student's major
{
	strcpy(this->major, major);
}

void Student::setSchoolYear(int year) //set student's year
{
	this->schoolYear = year;
}


void Student::Say()  //overriding function Say.
{
	cout<<"<<Student>>"<<endl; //print all Student's arguments.
	cout<<"I'm a student of KW University."<<endl;
	cout<<"My name is "<<Student::getName()<<"."<<endl;
	cout<<"I'm "<<Student::getAge()<<" years old and I¡¯m a "<<Student::getSchoolYear()<<" grade."<<endl;
	cout<<"I'm majoring in "<<Student::getMajor()<<"."<<endl;
	cout<<"My student number is "<<Student::getStudentNum()<<"."<<endl;
}
