#include "personal_task.hpp"
#include "task.hpp"
#include <iostream>
#include <string>
#include <cstring>
using namespace std;


PersonalTask::PersonalTask(string category, string name, string description){
  	         task_name = name;
        	 task_category = category;
       		 task_description = description;
} 
	void PersonalTask::Add_PersonalTask(){
		task_category = "Personal";
		string temp;
		cout << "You are creating a personal task." << endl;
		
		cout << "Create a title for your task follwed by [ENTER]." << endl;
		cin.ignore();		
		getline(cin, task_name);
		cout << "You entered: " << getName() << endl;
		
		cout << "Create a description for " <<  getName() << ". Once completed, hit [ENTER] to save." << endl;
		getline(cin, task_description);
		cout << "You entered: " << getDescription() << endl;

		cout << "Set a date you'd like to complete " << getName() << " by. Answer the following and hit [ENTER] to save." << endl;
		cout << endl;
		cout << "What day of the month would you like to finish " << getName() << " by? Enter a valid day as an integer." << endl;
		
		getline(cin, temp);
		day = std::stoi(temp);
		while (day < 1 || day > 31){
			cout << "Invalid input. Please enter a valid day of the month as an integer followed by [ENTER]." << endl;
			getline(cin, temp);
			day = stoi(temp);
		}
		cout << "You entered: " << getDay() << endl;
		cout << endl;
		cout << "What month do you plan on finishing " << getName() << "? Enter a valid month as an integer." << endl;
		
		getline(cin, temp);
		month = std::stoi(temp);
		while(month < 1 || month > 12) {
			cout << "Invalid input. Please enter a valid month of the year as an integer followed by [ENTER]." << endl;
			getline(cin, temp);
			month = stoi(temp);
		}
		cout << "You entered: " << getMonth() << endl;
		cout << endl;
		cout << "What year would you like to finish " << getName() << " by? Enter a valid year as an integer." << endl;
		
                getline(cin, temp);
		year = stoi(temp);
		while (year < 2021 || year > 3000){
			cout << "Invalid input. Please enter a valid year as an integer followed by [ENTER]." << endl;
                        getline(cin, temp);
			year = stoi(temp);
		}
		cout << "You entered: " << getYear() << endl;
		cout << endl;
		cout <<  "You wish to complete " << getName() << " by: " << getMonth() << "/" << getDay() << "/" << getYear() << endl;
		cout << endl;
		cout << getName() << " is now saved in your Planner." << endl;
		cout << endl;

	}

	PersonalTask::PersonalTask(){}


	void PersonalTask::EditTask() {
		string edit_input;
                string temp;
	
                cout << "Which of the following would you like to edit? Select the corresponding number followed by [ENTER]." << endl;
                cout << "1. Task name" << endl;
                cout << "2. Task description" << endl;
                cout << "3. Task date" << endl;
	
                cin.ignore();
		cin >> edit_input;
		while(edit_input != "1" && edit_input!= "2" && edit_input!= "3"){
                                cout << "Invalid input. Please try again." << endl;
				//cin.ignore();
                		cin >> edit_input;
		}
		if(edit_input == "1") {
			task_name = "";
			cout << "Type your new task name followed by [ENTER]." << endl;
			getline(cin, task_name);
                	
			cout << "You entered: " << getName() << endl; 	
			cout << endl;
			cout << "Your task name has been changed." << endl;
		}
		else if(edit_input == "2") {
			task_description = "";
			cout << "Type your new task description for " << getName() << " followed by [ENTER]." << endl;
			getline(cin, task_description);

			cout << "You entered: " << getDescription() << endl;
			cout << endl;
			cout << "Your task description has been changed." << endl;
		}
		else {
			day = 0;
			month = 0;
			year = 0;
			cout << "You are changing the date you'd like to complete " << getName() << " by. Please answer the following questions with valid inputs." << endl;
			cout << endl;
			cout << "What day of the month would you like to complete " << getName() << "? Enter a valid day as an integer." << endl;

               		        getline(cin, temp);
               			day = std::stoi(temp);
                		while (day < 1 || day > 31){
                        		cout << "Invalid input. Please enter a valid day of the month followed by [ENTER]." << endl;
                        		getline(cin, temp);
                        		day = stoi(temp);
                		}

		                cout << "What month would you like to complete " << getName() << "? Enter a valid month as an integer." << endl;

                		getline(cin, temp);
                		month = std::stoi(temp);
                		while(month < 1 || month > 12) {
                        		cout << "Invalid input. Please enter a valid month of the year as an integer followed by [ENTER]." << endl;
                        		getline(cin, temp);
                        		month = stoi(temp);
                		}		

	                cout << "What year would you like to complete " << getName() << "? Enter a valid year as an integer." << endl;

                	getline(cin, temp);
                	year = stoi(temp);
                	while (year < 2021 || year > 3000){
                        	cout << "Invalid input. Please enter a valid year as an integer followed by [ENTER]." << endl;
                        	getline(cin, temp);
                        	year = stoi(temp);
       		       }
			cout << "You have saved the following date to complete " << getName() << ": " << getMonth() << "/" << getDay() << "/" << getYear() << endl;
	
		}	
}	
