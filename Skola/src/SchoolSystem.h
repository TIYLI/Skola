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
	void RemoveStudent2();
	void AddClass();
	void AddINClass();
	void CheckStudent();
	void GetInfo();
	void RemoveFromClass();
	void RemoveFromSystem();
	void GetNamesFromClass();


	std::vector<Student> students;
	
	std::vector<std::string> SchoolClasses;

};


