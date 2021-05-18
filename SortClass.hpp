#ifndef __SORTCLASS_HPP__
#define __SORTCLASS_HPP__

#include <Task.hpp>
#include <vector>
#include <string>

using namespace std;

class SortClass {

	public:

		virtual Sort(vector<Task> &vect>, string input) {}

		virtual Filter(vector<Task> &vect, string input) {}
		

}; 

#endif
