#ifndef __SORTNAME_HPP__
#define __SORTNAME_HPP__


#include "SortClass.hpp"
#include "Task.hpp"
#include <string>
#include <vector>

class SortName : public SortClass
{

	public:
		virtual void Sort(vector<Task> &vect, string input){

			vector<Task> tempList;

			for (int i = 0; i < vect.size(); i++){
				if (vect[i].getName().find(input) != string::npos)
					tempList.push_back(vect[i]);
			}

			for (int i = 0; i < vect.size(); i++){
				if (vect[i].getName().find(input) == string::npos)
					tempList.push_back(vect[i]);
			}	
			
			vect.clear();
			vect = tempList;
			tempList.clear();
		}

		virtual void Filter(vector<Task> &vect, string input){

			vector<Task> tempList;

			for (int i = 0; i < vect.size(); i++){

				if (vect[i].getName().find(input) != string::npos)
					tempList.push_back(vect[i]);
				
			}			
						
			vect.clear();
			vect = tempList;
			tempList.clear();	
		}


};

#endif
