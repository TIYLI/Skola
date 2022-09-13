#include "SchoolSystem.h"

void SchoolSystem::Run()
{
	std::cout << "type 1 if you want to add persson" << "\n";
	std::cout << "type 2 if you want to add a new class" << "\n";
	std::cout << "type 3 if you want to add persson to an existing schoolclass" << "\n";
	std::cout << "type 4 if you want to check if a persson is in the system" << "\n";
	std::cout << "type 5 if you want to get information of a spesific person" << "\n";
	std::cout << "type 6 if you want to remove a person from a class" << "\n";
	std::cout << "type 7 if you want to remove a person from the system" << "\n";
	std::cout << "type 8 if you want to get the names of the persons in a class" << "\n";
	int counter = 0;
	while (true)
	{
		//Manyn
		//Input
		//Feedback

		
		
		
		
		int input;

		std::cin >> input;
		
		switch (input)
		{
		case 1:
			"1";
			AddStudent();
			break;

		case 2:
			"2";
			AddClass();
			break;

		case 3:
			"3";
			AddINClass();

		case 4:
			"4";
			CheckStudent();

		case 5:
			"5";
			GetInfo();

		case 6:
			"6";
			RemoveFromClass();

		case 7:
			"7";
			RemoveFromSystem();

		case 8:
			"8";
			GetNamesFromClass();

		}
	}
}

void SchoolSystem::AddStudent()
{
	std::string nameInput;
	int ageInput;
	std::cout << "What is the students name: " << "\n";
	
	
	
	
	Student student;
	student.name = "";
	student.info = "";
	student.age = 12;
	students.push_back(student);
	
}

void SchoolSystem::RemoveStudent()
{
}

void SchoolSystem::RemoveStudent2()
{
}

void SchoolSystem::AddClass()
{
}

void SchoolSystem::AddINClass()
{
}

void SchoolSystem::CheckStudent()
{
}

void SchoolSystem::GetInfo()
{
}

void SchoolSystem::RemoveFromClass()
{
}

void SchoolSystem::RemoveFromSystem()
{
}

void SchoolSystem::GetNamesFromClass()
{
}
