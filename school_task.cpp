#include "school_task.hpp"
#include "task.hpp"
#include <iostream>
#include <string>
#include <cstring>
using namespace std;


	void SchoolTask::Add_SchoolTask(){
		cout << "You are creating a school task." << endl;
		
		cout << "Create a title for your task follwed by [ENTER]." << endl;
		cin.ignore();		
		getline(cin, task_name);
		cout << "You entered: " << getName() << endl;
		
		cout << "Create a description for " getName() << ". Once completed, hit [ENTER] to save." << endl;
		cin.ignore();
		getline(cin, task_description);
		cout << "You entered: " << getDescription() << endl;

		cout << "Set a due date for " getName() << ". Answer the following and hit [ENTER] to save." << endl;
		cout << "What day is " getName() << " due? Enter a valid day of the month." << endl;
		
		cin.ignore();
		getline(cin, day);
		
		while (day < 1 || day > 31){
			cout << "Invalid input. Please enter a valid day of the month followed by [ENTER]." << endl;
			cin.ignore();
			getline(cin, day);
		}
		cout << "You entered: " << getDay() << endl;
		
		cout << "What month is " getName() << " due? Enter a valid month as an integer." << endl;
		
		cin.ignore();
		getline(cin, month);
		
		while(month < 1 || month > 12) {
			cout << "Invalid input. Please enter a valid month of the year as an integer followed by [ENTER]." << endl;
			cin.ignore();
			getline(cin, month);
		}
		cout << "You entered: " << getMonth() << endl;
		
		cout << "What year is " << getName() << " due? Enter a valid year as an integer." << endl;
		
		cin.ignore();
                getline(cin, year);

		while (year < 2021 || year > 3000){
			cout << "Invalid input. Please enter a valid year as an integer followed by [ENTER]." << endl;
                        cin.ignore();
                        getline(cin, year);
		}
		cout << "You entered: " << getYear() << endl;

		cout << "The set due date for " << getName() << " is: " << getDay() << "/" << getMonth() << "/" << getYear() << endl;


	//add priority stuff here 
		


	}
	// SchoolTask::SchoolTask(){}







