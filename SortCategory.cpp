#ifndef __SORTCATEGORY_HPP__
#define __SORTCATEGORY_HPP__

#include "SortClass.hpp"
//#include "task.hpp"
#include <vector>
//#include "task.cpp"

class SortCategory : public SortClass
{

	public:
		virtual void Filter(vector<Task> &vect){
		
			string category;
			vector<Task> tempList;

			for (int i = 0; i < vect.size(); i++){
				if (vect[i].getCategory == category)
					tempList.push_back(vect[i]);
			}			

			for (int i = 0; i < vect.size(); i++){
				if (vect[i].getCategory != category)
					tempList.push_back(vect[i]);
			}
						
			vect.clear();
			vect = tempList;
			tempList.clear();
		}
		virtual void  Sorting(vector<Task> &vect){
		
			string category;	
			vector<Task> tempList;

			for (int i = 0; i < vect.size(); i++){
				if (vect[i].getCategory == category)
					tempList.push_back(vect[i]);
			}			
						
			vect.clear();
			vect = tempList;	
			tempList.clear();
		}

};

#endif
