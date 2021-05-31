#ifndef __SORTNAME_HPP__
#define __SORTNAME_HPP__


#include "SortClass.hpp"
#include "task.hpp"
#include <string>
#include <vector>
#include <cstring>
#include <cctype>


class SortName : public SortClass
{

	public:
		virtual void Sorting(vector<Task> &vect){


			string input;
			vector<Task> other = vect;
			vector<Task> tempList;
			bool first = true;
			string xvalue;
			string yvalue;
			int g;

			int n = vect.size();
			int j;
			int i;
			Task temp;
			
			for (i = 0; i < n; i++){
				for (j = i +1; j < n; j++){
					
					if (isupper(other.at(i).getName().at(0)) && isupper(other.at(j).getName().at(0))){
						if ((other.at(i).getName().at(0)+32) > (other.at(j).getName().at(0)+32)){
							temp = other.at(i);
						
							other.insert(other.begin()+i,other.at(j));
							other.erase(other.begin()+i+1);
						
							other.insert(other.begin()+j, temp);
							other.erase(other.begin()+j+1);
						} 	
					}
					else if(!isupper(other.at(i).getName().at(0)) && isupper(other.at(i).getName().at(0))){

					}
					else if(isupper(other.at(i).getName().at(0)) && !isupper(other.at(i).getName().at(0))){

					}
					else{

					}
				}
			}
			
								
		
			
			vect.clear();
			vect = tempList;
			tempList.clear();
		}

		virtual void Filter(vector<Task> &vect){
			
			string input;
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
