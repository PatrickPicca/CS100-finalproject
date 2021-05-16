#include "Task.cpp"
#include <iostream>
#include <string.h>
#include <vector>
#include "SortClass.hpp"

class Planner
{

	private std::vector <std::Task> SortSet;
	private std::vector <std::Task> FilterSet;
	
	private boolean CurrentSet;


	Planner()
	{
		SortSet = nullptr;
		FilterSet = nullptr;
		CurrentSet = true;
	}
	Planner(vector<Task> vect)
	{
		SortSet = vect;
		FilterSet = vect;
		CurrentSet = true;
	}
	
	void Filter_Tasks(FilterSet, string input){
		CurrentSet = false;
	}
	void Sort_Tasks(SortSet, string input){
		CurrentSet = true;	
	}
	void ResetFilter(){
		CurrentSet = true;
		FilterSet.clear();
		FilterSet = SortSet;
	}
	void ClosePlanner(){

	}
	void Display_Planner(){
		if (CurrentSet == true)
			//Display SortSet code
		else if (CurrenSet == false)
			//Display filterSet code
	}
	void Save_Task(){
		
	}

}

#endif

