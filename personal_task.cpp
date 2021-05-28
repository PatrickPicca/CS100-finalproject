#include "personal_task.hpp"
#include "task.hpp"
#include <iostream>
#include <string>
#include <cstring>
using namespace std;


	void PersonalTask::Add_SchoolTask(){
		cout << "You are creating a personal task." << endl;
		
		cout << "Create a title for your task follwed by [ENTER]." << endl;
		cin.ignore();		
		getline(cin, task_name);
		cout << "You entered: " << getName() << endl;
		
		cout << "Create a description for " getName() << ". Once completed, hit [ENTER] to save." << endl;
		cin.ignore();
		getline(cin, task_description);
		cout << "You entered: " << getDescription() << endl;

		cout << "Set a date you'd like to complete " getName() << "by. Answer the following and hit [ENTER] to save." << endl;
		cout << "What day would you like to finish " getName() << " by? Enter a valid day of the month." << endl;
		
		cin.ignore();
		getline(cin, day);
		
		while (day < 1 || day > 31){
			cout << "Invalid input. Please enter a valid day of the month followed by [ENTER]." << endl;
			cin.ignore();
			getline(cin, day);
		}
		cout << "You entered: " << getDay() << endl;
		
		cout << "What month do you plan on finishing " getName() << "? Enter a valid month as an integer." << endl;
		
		cin.ignore();
		getline(cin, month);
		
		while(month < 1 || month > 12) {
			cout << "Invalid input. Please enter a valid month of the year as an integer followed by [ENTER]." << endl;
			cin.ignore();
			getline(cin, month);
		}
		cout << "You entered: " << getMonth() << endl;
		
		cout << "What year would you like to finish " << getName() << "by? Enter a valid year as an integer." << endl;
		
		cin.ignore();
                getline(cin, year);

		while (year < 2021 || year > 3000){
			cout << "Invalid input. Please enter a valid year as an integer followed by [ENTER]." << endl;
                        cin.ignore();
                        getline(cin, year);
		}
		cout << "You entered: " << getYear() << endl;

		cout <<  "You wish to complete " << getName() << " by: " << getDay() << "/" << getMonth() << "/" << getYear() << endl;
	
		cout << getName() << " is now saved in your Planner." << endl;


	}

	// PersonalTask::PersonalTask(){}



