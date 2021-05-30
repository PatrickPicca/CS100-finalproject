#ifndef __SCHOOL_TASK_HPP
#define __SCHOOL_TASK_HPP


#include "task.hpp"

class SchoolTask : public Task {


	public: 
		void Add_SchoolTask();
		SchoolTask();
		SchoolTask(string category, string name, string description);
		virtual void EditTask() = 0;
};


#endif



