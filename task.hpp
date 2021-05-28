#ifndef __TASK_HPP__
#define __TASK_HPP__



#include <string>
#include <iostream>

using namespace std;


class Task {

	protected:
		string task_name;
		string task_description;
		int day;
		int month;
		int year;
		int priority;
	public:
		Task();
		//string task_description();
		void DisplayTask();
		void SaveTask();
		//void DisplayMenu();		
		void setName(string n);
		void setDay(int d);
		void setMonth(int m);
		void setYear(int y);
		void setPriority(int p);
		void setDescription(string d);
		string getDescription();
		string getName();
		int getDay();
		int getMonth();
		int getYear();
		int getPriority();
};

#endif //__TASK_HPP__










