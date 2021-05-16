#include "SortClass.hpp"
#include "Task.hpp"

class SortCategory : public SortClass
{

	public:
		virtual Filter(vector<Task> &vect, string category){
		

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
		virtual Sort(vector<Task> #vect, string category){
			
			vector<Task> tempList;

			for (int i = 0; i < vect.size(); i++){
				if (vect[i].getCategory == category)
					tempList.push_back(vect[i]);
			}			
						
			vect.clear();
			vect = tempList;	
			tempList.clear();
		}

}

#endif
