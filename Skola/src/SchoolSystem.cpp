#include "SchoolSystem.h"

void SchoolSystem::Run()
{
	
	int counter = 0;
	while (true)
	{
		//Manyn
		std::cout << "type 1 if you want to add persson" << "\n";
		std::cout << "type 2 if you want to add a new class" << "\n";
		std::cout << "type 3 if you want to add persson to an existing schoolclass" << "\n";
		std::cout << "type 4 if you want to check if a persson is in the system" << "\n";
		std::cout << "type 5 if you want to get information of a spesific person" << "\n";
		std::cout << "type 6 if you want to remove a person from a class" << "\n";
		std::cout << "type 7 if you want to remove a person from the system" << "\n";
		std::cout << "type 8 if you want to get the names of the persons in a class" << "\n";
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
	std::string newName = "";
	int newAge = 0;
	Student student;

	
	std::cout << "Write the students name\n";
	std::cin >> newName;
	std::cout << "Write the students age\n";
	std::cin >> newAge;

	student.name = newName;
	student.age = newAge;
	
	students.push_back(student);
	
}

void SchoolSystem::AddClass()
{
	std::string TheClass = "";
	std::cout << "Write a classname\n";
	std::cin >> TheClass;
	SchoolClasses.push_back(TheClass);
	std::cout << "Class " << TheClass << " created\n";
}

void SchoolSystem::AddINClass()
{
	std::string name;
	std::string schoolclass;
	std::string quest;

	std::cout << "What's the name of student you want to add in the class?\n";

	//feedback namn
	std::cin >> name;

	std::cout << "What's the name of the class you want to add the student in?\n";

	//feedback class
	std::cin >> schoolclass;



	if (!std::count(SchoolClasses.begin(), SchoolClasses.end(), schoolclass))
	{
		std::cout << "Class doesn't exist\n";
		std::cout << "Do you want to make a new class? \n yes or no?";
		std::cin >> quest;
	}

	for (auto& i : students)
	{
		if (i.name == name)
		{
			
			if (quest == "no") return;

			
			if (quest == "yes") SchoolClasses.push_back(schoolclass);

			
			i.name = name;
			std::cout << "Student " << i.name << " is added to the class " << i.schoolClass << "\n";
			return;
		}
	}

	return;

	//output
}

void SchoolSystem::CheckStudent()
{
	std::string input = "";
	std::cout << "Check if student exist in system\n yes or no?\n";
	std::cin >> input;
	if (std::count(SchoolClasses.begin(), SchoolClasses.end(), input))
	{
		if (input == "no") return;

		if ("yes")
		{
			//cout:: <<
		}

	}
	return;
}

void SchoolSystem::GetInfo()
{
	std::string input = "";
	std::cout << "What's the students name\n";
	std::cin >> input;

	for (auto i : students)
	{
		if (input == i.name)
		{
			std::cout << "Name: " << i.name << "\n";
			std::cout << "Age: " << i.age << "\n";
			std::cout << "Class: " << i.schoolClass << "\n\n";
			return;
		}
	}
	return;
}

void SchoolSystem::RemoveFromClass()
{
	std::string name;

	std::cout << "What is the name of the class you want to remove?\n";
	std::cin >> name;


	for (auto& i : students)
	{
		if (i.name == " ")
		{
			i.schoolClass = "";
		}
	}
	return;
}


void SchoolSystem::RemoveFromSystem()
{
	std::string name;

	std::cout << "What is the name of the student you want to remove?\n";
	std::cin >> name;


	for (auto& i : students)
	{
		if (i.name == " ")
		{
			i.name = "";
			i.age = 0;
			i.schoolClass = "" ;
		}
	}
	return;
}

void SchoolSystem::GetNamesFromClass()
{
	int counter = 1;
	std::string className = "";
	std::cout << "Write the class name\n";
	std::cin >> className;

	if (!std::count(SchoolClasses.begin(), SchoolClasses.end(), className))
	{
		std::cout << "Couldn't find class\n";
		return;
	}

	for (auto& i : students)
	{
		if (i.name == className)
		{
			std::cout << "Student " << counter << ": " << i.name << "\n";
			counter++;
		}
	}
	return;
}
