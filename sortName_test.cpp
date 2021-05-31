#ifndef __SORTNAME_HPP__
#define __SORTNAME_HPP__
#include "SortClass.hpp"
#include "task.hpp"
#include <string>
#include <vector>
#include "gtest/gtest.h"


TEST(nameOrder, simpleTest){ 
  vector<Task> templist;
  
  Task* t1 = new Task();
  t1->setName("Bio HW");
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
  
  EXPECT_EQ(getName(Sorting(templist), "Bio HW");
}

TEST(nameOrder, InvalidTest1){ // First task empty
  vector<Task> templist;
  
  Task* t1 = new Task();
  t1->setName("");
  templist.pushback(t1);

  Task* t2 = new Task();
  t2->setName("CS HW");
  t2->setMonth(6);
  t2->setDay(20);
  t2-setYear(2021);
  templist.pushback(t2);
  
  EXPECT_EQ(getName(Sorting(templist), "CS HW");
}

 
TEST(nameOrder, InvalidTest2){ // Second Task empty
  vector<Task> templist;
  
  Task* t1 = new Task();
  t1->setName("Zoology HW");
  t1->setMonth(6);
  t1->setDay(5);
  t1-setYear(2021);
  templist.pushback(t1);

  Task* t2 = new Task();
  t2->setName("");
  templist.pushback(t2);
  
  EXPECT_EQ(getName(Sorting(templist), "Zoology HW");
}

TEST(nameOrder, sameName){ 
  vector<Task> templist;
  
  Task* t1 = new Task();
  t1->setName("CS HW");
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
  
  EXPECT_EQ(getDay(Sorting(templist), "5"); //first task inputted 
  EXPECT_EQ(getName(Sorting(templist), "Zoology HW");
       
}

TEST(nameOrder, sameName2){ 
  vector<Task> templist;
  
  Task* t1 = new Task();
  t1->setName("ENG HW");
  t1->setMonth(6);
  t1->setDay(20);
  t1-setYear(2021);
  templist.pushback(t1);

  Task* t2 = new Task();
  t2->setName("ENG HW");
  t2->setMonth(6);
  t2->setDay(21);
  t2-setYear(2021);
  templist.pushback(t2);
  
  Task* t3 = new Task();
  t3->setName("ENG HW");
  t3->setMonth(6);
  t3->setDay(2);
  t3-setYear(2021);
  templist.pushback(t3);
  
  EXPECT_EQ(getDay(Sorting(templist), "20");
  EXPECT_EQ(getName(Sorting(templist), "ENG HW");
}

TEST(nameOrder, noEntry){  
  vector<Task> templist;
  
  Task* t1 = new Task();
  t1->setName("");
  templist.pushback(t1);

  Task* t2 = new Task();
  t2->setName("");
  templist.pushback(t2);
  
  Task* t3 = new Task();
  t3->setName("");
  templist.pushback(t3);
  
  EXPECT_EQ(getName(Sorting(templist), "");
}


TEST(nameOrder, sortNames1){ 
  vector<Task> templist;
  
  Task* t1 = new Task();
  t1->setName("Hist HW");
  t1->setMonth(6);
  t1->setDay(1);
  t1-setYear(2021);
  templist.pushback(t1);

  Task* t2 = new Task();
  t2->setName("Aero HW");
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
  
  EXPECT_EQ(getName(Sorting(templist), "Aero HW");
}

TEST(nameOrder, sortNames2){ 
  vector<Task> templist;
  
  Task* t1 = new Task();
  t1->setName("Astrology HW);
  t1->setMonth(6);
  t1->setDay(1);
  t1-setYear(2021);
  templist.pushback(t1);

  Task* t2 = new Task();
  t2->setName("Accounting HW);
  t2->setMonth(6);
  t2->setDay(2);
  t2-setYear(2021);
  templist.pushback(t2);
  
  Task* t3 = new Task();
  t3->setName("Aerospace HW");
  t3->setMonth(6);
  t3->setDay(3);
  t3-setYear(2021);
  templist.pushback(t3);
  
  EXPECT_EQ(getName(Sorting(templist), "Accounting HW");
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

#endif
