#ifndef __SORTCATEGORY_HPP__
#define __SORTCATEGORY_HPP__

#include "SortClass.hpp"
//#include "task.hpp"
#include <vector>
//#include "task.cpp"

class SortCategory : public SortClass
{

	public:
		virtual void Sorting(vector<Task> &vect){
	
			std::cout << "How do you wish to sort your tasks by?" << endl;
			std::cout << "1. School tasks" << endl;
			std::cout << "2. Personal tasks" << endl;
				
			string category;

			std::cin >> category;
			vector<Task> tempList;
			vector<Task> temp2;

			if (category == "1")
			{
				for (int i = 0; i < vect.size(); i++){
					if(vect[i].getCategory() == "School")
						tempList.push_back(vect[i]);
					else  
						temp2.push_back(vect[i]);
				}
				for (int i = 0; i < temp2.size(); i++)
					tempList.push_back(temp2[i]);
			}
			else if (category == "2")
			{
				for (int i = 0; i < vect.size(); i++){
					if(vect[i].getCategory() == "Personal")
						tempList.push_back(vect[i]);
					else
						temp2.push_back(vect[i]);
				}
				for (int i = 0; i < temp2.size(); i++)
					tempList.push_back(temp2[i]);
			}
			else{
				std::cout << "Invalid input!" << endl;
				Filter(vect);
			}	
						
			vect.clear();
			vect = tempList;
			tempList.clear();
			temp2.clear();
		}
		virtual void  Filter(vector<Task> &vect){
		
			string category;	
			vector<Task> tempList;

			for (int i = 0; i < vect.size(); i++){
				if (vect[i].getCategory() == category)
					tempList.push_back(vect[i]);
			}			
						
			vect.clear();
			vect = tempList;	
			tempList.clear();
		}

};

#endif
