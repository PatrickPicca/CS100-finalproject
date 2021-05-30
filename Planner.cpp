#ifndef __PLANNER_CPP__
#define __PLANNER_CPP__

#include "task.hpp"
#include "school_task.hpp"
#include "personal_task.hpp"
#include <iostream>
#include <string.h>
#include <vector>
#include <sstream>
#include <fstream>
#include <string>
#include "SortClass.hpp"

using namespace std;

class Planner
{

	private: 
		vector<Task> SortSet;
		vector<Task> FilterSet;
		bool CurrentSet;
	
	public:

	
	Planner()
	{
		CurrentSet = true;
	}
	Planner(vector<Task> vect)
	{
		SortSet = vect;
		FilterSet = vect;
		CurrentSet = true;
	}
	
	void Filter_Tasks(string input){
		CurrentSet = false;
	}
	void Sort_Tasks(string input){
		CurrentSet = true;	
	}
	void ResetFilter(){
		CurrentSet = true;
		FilterSet.clear();
		FilterSet = SortSet;
	}
	void ClosePlanner(){
		cout << "Closing program. Have a good day!" << endl;
	}
	void Display_Planner(){
		//cout << "The size of SortSet is: " << SortSet.size() << endl;
		if (CurrentSet == true){
			int i = 0;
			if (SortSet.size() != 0 ){
				while (i < SortSet.size()){	
					cout << "Task Name: " << SortSet.at(i).getName() << endl;	
					cout << "Task Category: " << SortSet.at(i).getCategory() << endl;
					cout << "Description: " << SortSet.at(i).getDescription() << endl;	
					cout << endl;
					i++;
				}
			}
			else
				cout << "You currently do not have any tasks!" << endl;
		}
		//Display SortSet code
		//else if (CurrenSet == false)
			//Display filterSet code
	}
	void Save_Task(){
		
	}
	void Read_From_File(){
		ifstream infile;
		infile.open("Tasks.txt");
		if (!infile){		
			ofstream outFile;
			outFile.open("Tasks.txt");
			outFile.close();
			Read_From_File();
		}
		else{
			int i = 0;
			SortSet.clear();
			while(!infile.eof()) {
				string name, description, category;
				getline(infile, category, '\n');	
				getline(infile, name, '\n');	
				getline(infile, description, '\n');
			
				string skip;	
				getline(infile, skip);
	
				if (category == "School")
				{
				
					SortSet.push_back(SchoolTask((string)category, (string)name, description));
				}
				else if(category == "Personal")
				{					
					SortSet.push_back(PersonalTask(category, name, description));					
				}
				else{
					//cout << "In else" << endl;
					getline(infile, skip);
					getline(infile, skip);
				}
				i++;				
			}
			//cout << "Finished Obtaining Tasks!!" << endl;
			infile.close();
		}	
	}
	void Write_To_File(){
		ofstream outFile;
		outFile.open("Tasks.txt");
		int i = 0;
		int size = SortSet.size();
		while (i < SortSet.size()){
			outFile << SortSet.at(i).getCategory() << "\n" << SortSet.at(i).getName() << "\n" << SortSet.at(i).getDescription() << "\n" << endl;
			i++;
		}
		cout << "Finished Saving Tasks!!" << endl;
		outFile.close();
	}
	void DisplayMenu(){
		Read_From_File();
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
				SchoolTask theTask;
				theTask.Add_SchoolTask();
				SortSet.push_back(theTask);
				Write_To_File();
						
			}
			else if (input == "2"){
				PersonalTask theTask;
				theTask.Add_PersonalTask();
				SortSet.push_back(theTask);	
				Write_To_File();
				//Read_From_File();		
			}
			else if (input == "3"){
				DisplayMenu();
			}
			else {
				cout << "Invalid Input! Try again!" << endl;
				DisplayMenu();
			}
			cout << "Returning to main menu..." << endl;
			DisplayMenu();	
		}
		else if (input == "2"){
			Display_Planner();
			DisplayMenu();
		}
		else if (input == "3"){
			cout << "Please enter a number for which task you want to delete: ";
			cin >> input;
			int tasknumber = (stoi(input))-1;
			cout << SortSet.at(tasknumber).getName() << endl;
			vector<Task>::iterator it;
			it = SortSet.begin()+tasknumber;	
			SortSet.erase(it);
			cout << "here" << endl;
			Write_To_File();
			DisplayMenu();
		}
		else if (input == "4") {
			
			cout << "Please enter a number for which task you want to edit:";
			cin >> input;
			cout << endl;
			int tasknumber = stoi(input)-1;
			SortSet.at(tasknumber).EditTask();
			Write_To_File();
			DisplayMenu();
		}
		else if (input == "5"){
			exit(0);
		}
		else {
			cout << "Invalid Input! Try again." << endl;
			DisplayMenu();
		}
	}

};

#endif

