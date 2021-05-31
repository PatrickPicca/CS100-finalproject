#include "gtest/gtest.h"
#include "SortClass.hpp"
#include "task.hpp"
#include <vector>


TEST(categoryOrder, simpleTest){ 
  vector<Task> templist;
  
  Task* t1 = new Task();
  t1->setName("Hist HW");
  t1->setCategory("School");
  t1->setMonth(6);
  t1->setDay(5);
  t1-setYear(2021);
  templist.pushback(t1);

  Task* t2 = new Task();
  t2->setName("CS HW");
  t2->setCategory("Personal");
  t2->setMonth(6);
  t2->setDay(20);
  t2-setYear(2021);
  templist.pushback(t2);
  
  category = 1; 
  
  EXPECT_EQ(getDay(Sorting(templist), "5");  // should return 5 since sorted by school
  EXPECT_EQ(getCategory(Sorting(templist), "School"); 
}

TEST(categoryOrder, invalidTest){  // First task no category entry
  vector<Task> templist;
  
  Task* t1 = new Task();
  t1->setName("Hist HW");
  t1->setMonth(6);
  t1->setDay(5);
  t1-setYear(2021);
  templist.pushback(t1);

  Task* t2 = new Task();
  t2->setName("CS HW");
  t2->setCategory("Personal");
  t2->setMonth(6);
  t2->setDay(20);
  t2-setYear(2021);
  templist.pushback(t2);
  
  category = 2; 
  
  EXPECT_EQ(getDay(Sorting(templist), "20");  
  EXPECT_EQ(getCategory(Sorting(templist), "Personal"); 
 }
            
TEST(categoryOrder, InvalidTest2){ // Second Task no category entry
  vector<Task> templist;
  
  Task* t1 = new Task();
  t1->setName("Hist HW");
  t1->setCategory("School");
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
  
  category = 1;
  
  EXPECT_EQ(getDay(Sorting(templist), "5"); 
  EXPECT_EQ(getCategory(Sorting(templist), "School"); 
}

TEST(categoryOrder, sameCategory){ 
  vector<Task> templist;
  
  Task* t1 = new Task();
  t1->setName("Hist HW");
  t1->setCategory("School");
  t1->setMonth(6);
  t1->setDay(5);
  t1-setYear(2021);
  templist.pushback(t1);

  Task* t2 = new Task();
  t2->setName("CS HW");
  t2->setCategory("School");
  t2->setMonth(6);
  t2->setDay(20);
  t2-setYear(2021);
  templist.pushback(t2);
  
  category = 1;
  
  EXPECT_EQ(getDay(Sorting(templist), "5"); 
  EXPECT_EQ(getCategory(Sorting(templist), "School"); 
}

TEST(categoryOrder, sameCategory2){ // with 3 tasks and latest option
  vector<Task> templist;
  
  Task* t1 = new Task();
  t1->setName("Hist HW");
  t1->setCategory("Personal");
  t1->setMonth(6);
  t1->setDay(20);
  t1-setYear(2021);
  templist.pushback(t1);

  Task* t2 = new Task();
  t2->setName("CS HW");
  t2->setCategory("Personal");
  t2->setMonth(6);
  t2->setDay(2);
  t2-setYear(2021);
  templist.pushback(t2);
  
  Task* t3 = new Task();
  t3->setName("Math HW");
  t3->setCategory("Personal");
  t3->setMonth(6);
  t3->setDay(1);
  t3-setYear(2021);
  templist.pushback(t3);
  
  category = 2;
  
  EXPECT_EQ(getDay(Sorting(templist), "20"); // when same, first task 
  EXPECT_EQ(getCategory(Sorting(templist), "Personal"); 
}

TEST(categoryorder, noEntry){  
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
  
  category = 1;
  
  EXPECT_EQ(getDay(Sorting(templist), ""); 
  EXPECT_EQ(getCategory(Sorting(templist), ""); 
}


TEST(categoryOrder, sortPersonal){ 
  vector<Task> templist;
  
  Task* t1 = new Task();
  t1->setName("Hist HW");
  t1->setCategory("School");
  t1->setMonth(6);
  t1->setDay(1);
  t1-setYear(2021);
  templist.pushback(t1);

  Task* t2 = new Task();
  t2->setName("CS HW");
  t2->setCategory("School");
  t2->setMonth(6);
  t2->setDay(2);
  t2-setYear(2021);
  templist.pushback(t2);
  
  Task* t3 = new Task();
  t3->setName("Math HW");
  t3->setCategory("Personal");
  t3->setMonth(6);
  t3->setDay(3);
  t3-setYear(2021);
  templist.pushback(t3);
  
  category = 2;
  
  EXPECT_EQ(getDay(Sorting(templist), "3");
  EXPECT_EQ(getCategory(Sorting(templist), "Personal"); 
}

TEST(categoryOrder, sortSchool){ 
  vector<Task> templist;
  
  Task* t1 = new Task();
  t1->setName("Hist HW");
  t1->setCategory("School");
  t1->setMonth(6);
  t1->setDay(10);
  t1-setYear(2021);
  templist.pushback(t1);

  Task* t2 = new Task();
  t2->setName("CS HW");
  t2->setCategory("Personal");
  t2->setMonth(6);
  t2->setDay(2);
  t2-setYear(2021);
  templist.pushback(t2);
  
  Task* t3 = new Task();
  t3->setName("Math HW");
  t3->setCategory("Personal");
  t3->setMonth(6);
  t3->setDay(3);
  t3-setYear(2021);
  templist.pushback(t3);
  
  category = 1;
  
  EXPECT_EQ(getDay(Sorting(templist), "10");
  EXPECT_EQ(getCategory(Sorting(templist), "School"); 
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

