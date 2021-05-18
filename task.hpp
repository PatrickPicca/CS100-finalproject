#ifndef __TASK_HPP__
#define __TASK_HPP__



#include <string>
#include <iostream>

using namespace std;


class Task {

	protected:
		string task_name;
		int day;
		int month;
		int year;
		int priority;
	public:
		Task();
		string task_description();
		void DisplayTask();
		void SaveTask();
		void DisplayMenu();		

};

#endif //__TASK_HPP__










