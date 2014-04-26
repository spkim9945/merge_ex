#pragma once

class Person
{
protected:
	int age;
	char name[32];
public:
	Person(void);
	~Person(void);
	virtual void Say() = 0; //to override this function, use virtual.
};
