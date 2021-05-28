#ifndef __SORTCLASS_HPP__
#define __SORTCLASS_HPP__

#include "task.hpp"
#include <vector>
#include <string>

using namespace std;

class SortClass {

	public:

		virtual void Sort(vector<Task> &vect, string input) = 0;

		virtual void Filter(vector<Task> &vect, string input) = 0;
		

}; 

#endif
