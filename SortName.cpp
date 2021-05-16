#include "SortClass.hpp"
#include "Task.hpp"
#include <string>


class SortName : public SortClass
{

	public:
		virtual Sort(vector<Task> &vect, string input){

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

		virtual Filter(vector<Task> &vect, string input){

			vector<Task> tempList;

			for (int i = 0; i < vect.size(); i++){

				if (vect[i].getName().find(input) != string::npos)
					tempList.push_back(vect[i]);
				
			}			
						
			vect.clear();
			vect = tempList;
			tempList.clear();	
		}


}

#endif
