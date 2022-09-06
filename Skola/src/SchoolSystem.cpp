#include "SchoolSystem.h"

void SchoolSystem::Run()
{
	int counter = 0;
	while (true)
	{
		//Manyn
		//Input
		//Feedback

		std::cout << "loop: " << counter << "\n";
		counter++;
		std::cin.get();
		int input;
		if (input = 1) AddStudent();
	}
}

void SchoolSystem::AddStudent()
{
	Student student;
	student.name = "bla";
	student.age = 123;
	students.push_back(student);
}

void SchoolSystem::RemoveStudent()
{
}
