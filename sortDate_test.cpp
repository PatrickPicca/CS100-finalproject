#ifndef __SORTDATE_TEST_HPP__
#define __SORTDATE_TEST_HPP__

#include "gtest/gtest.h"

#include "SortDate.cpp"
//#include "task.cpp"
#include "task.hpp"
#include <vector>


TEST(dueDateOrder, simpleTestEARLY){ 
  vector<Task> templist;
  
  Task t1 = Task();
  t1.setName("Hist HW");
  t1.setMonth(6);
  t1.setDay(5);
  t1.setYear(2021);
  templist.push_back(t1);

  Task t2 = Task();
  t2.setName("CS HW");
  t2.setMonth(6);
  t2.setDay(20);
  t2.setYear(2021);
  templist.push_back(t2);
  
 // int date = 1;
  
  SortDate sort;
  sort.Sorting(templist); 

  EXPECT_EQ(templist.at(0).getDay(), 5);
}
TEST(dueDateOrder, InvalidTest1EARLY){ // First task empty
  vector<Task> templist;
  
  Task t1 = Task();
  t1.setName("Hist HW");
  t1.setMonth(0);
  t1.setDay(0);
  t1.setYear(0);
  templist.push_back(t1);

  Task t2 = Task();
  t2.setName("CS HW");
  t2.setMonth(6);
  t2.setDay(20);
  t2.setYear(2021);
  templist.push_back(t2);
  
 // date = 1;
  SortDate sort;
  sort.Sorting(templist);

  EXPECT_EQ(templist.at(0).getDay(), 0); 
}

 
TEST(dueDateOrder, InvalidTest2EARLY){ // Second Task empty
  vector<Task> templist;
  
  Task t1 = Task();
  t1.setName("Hist HW");
  t1.setMonth(6);
  t1.setDay(5);
  t1.setYear(2021);
  templist.push_back(t1);

  Task t2 = Task();
  t2.setName("CS HW");
  templist.push_back(t2);
  
 // date = 1;
  SortDate sort;
  sort.Sorting(templist);

  EXPECT_EQ(templist.at(0).getDay(), 5);
}

TEST(dueDateOrder, sameDateLATE){ // with 2 tasks and earliest option
  vector<Task> templist;
  
  Task t1 = Task();
  t1.setName("Hist HW");
  t1.setMonth(6);
  t1.setDay(5);
  t1.setYear(2021);
  templist.push_back(t1);

  Task t2 = Task();
  t2.setName("CS HW");
  t2.setMonth(6);
  t2.setDay(5);
  t2.setYear(2021);
  templist.push_back(t2);
  
 // date = 1;
  SortDate sort;
  sort.Sorting(templist);

  EXPECT_EQ(templist.at(0).getDay(), 5);
}

TEST(dueDateOrder, sameDate2LATE){ // with 3 tasks and latest option
  vector<Task> templist;
  
  Task t1 = Task();
  t1.setName("Hist HW");
  t1.setMonth(6);
  t1.setDay(20);
  t1.setYear(2021);
  templist.push_back(t1);

  Task t2 = Task();
  t2.setName("CS HW");
  t2.setMonth(6);
  t2.setDay(20);
  t2.setYear(2021);
  templist.push_back(t2);
  
  Task t3 = Task();
  t3.setName("Math HW");
  t3.setMonth(6);
  t3.setDay(20);
  t3.setYear(2021);
  templist.push_back(t3);
  
 // date = 2;
  SortDate sort;
  sort.Sorting(templist);
 
  EXPECT_EQ(templist.at(0).getDay(), 20);
}

TEST(dueDateOrder, invalidAllEntryEARLY){  
  vector<Task> templist;
  
  Task t1 = Task();
  t1.setName("Hist HW");
  t1.setMonth(0);
  t1.setDay(0);
  t1.setYear(0000);
 templist.push_back(t1);

  Task t2 =  Task();
  t2.setMonth(0);
  t2.setDay(0);
  t2.setYear(0);
  t2.setName("CS HW");
  templist.push_back(t2);
  
  Task t3 =  Task();
  t3.setMonth(0);
  t3.setDay(0);
  t3.setYear(0);
  t3.setName("Math HW");
  templist.push_back(t3);
  
 // date = 1;

  SortDate sort;
  sort.Sorting(templist);
  EXPECT_EQ(templist.at(0).getDay(), 0);
}


TEST(dueDateOrder, sortEarly){ // 3 tasks with earliest option
  vector<Task> templist;
  
  Task t1 = Task();
  t1.setName("Hist HW");
  t1.setMonth(6);
  t1.setDay(1);
  t1.setYear(2021);
  templist.push_back(t1);

  Task t2 = Task();
  t2.setName("CS HW");
  t2.setMonth(6);
  t2.setDay(2);
  t2.setYear(2021);
  templist.push_back(t2);
  
  Task t3 = Task();
  t3.setName("Math HW");
  t3.setMonth(6);
  t3.setDay(3);
  t3.setYear(2021);
  templist.push_back(t3);
  
 // date = 1;

  SortDate sort;
  sort.Sorting(templist);
  EXPECT_EQ(templist.at(0).getDay(), 1);
}

TEST(dueDateOrder, sortLATE){ // 3 tasks with latest option
  vector<Task> templist;
  
  Task t1 = Task();
  t1.setName("Hist HW");
  t1.setMonth(6);
  t1.setDay(1);
  t1.setYear(2021);
  templist.push_back(t1);

  Task t2 = Task();
  t2.setName("CS HW");
  t2.setMonth(6);
  t2.setDay(2);
  t2.setYear(2021);
  templist.push_back(t2);
  
  Task t3 =  Task();
  t3.setName("Math HW");
  t3.setMonth(6);
  t3.setDay(3);
  t3.setYear(2021);
  templist.push_back(t3);
  
 // date = 2;
  SortDate sort;
  sort.Sorting(templist);

  EXPECT_EQ(templist.at(0).getDay(), 1);
}
#endif
