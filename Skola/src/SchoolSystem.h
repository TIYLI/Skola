#pragma once
#include "student.h"
#include <vector>
#include <iostream>

class SchoolSystem
{
public:
	void Run();
	void AddStudent();
	void RemoveStudent();


	std::vector<Student> students;
	
	std::vector<std::string> SchoolClasses;

};


