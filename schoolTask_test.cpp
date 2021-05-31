#ifndef __SCHOOL_TASK_HPP
#define __SCHOOL_TASK_HPP
#include "task.hpp"
#include "gtest/gtest.h"
#include <string>


TEST(schoolTest, nameTest){ 
  SchoolTask* t1 = new Task();
  t1->setName("CS Project");
  
  EXPECT_EQ(t1->getName(), "CS Project");
}

TEST(schoolTest, dayTest){ 
  SchoolTask* t1 = new Task();
  t1->setDay(5);
  
  EXPECT_EQ(t1->getDay(), "5");
}
TEST(schoolTest, monthTest){ 
  SchoolTask* t1 = new Task();
  t1->setMonth(6);
 
  EXPECT_EQ(t1->getMonth(), "6");
  
}

TEST(schoolTest, yearTest){ 
  SchoolTask* t1 = new Task();
  t1-setYear(2021);
 
  EXPECT_EQ(t1>getYear(), "2021");
}

TEST(schoolTest, priorityTest){ 
  SchoolTask* t1 = new Task();
  t1->setPriority(2);
 
  EXPECT_EQ(t1->getPriority(), "2");

}
TEST(schoolTest, descriptionTest){ 
 
  SchoolTask* t1 = new Task();
  t1->setDescription("Finish making tests");

  EXPECT_EQ(t1->getDescription(), "Finish making tests");
}

TEST(schoolTest, categoryTest){ 
 
  SchoolTask* t1 = new Task();
  t1->setCategory("School");

  EXPECT_EQ(t1->getCategory(), "School");
}



TEST(schoolTest, allTest){ 
 
  SchoolTask* t1 = new Task();
  t1->setName("CS Project");
  t1->setDay(5);
  t1->setMonth(6);
  t1-setYear(2021);
  t1->setPriority(2);
  t1->setDescription("Finish making tests");
  t1->setCategory("School");
  
  EXPECT_EQ(t1->getName(), "CS Project");
  EXPECT_EQ(t1->getDay(), "5");
  EXPECT_EQ(t1->getMonth(), "6");
  EXPECT_EQ(t1>getYear(), "2021");
  EXPECT_EQ(t1->getPriority(), "2");
  EXPECT_EQ(t1->getDescription(), "Finish making tests");
  EXPECT_EQ(t1->getCategory(), "School");
}

TEST(schoolTest, allEmpty){ 
 
  SchoolTask* t1 = new Task();
  t1->setName("");
  t1->setDay();
  t1->setMonth();
  t1-setYear();
  t1->setPriority();
  t1->setDescription("");
  t1->setCategory("");
  
  EXPECT_EQ(t1->getName(), "");
  EXPECT_EQ(t1->getDay(), "");
  EXPECT_EQ(t1->getMonth(), "");
  EXPECT_EQ(t1>getYear(), "");
  EXPECT_EQ(t1->getPriority(), "");
  EXPECT_EQ(t1->getDescription(), "");
  EXPECT_EQ(t1->getCategory(), "");
}

TEST(schoolTest, editName){ 
  SchoolTask* t1 = new Task();
  t1->setName("CS Project");
  
  edit_input = 1;
  t1->EditTask("CS 100 Project");
  
  EXPECT_EQ(t1->getName(), "CS 100 Project");
}

TEST(schoolTest, editDescription){ 
  PersonalTask* t1 = new Task();
  t1->setDescription("Finish making tests");
  
  edit_input = 2;
  t1->EditTask("Finish making unit tests for all files");

  EXPECT_EQ(t1->getDescription(), "Finish making unit tests for all files");
}

TEST(schoolTest, editDueDate){ 
  SchoolTask* t1 = new Task();
  t1->setDay(5);
  t1->setMonth(6);
  t1->setYear(2021);
  
  edit_input = 3;
  t1->EditTask(20);
  t1->EditTask(7);
  t1->EditTask(2021);
  
  EXPECT_EQ(t1->getDay(), "20");
  EXPECT_EQ(t1->getMonth(), "7");
  EXPECT_EQ(t1->getYear(), "2021");
}

TEST(schoolTest, editPriority){ 
  SchoolTask* t1 = new Task();
  t1->setPriority(2);
  
  edit_input = 4;
  t1->EditTask(3);
 
  EXPECT_EQ(t1->getPriority(), "3");
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

#endif
