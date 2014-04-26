#include "Professor.h"
#include <iostream>

using namespace std;

Professor::Professor() //inheritance Person class and bring arguments name, age.
{
}

Professor::~Professor(void)
{
}

void Professor::setAge(int age) //set Professor's age
{
	this->age = age;
}
void Professor::setMajor(char *major) //set Professor's major
{
	strcpy(this->major, major);
}
void Professor::setName(char *name) //set Professor's name
{
	strcpy(this->name, name);
}
void Professor::setProfessorNum(char *professorNum) //set Professor's number
{
	strcpy(this->professorNum, professorNum);
}
int Professor::getAge() //return age
{
	return age;
}
char *Professor::getMajor() //return major
{
	return major;
}

char *Professor::getName() //return name
{
	return name;
}

char *Professor::getProfessorNum() //return professor number
{
	return professorNum;
}

void Professor::Say() //overriding function Say.
{

	cout<<"<<Professor>>"<<endl; //print all Student's arguments.
	cout<<"I'm a Professor of KW University."<<endl;
	cout<<"My name is "<<Professor::getName()<<"."<<endl;
	cout<<"I'm "<<Professor::getAge()<<" years old."<<endl;
	cout<<"I'm majoring in "<<Professor::getMajor()<<"."<<endl;
	cout<<"My professor number is "<<Professor::getProfessorNum()<<endl;
}