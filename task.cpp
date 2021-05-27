#include "task.hpp"

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

Task::Task(){
	string task_name = "";
	string task_description = "";
	int day = 0;
 	int month = 0;
	int year = 0;
	int priority = 0;
}

//create a description for the task
//string Task::task_description(){

//cout << "Create a title for your task follwed by [ENTER]." << endl;
                       // cin.ignore();
                       // getline(cin,task_name);
                       // cout << "You entered: " << task_name << endl;
		//	cout << "h";
//}


void Task::DisplayTask(){}

void Task::SaveTask(){}

//display menu that user chooses from

void Task::setDescription(string d) {
	task_description = d;
}
void Task::setName(string n){
	task_name = n;
}
void Task::setDay(int d){
	day = d;
}	
void Task::setMonth(int m){
	month = m;
}
void Task::setYear(int y){
	year = y;
}
void Task::setPriority(int p){
	priority = p;
}
string Task::getDescription(){
	return task_description;
}
string Task::getName(){
	return task_name; 
}
int Task::getDay(){
	return day;
}
int Task::getMonth(){
	return month;
}
int Task::getYear(){
	return year;
}
int Task::getPriority(){
	return priority;
}


 
void Task::DisplayMenu(){
	string input;
	
	cout << "Welcome to PlannerPlus. Enter the corresponding number for the following options follwed by [ENTER]." << endl;
		
	cout << "1. Create New Task." << endl;
	cout << "2. Display Existing Task(s)." << endl;
	cout << "3. Delete a Task." << endl;
	cout << "4. Edit an Existing Task" << endl;
	cout << "5. Quit." << endl;

	cin >> input;
	
	if (input == "1") {
		cout << "What type of task would you like to create? Enter the corresponding number for the following options follwed by [ENTER]." << endl;
		cout << "1. School Task." << endl;
		cout << "2. Personal Task." << endl;
		cout << "3. Go back to the main menu." << endl;
		cin >> input;
		if (input == "1"){
			cout << "You are creating a school task." << endl;
 		//	task_description();
 		cout << "Create a title for your task follwed by [ENTER]." << endl;
		cin.ignore();		
		getline(cin, task_name);
		cout << "You entered: " << getName() << endl;
		
		}
	}

	else if (input == "2"){
	}
	else if (input == "3"){
	}
	else if (input == "4") {
	}
			
}


