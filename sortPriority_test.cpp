#include "SortClass.hpp"
#include "task.hpp"
#include <vector>
#include <string>
#include <cstring>
#include "gtest/gtest.h"


TEST(priorityOrder, simpleTest){ 
  vector<Task> templist;
  
  Task* t1 = new Task();
  t1->setName("Hist HW");
  t1->setPriority(3);
  t1->setMonth(6);
  t1->setDay(5);
  t1-setYear(2021);
  templist.pushback(t1);

  Task* t2 = new Task();
  t2->setName("CS HW");
  t2->setPriority(2);
  t2->setMonth(6);
  t2->setDay(20);
  t2-setYear(2021);
  templist.pushback(t2);
  
  input = 3;
  
  EXPECT_EQ(getName(Sorting(templist), "Hist HW");
  EXPECT_EQ(getPriority(Sorting(templist), "3");
}

TEST(priorityOrder, InvalidTest1){ // First task empty
  vector<Task> templist;
  
  Task* t1 = new Task();
  t1->setName("Hist HW");
  t1->setMonth(6);
  t1->setDay(5);
  t1-setYear(2021);
  templist.pushback(t1);

  Task* t2 = new Task();
  t2->setName("CS HW");
  t2->setPriority(2);
  t2->setMonth(6);
  t2->setDay(20);
  t2-setYear(2021);
  templist.pushback(t2);
  
  input = 3;
  
  EXPECT_EQ(getName(Sorting(templist), "CS HW");
  EXPECT_EQ(getPriority(Sorting(templist), "2");
}

 
TEST(priorityOrder, InvalidTest2){ // Second Task empty
  vector<Task> templist;
  
  Task* t1 = new Task();
  t1->setName("Hist HW");
  t1->setPriority(1);
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
  
  input = 3;
  
  EXPECT_EQ(getName(Sorting(templist), "Hist HW");
  EXPECT_EQ(getPriority(Sorting(templist), "1");
}

TEST(priorityOrder, samePriority1){ 
  vector<Task> templist;
  
  Task* t1 = new Task();
  t1->setName("Hist HW");
  t1->setPriority(1);
  t1->setMonth(6);
  t1->setDay(5);
  t1-setYear(2021);
  templist.pushback(t1);

  Task* t2 = new Task();
  t2->setName("CS HW");
  t2->setPriority(1);
  t2->setMonth(6);
  t2->setDay(5);
  t2-setYear(2021);
  templist.pushback(t2);
  
  input = 1;
  
  
  EXPECT_EQ(getName(Sorting(templist), "Hist HW"); // since first task, priority matches
  EXPECT_EQ(getPriority(Sorting(templist), "1");
}

TEST(priorityOrder, samePriority2){ 
  vector<Task> templist;
  
  Task* t1 = new Task();
  t1->setName("Hist HW");
  t1->setPriority(3);
  t1->setMonth(6);
  t1->setDay(20);
  t1-setYear(2021);
  templist.pushback(t1);

  Task* t2 = new Task();
  t2->setName("CS HW");
  t2->setPriority(3);
  t2->setMonth(6);
  t2->setDay(20);
  t2-setYear(2021);
  templist.pushback(t2);
  
  Task* t3 = new Task();
  t3->setName("Math HW");
  t3->setPriority(3);
  t3->setMonth(6);
  t3->setDay(20);
  t3-setYear(2021);
  templist.pushback(t3);
  
  input = 1;
  
  
  EXPECT_EQ(getName(Sorting(templist), "Hist HW"); //priority doesn't match
  EXPECT_EQ(getPriority(Sorting(templist), "3");
}

TEST(priorityOrder, noEntry){  
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
  
  input = 3;
  
  
  EXPECT_EQ(getName(Sorting(templist), "");
  EXPECT_EQ(getPriority(Sorting(templist), "");
}


TEST(priorityOrder, sortPriority1{ 
  vector<Task> templist;
  
  Task* t1 = new Task();
  t1->setName("Hist HW");
  t1->setPriority(1);
  t1->setMonth(6);
  t1->setDay(1);
  t1-setYear(2021);
  templist.pushback(t1);

  Task* t2 = new Task();
  t2->setName("CS HW");
  t2->setPriority(2);
  t2->setMonth(6);
  t2->setDay(2);
  t2-setYear(2021);
  templist.pushback(t2);
  
  Task* t3 = new Task();
  t3->setName("Math HW");
  t3->setPriority(3);
  t3->setMonth(6);
  t3->setDay(3);
  t3-setYear(2021);
  templist.pushback(t3);
  
  input = 3;
  
  
  EXPECT_EQ(getName(Sorting(templist), "Math HW");
  EXPECT_EQ(getPriority(Sorting(templist), "3");
}

TEST(priorityOrder, sortPriority2){ // 3 tasks with latest option
  vector<Task> templist;
  
  Task* t1 = new Task();
  t1->setName("Hist HW");
  t1->setPriority(3);
  t1->setMonth(6);
  t1->setDay(1);
  t1-setYear(2021);
  templist.pushback(t1);

  Task* t2 = new Task();
  t2->setName("CS HW");
  t2->setPriority(2);
  t2->setMonth(6);
  t2->setDay(2);
  t2-setYear(2021);
  templist.pushback(t2);
  
  Task* t3 = new Task();
  t3->setName("Math HW");
  t3->setPriority(2);
  t3->setMonth(6);
  t3->setDay(3);
  t3-setYear(2021);
  templist.pushback(t3);
  
  input = 1;
  
  EXPECT_EQ(getName(Sorting(templist), "Hist HW");
  EXPECT_EQ(getPriority(Sorting(templist), "3");
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}


