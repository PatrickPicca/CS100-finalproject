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


 
//void Task::DisplayMenu(){}


