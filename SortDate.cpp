#ifndef __SORTDATE_HPP__
#define __SORTDATE_HPP__

#include "SortClass.hpp"
#include "Task.hpp"
#include <vector>

class SortDate : public SortClass
{

	public:
		virtual Sort(vector<Tasl> &vect, string date){
			

			vector<Task> tempList;

			for (int i = 0; i < vect.size(); i++){
				if (vect[i].getDate == date)
					tempList.push_back(vect[i]);
			}			

			for (int i = 0; i < vect.size(); i++){
				if (vect[i].getPriority != priority)
					tempList.push_back(vect[i]);
			}
						
			vect.clear();
			vect = tempList;
			tempList.clear();

		}

		virtual Filter(vector<Tasl> &vect, string date){
			

			vector<Task> tempList;

			for (int i = 0; i < vect.size(); i++){
				if (vect[i].getDate == date)
					tempList.push_back(vect[i]);
			}			
						
			vect.clear();
			vect = tempList;
			tempList.clear();
			
		}

}

#endif
