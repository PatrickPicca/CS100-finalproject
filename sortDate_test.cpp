#ifndef __SORTDATE_HPP__
#define __SORTDATE_HPP__
#include "gtest/gtest.h"
#include "SortClass.hpp"
#include "Task.hpp"
#include <vector>


TEST(dueDateOrder, simpleTest){ 
  vector<Task> templist;
  
  Task* t1 = new Task();
  t1->setName("Hist HW");
  t1->setMonth(6);
  t1->setDay(5);
  t1-setYear(2021);
  templist.pushback(t1);

  Task* t2 = new Task();
  t2->setName("CS HW");
  t2->setMonth(6);
  t2->setDay(20);
  t2-setYear(2021);
  templist.pushback(t2);
  
  date = 1;
  
  EXPECT_EQ(getDay(Sorting(templist,date)), "5") 
}

TEST(dueDateOrder, InvalidTest1){ // First task empty
  vector<Task> templist;
  
  Task* t1 = new Task();
  t1->setName("Hist HW");
  templist.pushback(t1);

  Task* t2 = new Task();
  t2->setName("CS HW");
  t2->setMonth(6);
  t2->setDay(20);
  t2-setYear(2021);
  templist.pushback(t2);
  
  date = 1;
  
  EXPECT_EQ(getDay(Sorting(templist,date)), "20") 
}

 
TEST(dueDateOrder, InvalidTest2){ // Second Task empty
  vector<Task> templist;
  
  Task* t1 = new Task();
  t1->setName("Hist HW");
  t1->setMonth(6);
  t1->setDay(5);
  t1-setYear(2021);
  templist.pushback(t1);

  Task* t2 = new Task();
  t2->setName("CS HW");
  templist.pushback(t2);
  
  date = 1;
  EXPECT_EQ(getDay(Sorting(templist,date)), "5") 
}

TEST(dueDateOrder, sameDate){ // with 2 tasks and earliest option
  vector<Task> templist;
  
  Task* t1 = new Task();
  t1->setName("Hist HW");
  t1->setMonth(6);
  t1->setDay(5);
  t1-setYear(2021);
  templist.pushback(t1);

  Task* t2 = new Task();
  t2->setName("CS HW");
  t2->setMonth(6);
  t2->setDay(5);
  t2-setYear(2021);
  templist.pushback(t2);
  
  date = 1;
  
  EXPECT_EQ(getDay(Sorting(templist,date)), "5") 
}

TEST(dueDateOrder, sameDate2){ // with 3 tasks and latest option
  vector<Task> templist;
  
  Task* t1 = new Task();
  t1->setName("Hist HW");
  t1->setMonth(6);
  t1->setDay(20);
  t1-setYear(2021);
  templist.pushback(t1);

  Task* t2 = new Task();
  t2->setName("CS HW");
  t2->setMonth(6);
  t2->setDay(20);
  t2-setYear(2021);
  templist.pushback(t2);
  
  Task* t3 = new Task();
  t3->setName("Math HW");
  t3->setMonth(6);
  t3->setDay(20);
  t3-setYear(2021);
  templist.pushback(t3);
  
  date = 2;
  
  EXPECT_EQ(getDay(Sorting(templist,date)), "20") 
}

TEST(dueDateOrder, noEntry){  
  vector<Task> templist;
  
  Task* t1 = new Task();
  t1->setName("Hist HW");
  templist.pushback(t1);

  Task* t2 = new Task();
  t2->setName("CS HW");
  templist.pushback(t2);
  
  Task* t3 = new Task();
  t3->setName("Math HW");
  templist.pushback(t3);
  
  date = 1;
  
  EXPECT_EQ(getDay(Sorting(templist,date)), "") 
}


TEST(dueDateOrder, sortEarliest){ // 3 tasks with earliest option
  vector<Task> templist;
  
  Task* t1 = new Task();
  t1->setName("Hist HW");
  t1->setMonth(6);
  t1->setDay(1);
  t1-setYear(2021);
  templist.pushback(t1);

  Task* t2 = new Task();
  t2->setName("CS HW");
  t2->setMonth(6);
  t2->setDay(2);
  t2-setYear(2021);
  templist.pushback(t2);
  
  Task* t3 = new Task();
  t3->setName("Math HW");
  t3->setMonth(6);
  t3->setDay(3);
  t3-setYear(2021);
  templist.pushback(t3);
  
  date = 1;
  
  EXPECT_EQ(getDay(Sorting(templist,date)), "1") 
}

TEST(dueDateOrder, sortLatest){ // 3 tasks with latest option
  vector<Task> templist;
  
  Task* t1 = new Task();
  t1->setName("Hist HW");
  t1->setMonth(6);
  t1->setDay(1);
  t1-setYear(2021);
  templist.pushback(t1);

  Task* t2 = new Task();
  t2->setName("CS HW");
  t2->setMonth(6);
  t2->setDay(2);
  t2-setYear(2021);
  templist.pushback(t2);
  
  Task* t3 = new Task();
  t3->setName("Math HW");
  t3->setMonth(6);
  t3->setDay(3);
  t3-setYear(2021);
  templist.pushback(t3);
  
  date = 2;
  
  EXPECT_EQ(getDay(Sorting(templist,date)), "3") 
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

#endif
