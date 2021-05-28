#ifndef __SORTPRIORITY_HPP__
#define __SORTPRIORITY_HPP__

#include "SortClass.hpp"
#include "task.hpp"
#include <vector>


class SortPriority : public SortClass 
{

	public:
		virtual Sort(vector<Task> &vect, string input){

			vector<Task> tempList;

			if (input == "3"){
				for (int i = 0; i < vect.size(); i++){	
					if (vect[i].getPriority() == 3)  //Highest Priority
						tempList.push_back(vect[i]);
				}
	
				for (int i = 0; i < vect.size(); i++){
					if (vect[i].getPriority() == 2)	//Second Priority
						tempList.push_back(vect[i]);
				}
				
				for (int i = 0; i < vect.size(); i++){
					if (vect[i].getPriority() == 1)
						tempList.push_back(vect[i]);
				} 

				for (int i = 0; i < vect.size(); i++){
					if (vect[i].getPriority() == 0)
						tempList.push_back(vect[i]);
				}
			}
			if (input == "2"){
				for (int i = 0; i < vect.size(); i++){
					if (vect[i].getPriority() == 2)
						tempList.push_back(vect[i]);
				}
				for (int i = 0; i < vect.size(); i++){
					if (vect[i].getPriority() == 3)
						tempList.push_back(vect[i]);
				}
				for (int i = 0; i < vect.size(); i++){
					if (vect[i].getPriority() == 1)
						tempList.push_back(vect[i]);
				}
				for (int i = 0; i < vect.size(); i++){
					if (vect[i].getPriority() == 0)
						tempList.push_back(vect[i]);
				}
			}
			if (input == "1"){
				for (int i = 0; i < vect.size(); i++){
					if (vect[i].getPriority() == 1)
						tempList.push_back(vect[i]);
				}
				for (int i = 0; i < vect.size(); i++){
					if (vect[i].getPriority() == 3)
						tempList.push_back(vect[i]);
				}
				for (int i = 0; i < vect.size(); i++){
					if (vect[i].getPriority() == 2)
						tempList.push_back(vect[i]);
				}
				for (int i = 0; i < vect.size(); i++){
					if (vect[i].getPriority() == 0)
						tempList.push_back(vect[i]);
				}
			}
			if (input == "0"){
				for (int i = 0; i < vect.size(); i++){
					if (vect[i].getPriority() == 0)
						tempList.push_back(vect[i]);
				}
				for (int i = 0; i < vect.size(); i++){
					if (vect[i].getPriority() == 3)
						tempList.push_back(vect[i]);
				}
				for (int i = 0; i < vect.size(); i++){
					if (vect[i].getPriority() == 2)
						tempList.push_back(vect[i]);
				}
				for (int i = 0; i < vect.size(); i++){
					if (vect[i].getPriority() == 1)
						tempList.push_back(vect[i]);
				}
			}
			vect.clear();
			vect = tempList;

		}

		virtual Filter(vector<Task> &vect, string input){
			
			vector<Task> tempList;

			for (int i = 0; i < vect.size(); i++){
				if (vect[i].getPriority == input)
					tempList.push_back(vect[i]);
			}			
						
			vect.clear();
			vect = tempList;
		}



}

#endif



