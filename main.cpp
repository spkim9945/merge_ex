#include <iostream>
#include "Person.h"
#include "Professor.h"
#include "Student.h"
#include "Assistant.h"
#include <string>

using namespace std;

int main()
{
	cout<<"commit 0\n";
	Assistant A1;
	A1.setName("Park");
	A1.setAge(26);
	A1.setMajor("Math");
	A1.setAssistantNum("2008-11-12");
	A1.setAssistantYear(1);
	A1.Say();



	return 0;
}