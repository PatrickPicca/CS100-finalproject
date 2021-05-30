#ifndef __SORTDATE_HPP__
#define __SORTDATE_HPP__

#include "SortClass.hpp"
#include "task.hpp"
#include <vector>

class SortDate : public SortClass
{

	public:
		virtual void Sorting(vector<Task> &vect){
			
			string date;
			vector<Task> tempList;

			std::cout << "How do you wish to sort by date?" << endl;
			std::cout << "1. Sort by earliest tasks." << endl;
			std::cout << "2. Sort by latest tasks." << endl;

			std::cin >> date;

			if (date == "1"){
				int x = vect.size();
				bool firsttime = true;
				for (int i = 0; i < vect.size(); i++)
				{
					if (firsttime == true){
						tempList.push_back(vect[i]);
						firsttime == false;
					}	
					else{	
						if (vect[i].getYear() < tempList.at(0).getYear()){
							tempList.insert(tempList.begin(), vect[i]);
						}					
					//	else if (vect[i].getYear() > tempList.at(tempList.size()-1){
					//		tempList.inset(
					//	}


					}
				}

			}
			else if (date == "2"){
		

			}
			else{

		
			}

			for (int i = 0; i < vect.size(); i++){
			//	if (vect[i].getDate() == date)
					tempList.push_back(vect[i]);
			}			

			for (int i = 0; i < vect.size(); i++){
			//	if (vect[i].getDate() != priority)
					tempList.push_back(vect[i]);
			}
						
			vect.clear();
			vect = tempList;
			tempList.clear();

		}

		virtual void Filter(vector<Task> &vect){
			
			string date;
			vector<Task> tempList;

			for (int i = 0; i < vect.size(); i++){
		//		if (vect[i].getDate() == date)
					tempList.push_back(vect[i]);
			}			
						
			vect.clear();
			vect = tempList;
			tempList.clear();
			
		}

};

#endif
