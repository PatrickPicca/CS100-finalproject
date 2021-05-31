#include "school_task.hpp"
#include "task.cpp"
#include <iostream>
#include <string>
#include <cstring>
#define BLUE    "\033[34m"      /* Blue */
#define GREEN   "\033[32m"      /* Green */
#define RESET   "\033[0m"
using namespace std;



	SchoolTask::SchoolTask(string category, string name, string description){
  	         task_name = name;
        	 task_category = category;
       		 task_description = description;
} 

	void SchoolTask::Add_SchoolTask(){
		task_category = "School";
		string temp;
		cout << "You are creating a school task." << endl;
		
		cout << "Create a title for your task follwed by [ENTER]." << endl;
		cin.ignore();		
		getline(cin, task_name);
		cout << "You entered: " << BLUE << getName() << RESET << endl;
		
		cout << "Create a description for " << BLUE << getName() << RESET << ". Once completed, hit [ENTER] to save." << endl;
		//cin.ignore();
		getline(cin, task_description);
		cout << "You entered: " << GREEN << getDescription() << RESET << endl;
		cout << endl;
		cout << "Set a due date for " << BLUE << getName() << RESET << ". Answer the following as integers and hit [ENTER] to save." << endl;
		cout << "What day of the month is " << BLUE << getName() << RESET << " due?" << endl;
		
		//cin.ignore();
		getline(cin, temp);
		day = std::stoi(temp);
		while (day < 1 || day > 31){
			cout << "Invalid input. Please enter a valid day of the month followed by [ENTER]." << endl;
		//	cin.ignore();
			getline(cin, temp);
			day = stoi(temp);
		}
		cout << "You entered: " << GREEN << getDay() << RESET << endl;
		
		cout << "What month is " << BLUE << getName() << RESET << " due?" << endl;
		
		//cin.ignore();
		getline(cin, temp);
		month = std::stoi(temp);
		while(month < 1 || month > 12) {
			cout << "Invalid input. Please enter a valid month of the year as an integer followed by [ENTER]." << endl;
		//	cin.ignore();
			getline(cin, temp);
			month = stoi(temp);
		}
		cout << "You entered: " << GREEN << getMonth() << RESET << endl;
		
		cout << "What year is " << BLUE << getName() << RESET << " due?" << endl;
		
		//cin.ignore();
                getline(cin, temp);
		year = stoi(temp);
		while (year < 2021 || year > 3000){
			cout << "Invalid input. Please enter a valid year as an integer followed by [ENTER]." << endl;
                 //       cin.ignore();
                        getline(cin, temp);
			year = stoi(temp);
		}
		cout << "You entered: " << GREEN << getYear() << RESET << endl;
		cout << "The set due date for " << BLUE << getName() << RESET << " is: " << GREEN << getMonth() << "/" << getDay() << "/" << getYear() << RESET << endl;

		cout << endl;
		cout << "Please set a priority level for " << BLUE << getName() << RESET << ". Select a corresponding number followed by [ENTER]." << endl;
		cout << "1. Priority is relaxed." << endl;
		cout << "2. Priority is medium." << endl;
		cout << "3. Priority is high." << endl;

		//cin.ignore();
		getline(cin, temp);
		priority = stoi(temp);
		
		while(priority < 1 && priority > 3){
			cout << "Invalid input. Please enter a valid number corresponding to the level of priority of " << getName() << " follwed by [ENTER]" << endl;
		//	cin.ignore();
			getline(cin, temp);
			priority = stoi(temp);
		}
		cout << endl;	
		if(priority == 1) {
			cout << "The priority of " << BLUE << getName() << RESET << " is " << GREEN << "relaxed." << RESET << endl;
		}
		else if (priority == 2) {
			cout << "The priority of " << BLUE << getName() << RESET << " is " << GREEN << " medium." << RESET << endl;
		}
		else {
			cout << "The priority of " << BLUE << getName() << RESET << " is " << GREEN << "high." << RESET << endl;	
		}
		cout << BLUE << getName() << RESET << " is now saved in your Planner." << endl;
				
	}
	SchoolTask::SchoolTask(){}

 void SchoolTask::EditTask() {
		string edit_input;
                string temp;
	
                cout << "Which of the following would you like to edit? Select the corresponding number followed by [ENTER]." << endl;
                cout << "1. Task name" << endl;
                cout << "2. Task description" << endl;
                cout << "3. Task due date" << endl;
                cout << "4. Task priority" << endl;
	
                cin.ignore();
		cin >> edit_input;
	while(edit_input != "1" && edit_input!= "2" && edit_input!= "3" && edit_input != "4"){
                                cout << "Invalid input. Please try again." << endl;
		//		cin.ignore();
                		cin >> edit_input;
		}
		if(edit_input == "1") {
			task_name = "";
			cout << "Type your new task name followed by [ENTER]." << endl;
		//	cin.ignore();
			getline(cin, task_name);
                	
			cout << "You entered: " << BLUE << getName() << RESET << endl; 	
			cout << "Your task name has been changed." << endl;
		}
		else if(edit_input == "2") {
			task_description = "";
			cout << "Type your new task description for " << BLUE << getName() << RESET << " followed by [ENTER]." << endl;
		//	cin.ignore();
			getline(cin, task_description);

			cout << "You entered: " << GREEN << getDescription() << RESET << endl;
			cout << "Your task description has been changed." << endl;
		}
		else if(edit_input == "3"){
			day = 0;
			month = 0;
			year = 0;
			cout << "You are changing your due date. Answer the following as integers and hit [ENTER] to save." << endl;

			cout << "What day is " << BLUE << getName() << RESET << " due?" << endl;

         		        //cin.ignore();
               		        getline(cin, temp);
               			day = std::stoi(temp);
                		while (day < 1 || day > 31){
                        		cout << "Invalid input. Please enter a valid day of the month followed by [ENTER]." << endl;
                 //       		cin.ignore();
                        		getline(cin, temp);
                        		day = stoi(temp);
                		}

		                cout << "What month is " << BLUE << getName() << RESET << " due?" << endl;

                	//	cin.ignore();
                		getline(cin, temp);
                		month = std::stoi(temp);
                		while(month < 1 || month > 12) {
                        		cout << "Invalid input. Please enter a valid month of the year as an integer followed by [ENTER]." << endl;
                        	//	cin.ignore();
                        		getline(cin, temp);
                        		month = stoi(temp);
                		}		

	                cout << "What year is " << BLUE << getName() << RESET << " due?" << endl;

        	       // cin.ignore();
                	getline(cin, temp);
                	year = stoi(temp);
                	while (year < 2021 || year > 3000){
                        	cout << "Invalid input. Please enter a valid year as an integer followed by [ENTER]." << endl;
                        //	cin.ignore();
                        	getline(cin, temp);
                        	year = stoi(temp);
       		       }
			cout << "The new set due date for " << BLUE <<  getName() << RESET << " is: " << GREEN << getMonth() << "/" << getDay() << "/" << getYear() << RESET << endl;
	
		}	
	
		else {
			cout << "You are setting a new priority for " << BLUE << getName() << RESET << ". Select one of the following corresponding numbers followed by [ENTER]." << endl;
                cout << "1. Priority is relaxed." << endl;
                cout << "2. Priority is medium." << endl;
                cout << "3. Priority is high." << endl;

                //cin.ignore();
                getline(cin, temp);
                priority = stoi(temp);

                while(priority < 1 && priority > 3){
                        cout << "Invalid input. Please enter a valid number corresponding to the level of priority of " << BLUE << getName() << RESET << " follwed by [ENTER]" << endl;
                 //       cin.ignore();
                        getline(cin, temp);
                        priority = stoi(temp);
                }

                if(priority == 1) {
                        cout << "The new priority of " << BLUE << getName() << RESET << " is " << GREEN << "relaxed." << RESET << endl;
                }
		else if(priority == 2) {
               		cout << "The new priority of " << BLUE << getName() << RESET << " is " << GREEN << "medium." << RESET << endl;
                }
                else {
			cout << "The new priority of " << BLUE << getName() << RESET << " is " << GREEN << "high." << RESET << endl;
                }
		}
		
	}
