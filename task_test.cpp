#ifndef __TASK_HPP__
#define __TASK_HPP__
#include "gtest/gtest.h"
#include <string>
#include <cstring>
#include <iostream>


TEST(taskTest nameTest){ 
  Task* t1 = new Task();
  t1->setName("CS Project");
  
  EXPECT_EQ(t1->getName(), "CS Project");
}

TEST(taskTest, dayTest){ 
  Task* t1 = new Task();
  t1->setDay(5);
  
  EXPECT_EQ(t1->getDay(), "5");
}
TEST(taskTest, monthTest){ 
  Task* t1 = new Task();
  t1->setMonth(6);
 
  EXPECT_EQ(t1->getMonth(), "6");
  
}

TEST(taskTest, yearTest){ 
  Task* t1 = new Task();
  t1-setYear(2021);
 
  EXPECT_EQ(t1>getYear(), "2021");
}

TEST(taskTest, priorityTest){ 
  Task* t1 = new Task();
  t1->setPriority(2);
 
  EXPECT_EQ(t1->getPriority(), "2");

}
TEST(taskTest, descriptionTest){ 
 
  Task* t1 = new Task();
  t1->setDescription("Finish making tests");

  EXPECT_EQ(t1->getDescription(), "Finish making tests");
}

TEST(taskTest, categoryTest){ 
 
  Task* t1 = new Task();
  t1->setCategory("School");

  EXPECT_EQ(t1->getCategory(), "School");
}



TEST(taskTest, allTest){ 
 
  Task* t1 = new Task();
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

TEST(taskTest, allEmpty){ 
 
  Task* t1 = new Task();
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

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

#endif
