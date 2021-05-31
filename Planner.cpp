Last login: Sun May 30 22:58:13 on ttys000
You have new mail.
Amnehs-Air:~ AmnehAlsuqi$ ssh aalsu013@hammer.cs.ucr.edu
aalsu013@hammer.cs.ucr.edu's password: 
Last login: Sun May 30 18:26:29 2021 from cpe-76-174-100-36.socal.res.rr.com

[aalsu013@hammer ~]$ 
[aalsu013@hammer ~]$ ls
final-project-wpicc001_aalsu013_sdodd007
lab-01---introduction-to-software-construction-tooling-alsuqiamneh
lab-02---github-flow-wpicc001_aalsu013
lab-03---composite-pattern-aalsu013_wpicc001
lab-04---valgrind-wpicc001_aalsu013_lab4
lab-05---strategy-pattern-wpicc001_aalsu013_lab5
lab-06---github-actions-wpicc001_aalsu013_lab6
lab-07---factory-pattern-wpicc001_aalsu013_lab7
lab-08---visitor-pattern-wpicc001_aalsu013_lab8
marya
r
r.cpp
[aalsu013@hammer ~]$ cd final-project-wpicc001_aalsu013_sdodd007/
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ lzx
-bash: lzx: command not found
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ ls
a.out                googletest  personal_task.cpp  school_task.hpp   task.cpp
bin                  lib         personal_task.hpp  SortCategory.cpp  task.hpp
CMakeCache.txt       main        Planner.cpp        SortClass.hpp     Tasks.txt
CMakeFiles           main2.cpp   README.md          SortDate.cpp      test
cmake_install.cmake  main.cpp    readTasks.cpp      SortName.cpp
CMakeLists.txt       Makefile    school_task.cpp    SortPriority.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ git branch
* IMPORTANT
  aalsu013/SPfixes
  aalsu013/edittask
  aalsu013/school_andpersonal
  aalsu013/taskStuff
  aalsu013/task_interface
  aalsu013/updatedSP
  master
  new
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ git checkout aalsu013/edittask 
M	googletest
Switched to branch 'aalsu013/edittask'
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ ls
a.out                CMakeLists.txt  main.cpp           README.md         SortClass.hpp     task.hpp
bin                  googletest      Makefile           readTasks.cpp     SortDate.cpp      Tasks.txt
CMakeCache.txt       lib             personal_task.cpp  school_task.cpp   SortName.cpp      test
CMakeFiles           main            personal_task.hpp  school_task.hpp   SortPriority.cpp
cmake_install.cmake  main2.cpp       Planner.cpp        SortCategory.cpp  task.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
./[ 40%] Linking CXX executable test
te[ 40%] Built target test
[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ ./test
Welcome to PlannerPlus. Enter the corresponding number for the following options follwed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
6
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim task.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim task.hpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim task.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim task.hpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
./te[ 40%] Linking CXX executable test
[ 40%] Built target test
[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ ./test
Welcome to PlannerPlus. Enter the corresponding number for the following options follwed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
6
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim task.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ ls
a.out           cmake_install.cmake  main       personal_task.cpp  readTasks.cpp     SortClass.hpp     task.cpp
bin             CMakeLists.txt       main2.cpp  personal_task.hpp  school_task.cpp   SortDate.cpp      task.hpp
CMakeCache.txt  googletest           main.cpp   Planner.cpp        school_task.hpp   SortName.cpp      Tasks.txt
CMakeFiles      lib                  Makefile   README.md          SortCategory.cpp  SortPriority.cpp  test
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim Tasks.txt 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
[ 40%] Linking CXX executable test
.[ 40%] Built target test
/[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ ./test
Welcome to PlannerPlus. Enter the corresponding number for the following options follwed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
5
Please enter a number for which task you want to edit: 1

In edit task of planner!
About to call edit for schooltask object
Which of the following would you like to edit? Select the corresponding number followed by [ENTER].
1. Task name
2. Task description
3. Task due date
4. Task priority
3
You are changing your due date. Answer the following as integers and hit [ENTER] to save.
What day is efjgdsaf due?
12
What month is efjgdsaf due?
8
What year is efjgdsaf due?
2021
The new set due date for efjgdsaf is: 8/12/2021
Finished Saving Tasks!!
Welcome to PlannerPlus. Enter the corresponding number for the following options follwed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
6
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim Planner.cpp 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
[ 40%] Linking CXX executable test
[ 40%] Built target test
[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ ./test
Welcome to PlannerPlus. Enter the corresponding number for the following options followed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
6
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim task.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ ./test
Welcome to PlannerPlus. Enter the corresponding number for the following options followed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
5
Please enter a number for which task you want to edit: 1


Which of the following would you like to edit? Select the corresponding number followed by [ENTER].
1. Task name
2. Task description
3. Task due date
4. Task priority
1
Type your new task name followed by [ENTER].
testing
You entered: testing
Your task name has been changed.
Planner is saved!
Welcome to PlannerPlus. Enter the corresponding number for the following options followed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
6    
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim Planner.cpp 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
.[ 40%] Linking CXX executable test
/[ 40%] Built target test
[ 60%] Built target gmock
t[ 80%] Built target gmock_main
[100%] Built target gtest_main
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ ./test
Welcome to PlannerPlus. Enter the corresponding number for the following options followed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
5
Please enter a number for which task you want to edit: 1


Which of the following would you like to edit? Select the corresponding number followed by [ENTER].
1. Task name
2. Task description
3. Task due date
4. Task priority
1
Type your new task name followed by [ENTER].
NEW
You entered: NEW
Your task name has been changed.
Planner is saved! Returning to Main Menu.

Welcome to PlannerPlus. Enter the corresponding number for the following options followed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
6
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim task.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
[ 40%] Linking CXX executable test
[ 40%] Built target test
[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ ./test
Welcome to PlannerPlus. Enter the corresponding number for the following options followed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
5
Please enter a number for which task you want to edit: 1


Which of the following would you like to edit? Select the corresponding number followed by [ENTER].
1. Task name
2. Task description
3. Task due date
4. Task priority
1
Type your new task name followed by [ENTER].
asdf
You entered: asdf
Your task name has been changed.
Would you like to further edit asdf? y/n
y


f
Invalid input. Please try again.
s
Invalid input. Please try again.
^[:wq
Invalid input. Please try again.
6 
Invalid input. Please try again.
^C
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim task.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim Tasks.txt 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim task.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
[ 40%] Linking CXX executable test
[ 40%] Built target test
[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ ./test
Welcome to PlannerPlus. Enter the corresponding number for the following options followed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
5
Please enter a number for which task you want to edit: 1


Which of the following would you like to edit? Select the corresponding number followed by [ENTER].
1. Task name
2. Task description
3. Task due date
4. Task priority
1 
Type your new task name followed by [ENTER].
dsd
You entered: dsd
Your task name has been changed.
Would you like to further edit dsd? y/n
y
s
Invalid input. Please try again.
d
Invalid input. Please try again.
y
Which of the following would you like to edit? Select the corresponding number followed by [ENTER].
1. Task name
2. Task description
3. Task due date
4. Task priority
^[:wq
Invalid input. Please try again.
^[6 
Invalid input. Please try again.
^[:wq
Invalid input. Please try again.
^C
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim task.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
[ 40%] Linking CXX executable test
[ 40%] Built target test
[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ ./test
Welcome to PlannerPlus. Enter the corresponding number for the following options followed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
5
Please enter a number for which task you want to edit: 1


Which of the following would you like to edit? Select the corresponding number followed by [ENTER].
1. Task name
2. Task description
3. Task due date
4. Task priority
1
Type your new task name followed by [ENTER].
aa
You entered: aa
Your task name has been changed.
Would you like to further edit aa? y/n
y


y
Which of the following would you like to edit? Select the corresponding number followed by [ENTER].
1. Task name
2. Task description
3. Task due date
4. Task priority
^[:wq
Invalid input. Please try again.
^C
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim task.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
[ 40%] Linking CXX executable test
[ 40%] Built target test
[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ ./test
Welcome to PlannerPlus. Enter the corresponding number for the following options followed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
5
Please enter a number for which task you want to edit: 1


Which of the following would you like to edit? Select the corresponding number followed by [ENTER].
1. Task name
2. Task description
3. Task due date
4. Task priority
1
Type your new task name followed by [ENTER].
aaaaa
You entered: aaaaa
Your task name has been changed.
Would you like to further edit aaaaa? y/n
y

y
Invalid input. Please try again.
y
Invalid input. Please try again.
Y
Invalid input. Please try again.

d
Invalid input. Please try again.
y
Invalid input. Please try again.
^[:wq
Invalid input. Please try again.
^C
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim task.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
[ 40%] Linking CXX executable test
[ 40%] Built target test
[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ ./test
Welcome to PlannerPlus. Enter the corresponding number for the following options followed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
5
Please enter a number for which task you want to edit: 1


Which of the following would you like to edit? Select the corresponding number followed by [ENTER].
1. Task name
2. Task description
3. Task due date
4. Task priority
qqq
Invalid input. Please try again.
1
Type your new task name followed by [ENTER].
qqq
You entered: qqq
Your task name has been changed.
Would you like to further edit qqq? y/n
y
Invalid input. Please try again.
y
Invalid input. Please try again.
^[:wq^C
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim task.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
[ 40%] Linking CXX executable test
./[ 40%] Built target test
[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ ./test
Welcome to PlannerPlus. Enter the corresponding number for the following options followed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
5
Please enter a number for which task you want to edit: 1


Which of the following would you like to edit? Select the corresponding number followed by [ENTER].
1. Task name
2. Task description
3. Task due date
4. Task priority
aqaq
Invalid input. Please try again.
1
Type your new task name followed by [ENTER].
aqaq
You entered: aqaq
Your task name has been changed.
Would you like to further edit aqaq? y/n
y
Which of the following would you like to edit? Select the corresponding number followed by [ENTER].
1. Task name
2. Task description
3. Task due date
4. Task priority
^[^C
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim task.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim Planner.cpp 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
./[ 40%] Linking CXX executable test
ty[ 40%] Built target test
[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ ./test
Welcome to PlannerPlus. Enter the corresponding number for the following options followed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
5
Please enter a number for which task you want to edit: 1


Which of the following would you like to edit? Select the corresponding number followed by [ENTER].
1. Task name
2. Task description
3. Task due date
4. Task priority
5. Return to Main Menu.
5
Invalid input. Please try again.
wq   
Invalid input. Please try again.
^C  
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim task.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
./[ 40%] Linking CXX executable test
te[ 40%] Built target test
[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ ./test
Welcome to PlannerPlus. Enter the corresponding number for the following options followed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
5
Please enter a number for which task you want to edit: 1


Which of the following would you like to edit? Select the corresponding number followed by [ENTER].
1. Task name
2. Task description
3. Task due date
4. Task priority
5. Return to Main Menu.
5
Planner is saved! Returning to Main Menu.

Welcome to PlannerPlus. Enter the corresponding number for the following options followed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
6    
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim task.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
[ 40%] Linking CXX executable test
[ 40%] Built target test
[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ ./test
Welcome to PlannerPlus. Enter the corresponding number for the following options followed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
1
What type of task would you like to create? Enter the corresponding number for the following options followed by [ENTER].
1. School Task.
2. Personal Task.
3. Return to Main Menu.
1
You are creating a school task.
Create a title for your task follwed by [ENTER].
a
You entered: a
Create a description for a. Once completed, hit [ENTER] to save.

You entered: 

Set a due date for a. Answer the following as integers and hit [ENTER] to save.
What day of the month is a due?
d
terminate called after throwing an instance of 'std::invalid_argument'
  what():  stoi
Aborted
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
[ 40%] Built target test
[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ ./test
Welcome to PlannerPlus. Enter the corresponding number for the following options followed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
5
Please enter a number for which task you want to edit: 1


Which of the following would you like to edit? Select the corresponding number followed by [ENTER].
1. Task name
2. Task description
3. Task due date
4. Task priority
5. Return to Main Menu.
1
Type your new task name followed by [ENTER].
ss
You entered: ss
Your task name has been changed.
Would you like to further edit ss? y/n
y
Which of the following would you like to edit? Select the corresponding number followed by [ENTER].
1. Task name
2. Task description
3. Task due date
4. Task priority
5. Return to Main Menu.
5
Planner is saved! Returning to Main Menu.

Welcome to PlannerPlus. Enter the corresponding number for the following options followed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
6
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim task.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
\[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
[ 40%] Linking CXX executable test
[ 40%] Built target test
[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ \./test
Welcome to PlannerPlus. Enter the corresponding number for the following options followed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
5
Please enter a number for which task you want to edit: 1


Which of the following would you like to edit? Select the corresponding number followed by [ENTER].
1. Task name
2. Task description
3. Task due date
4. Task priority
5. Return to Main Menu.
3
You are changing your due date. Answer the following as integers and hit [ENTER] to save.
What day is ss due?
10
What month is ss due?
7
What year is ss due?
2055
The new set due date for ss is: 7/10/2055
Planner is saved! Returning to Main Menu.

Welcome to PlannerPlus. Enter the corresponding number for the following options followed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
6
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim Planner.cpp 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
[ 40%] Linking CXX executable test
[ 40%] Built target test
[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ ./test
Welcome to PlannerPlus. Enter the corresponding number for the following options followed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
1
What type of task would you like to create? Enter the corresponding number for the following options followed by [ENTER].
1. School Task.
2. Personal Task.
3. Return to Main Menu.
1
You are creating a school task.
Create a title for your task follwed by [ENTER].
Math Hwk
You entered: Math Hwk
Create a description for Math Hwk. Once completed, hit [ENTER] to save.
Sections 1-4
You entered: Sections 1-4

Set a due date for Math Hwk. Answer the following as integers and hit [ENTER] to save.
What day of the month is Math Hwk due?
15
You entered: 15
What month is Math Hwk due?
6
You entered: 6
What year is Math Hwk due?
2021
You entered: 2021
The set due date for Math Hwk is: 6/15/2021

Please set a priority level for Math Hwk. Select a corresponding number followed by [ENTER].
1. Priority is relaxed.
2. Priority is medium.
3. Priority is high.
1

The priority of Math Hwk is relaxed.
Math Hwk is now saved in your Planner.
Planner is saved! Returning to Main Menu.

Returning to main menu...
Welcome to PlannerPlus. Enter the corresponding number for the following options followed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
6
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim Tasks.txt 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ c./test
-bash: c./test: No such file or directory
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ ./test
Welcome to PlannerPlus. Enter the corresponding number for the following options followed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
2
Planner Empty!
Welcome to PlannerPlus. Enter the corresponding number for the following options followed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
^[[A^[[A6
Invalid input. Returning to Main Menu.
Welcome to PlannerPlus. Enter the corresponding number for the following options followed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
6
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim Planner.cpp 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
[ 40%] Linking CXX executable test
[ 40%] Built target test
[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ ./test
Welcome to PlannerPlus. Enter the corresponding number for the following options followed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
2
Planner Empty!
Welcome to PlannerPlus. Enter the corresponding number for the following options followed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
6
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim Tasks.txt 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ rm Tasks.txt 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
[ 40%] Built target test
[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ ./test
Welcome to PlannerPlus. Enter the corresponding number for the following options followed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
1
What type of task would you like to create? Enter the corresponding number for the following options followed by [ENTER].
1. School Task.
2. Personal Task.
3. Return to Main Menu.
1
You are creating a school task.
Create a title for your task follwed by [ENTER].
Math Homework
You entered: Math Homework
Create a description for Math Homework. Once completed, hit [ENTER] to save.
Sections 6
You entered: Sections 6

Set a due date for Math Homework. Answer the following as integers and hit [ENTER] to save.
What day of the month is Math Homework due?
6
You entered: 6
What month is Math Homework due?
14
Invalid input. Please enter a valid month of the year as an integer followed by [ENTER].
12
You entered: 12
What year is Math Homework due?
2021
You entered: 2021
The set due date for Math Homework is: 12/6/2021

Please set a priority level for Math Homework. Select a corresponding number followed by [ENTER].
1. Priority is relaxed.
2. Priority is medium.
3. Priority is high.
1

The priority of Math Homework is relaxed.
Math Homework is now saved in your Planner.
Planner is saved! Returning to Main Menu.

Returning to Main Menu...
Welcome to PlannerPlus. Enter the corresponding number for the following options followed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
2
Task Name: Math Homework
Task Category: School
Description: Sections 6

Welcome to PlannerPlus. Enter the corresponding number for the following options followed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
6
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim Planner.cpp 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
.In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp: In member function ‘void Planner::Display_Planner()’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:146:31: error: ‘BLUE’ was not declared in this scope
      cout << "Task Name: " << BLUE << SortSet.at(i).getName() << RESET << endl;
                               ^~~~
/CMakeFiles/test.dir/build.make:82: recipe for target 'CMakeFiles/test.dir/main.cpp.o' failed
make[2]: *** [CMakeFiles/test.dir/main.cpp.o] Error 1
CMakeFiles/Makefile2:157: recipe for target 'CMakeFiles/test.dir/all' failed
make[1]: *** [CMakeFiles/test.dir/all] Error 2
Makefile:149: recipe for target 'all' failed
make: *** [all] Error 2
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim Planner.cpp 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
[ 40%] Linking CXX executable test
[ 40%] Built target test
[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ ./test
Welcome to PlannerPlus. Enter the corresponding number for the following options followed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
2
Task Name: Math Homework
Task Category: School
Description: Sections 6

Welcome to PlannerPlus. Enter the corresponding number for the following options followed by [ENTER].
1. Create New Task.
2. Display Existing Task(s).
3. Sort or Filter Your Tasks.
4. Delete a Task.
5. Edit an Existing Task
6. Quit.
6       
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim Planner.cpp 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim Planner.cpp 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:2:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:8:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:11:7: error: expected nested-name-specifier before ‘namespace’
 using namespace std;
       ^~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:14:12: error: cannot define member function ‘Task::Task’ within ‘Planner’
 Task::Task(){
            ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:25:60: error: cannot define member function ‘Task::Task’ within ‘Planner’
 Task::Task(string category, string name, string description){
                                                            ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:31:35: error: cannot define member function ‘Task::setDescription’ within ‘Planner’
 void Task::setDescription(string d) {
                                   ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:34:28: error: cannot define member function ‘Task::setName’ within ‘Planner’
 void Task::setName(string n){
                            ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:37:24: error: cannot define member function ‘Task::setDay’ within ‘Planner’
 void Task::setDay(int d){
                        ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:40:32: error: cannot define member function ‘Task::setCategory’ within ‘Planner’
 void Task::setCategory(string c) {
                                ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:43:26: error: cannot define member function ‘Task::setMonth’ within ‘Planner’
 void Task::setMonth(int m){
                          ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:46:25: error: cannot define member function ‘Task::setYear’ within ‘Planner’
 void Task::setYear(int y){
                         ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:49:29: error: cannot define member function ‘Task::setPriority’ within ‘Planner’
 void Task::setPriority(int p){
                             ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:52:29: error: cannot define member function ‘Task::getDescription’ within ‘Planner’
 string Task::getDescription(){
                             ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:55:22: error: cannot define member function ‘Task::getName’ within ‘Planner’
 string Task::getName(){
                      ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:58:26: error: cannot define member function ‘Task::getCategory’ within ‘Planner’
 string Task::getCategory(){
                          ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:61:18: error: cannot define member function ‘Task::getDay’ within ‘Planner’
 int Task::getDay(){
                  ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:64:20: error: cannot define member function ‘Task::getMonth’ within ‘Planner’
 int Task::getMonth(){
                    ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:67:19: error: cannot define member function ‘Task::getYear’ within ‘Planner’
 int Task::getYear(){
                   ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:70:23: error: cannot define member function ‘Task::getPriority’ within ‘Planner’
 int Task::getPriority(){
                       ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:76:21: error: cannot define member function ‘Task::EditTask’ within ‘Planner’
 void Task::EditTask(){
                     ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:8:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:9:7: error: expected nested-name-specifier before ‘namespace’
 using namespace std;
       ^~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:13:73: error: cannot define member function ‘SchoolTask::SchoolTask’ within ‘Planner’
  SchoolTask::SchoolTask(string category, string name, string description){
                                                                         ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:19:34: error: cannot define member function ‘SchoolTask::Add_SchoolTask’ within ‘Planner’
  void SchoolTask::Add_SchoolTask(){
                                  ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:8:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:96:25: error: cannot define member function ‘SchoolTask::SchoolTask’ within ‘Planner’
  SchoolTask::SchoolTask(){}
                         ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:9:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:6:7: error: expected nested-name-specifier before ‘namespace’
 using namespace std;
       ^~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:9:76: error: cannot define member function ‘PersonalTask::PersonalTask’ within ‘Planner’
 PersonalTask::PersonalTask(string category, string name, string description){
                                                                            ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:14:38: error: cannot define member function ‘PersonalTask::Add_PersonalTask’ within ‘Planner’
  void PersonalTask::Add_PersonalTask(){
                                      ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:70:29: error: cannot define member function ‘PersonalTask::PersonalTask’ within ‘Planner’
  PersonalTask::PersonalTask(){}
                             ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:16:1: error: expected ‘}’ at end of input
 }
 ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp: In member function ‘void Planner::Filter_Tasks()’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:87:16: error: ‘DisplayMenu’ was not declared in this scope
    DisplayMenu();
                ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp: In member function ‘void Planner::Sort_Tasks()’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:128:16: error: ‘DisplayMenu’ was not declared in this scope
    DisplayMenu();
                ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp: In member function ‘void Planner::Display_Planner()’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:167:4: error: expected ‘}’ before ‘else’
    else
    ^~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp: In member function ‘int Planner::main()’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:14:10: error: ‘class Planner’ has no member named ‘DisplayMenu’; did you mean ‘Display_Planner’?
  planner.DisplayMenu();
          ^~~~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp: At global scope:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:16:1: error: expected unqualified-id at end of input
 }
 ^
CMakeFiles/test.dir/build.make:82: recipe for target 'CMakeFiles/test.dir/main.cpp.o' failed
make[2]: *** [CMakeFiles/test.dir/main.cpp.o] Error 1
CMakeFiles/Makefile2:157: recipe for target 'CMakeFiles/test.dir/all' failed
make[1]: *** [CMakeFiles/test.dir/all] Error 2
Makefile:149: recipe for target 'all' failed
make: *** [all] Error 2
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim Planner.cpp 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:2:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:8:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:11:7: error: expected nested-name-specifier before ‘namespace’
 using namespace std;
       ^~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:14:12: error: cannot define member function ‘Task::Task’ within ‘Planner’
 Task::Task(){
            ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:25:60: error: cannot define member function ‘Task::Task’ within ‘Planner’
 Task::Task(string category, string name, string description){
                                                            ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:31:35: error: cannot define member function ‘Task::setDescription’ within ‘Planner’
 void Task::setDescription(string d) {
                                   ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:34:28: error: cannot define member function ‘Task::setName’ within ‘Planner’
 void Task::setName(string n){
                            ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:37:24: error: cannot define member function ‘Task::setDay’ within ‘Planner’
 void Task::setDay(int d){
                        ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:40:32: error: cannot define member function ‘Task::setCategory’ within ‘Planner’
 void Task::setCategory(string c) {
                                ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:43:26: error: cannot define member function ‘Task::setMonth’ within ‘Planner’
 void Task::setMonth(int m){
                          ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:46:25: error: cannot define member function ‘Task::setYear’ within ‘Planner’
 void Task::setYear(int y){
                         ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:49:29: error: cannot define member function ‘Task::setPriority’ within ‘Planner’
 void Task::setPriority(int p){
                             ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:52:29: error: cannot define member function ‘Task::getDescription’ within ‘Planner’
 string Task::getDescription(){
                             ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:55:22: error: cannot define member function ‘Task::getName’ within ‘Planner’
 string Task::getName(){
                      ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:58:26: error: cannot define member function ‘Task::getCategory’ within ‘Planner’
 string Task::getCategory(){
                          ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:61:18: error: cannot define member function ‘Task::getDay’ within ‘Planner’
 int Task::getDay(){
                  ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:64:20: error: cannot define member function ‘Task::getMonth’ within ‘Planner’
 int Task::getMonth(){
                    ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:67:19: error: cannot define member function ‘Task::getYear’ within ‘Planner’
 int Task::getYear(){
                   ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:70:23: error: cannot define member function ‘Task::getPriority’ within ‘Planner’
 int Task::getPriority(){
                       ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:76:21: error: cannot define member function ‘Task::EditTask’ within ‘Planner’
 void Task::EditTask(){
                     ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:8:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:9:7: error: expected nested-name-specifier before ‘namespace’
 using namespace std;
       ^~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:13:73: error: cannot define member function ‘SchoolTask::SchoolTask’ within ‘Planner’
  SchoolTask::SchoolTask(string category, string name, string description){
                                                                         ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:19:34: error: cannot define member function ‘SchoolTask::Add_SchoolTask’ within ‘Planner’
  void SchoolTask::Add_SchoolTask(){
                                  ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:8:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:96:25: error: cannot define member function ‘SchoolTask::SchoolTask’ within ‘Planner’
  SchoolTask::SchoolTask(){}
                         ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:9:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:6:7: error: expected nested-name-specifier before ‘namespace’
 using namespace std;
       ^~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:9:76: error: cannot define member function ‘PersonalTask::PersonalTask’ within ‘Planner’
 PersonalTask::PersonalTask(string category, string name, string description){
                                                                            ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:14:38: error: cannot define member function ‘PersonalTask::Add_PersonalTask’ within ‘Planner’
  void PersonalTask::Add_PersonalTask(){
                                      ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:70:29: error: cannot define member function ‘PersonalTask::PersonalTask’ within ‘Planner’
  PersonalTask::PersonalTask(){}
                             ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:16:1: error: expected ‘}’ at end of input
 }
 ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp: In member function ‘void Planner::Filter_Tasks()’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:87:16: error: ‘DisplayMenu’ was not declared in this scope
    DisplayMenu();
                ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp: In member function ‘void Planner::Sort_Tasks()’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:128:16: error: ‘DisplayMenu’ was not declared in this scope
    DisplayMenu();
                ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp: In member function ‘void Planner::Display_Planner()’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:167:4: error: expected ‘}’ before ‘else’
    else
    ^~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp: In member function ‘int Planner::main()’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:14:10: error: ‘class Planner’ has no member named ‘DisplayMenu’; did you mean ‘Display_Planner’?
  planner.DisplayMenu();
          ^~~~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp: At global scope:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:16:1: error: expected unqualified-id at end of input
 }
 ^
CMakeFiles/test.dir/build.make:82: recipe for target 'CMakeFiles/test.dir/main.cpp.o' failed
make[2]: *** [CMakeFiles/test.dir/main.cpp.o] Error 1
CMakeFiles/Makefile2:157: recipe for target 'CMakeFiles/test.dir/all' failed
make[1]: *** [CMakeFiles/test.dir/all] Error 2
Makefile:149: recipe for target 'all' failed
make: *** [all] Error 2
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:2:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:8:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:11:7: error: expected nested-name-specifier before ‘namespace’
 using namespace std;
       ^~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:14:12: error: cannot define member function ‘Task::Task’ within ‘Planner’
 Task::Task(){
            ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:25:60: error: cannot define member function ‘Task::Task’ within ‘Planner’
 Task::Task(string category, string name, string description){
                                                            ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:31:35: error: cannot define member function ‘Task::setDescription’ within ‘Planner’
 void Task::setDescription(string d) {
                                   ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:34:28: error: cannot define member function ‘Task::setName’ within ‘Planner’
 void Task::setName(string n){
                            ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:37:24: error: cannot define member function ‘Task::setDay’ within ‘Planner’
 void Task::setDay(int d){
                        ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:40:32: error: cannot define member function ‘Task::setCategory’ within ‘Planner’
 void Task::setCategory(string c) {
                                ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:43:26: error: cannot define member function ‘Task::setMonth’ within ‘Planner’
 void Task::setMonth(int m){
                          ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:46:25: error: cannot define member function ‘Task::setYear’ within ‘Planner’
 void Task::setYear(int y){
                         ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:49:29: error: cannot define member function ‘Task::setPriority’ within ‘Planner’
 void Task::setPriority(int p){
                             ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:52:29: error: cannot define member function ‘Task::getDescription’ within ‘Planner’
 string Task::getDescription(){
                             ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:55:22: error: cannot define member function ‘Task::getName’ within ‘Planner’
 string Task::getName(){
                      ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:58:26: error: cannot define member function ‘Task::getCategory’ within ‘Planner’
 string Task::getCategory(){
                          ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:61:18: error: cannot define member function ‘Task::getDay’ within ‘Planner’
 int Task::getDay(){
                  ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:64:20: error: cannot define member function ‘Task::getMonth’ within ‘Planner’
 int Task::getMonth(){
                    ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:67:19: error: cannot define member function ‘Task::getYear’ within ‘Planner’
 int Task::getYear(){
                   ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:70:23: error: cannot define member function ‘Task::getPriority’ within ‘Planner’
 int Task::getPriority(){
                       ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:76:21: error: cannot define member function ‘Task::EditTask’ within ‘Planner’
 void Task::EditTask(){
                     ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:8:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:9:7: error: expected nested-name-specifier before ‘namespace’
 using namespace std;
       ^~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:13:73: error: cannot define member function ‘SchoolTask::SchoolTask’ within ‘Planner’
  SchoolTask::SchoolTask(string category, string name, string description){
                                                                         ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:19:34: error: cannot define member function ‘SchoolTask::Add_SchoolTask’ within ‘Planner’
  void SchoolTask::Add_SchoolTask(){
                                  ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:8:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:96:25: error: cannot define member function ‘SchoolTask::SchoolTask’ within ‘Planner’
  SchoolTask::SchoolTask(){}
                         ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:9:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:6:7: error: expected nested-name-specifier before ‘namespace’
 using namespace std;
       ^~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:9:76: error: cannot define member function ‘PersonalTask::PersonalTask’ within ‘Planner’
 PersonalTask::PersonalTask(string category, string name, string description){
                                                                            ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:14:38: error: cannot define member function ‘PersonalTask::Add_PersonalTask’ within ‘Planner’
  void PersonalTask::Add_PersonalTask(){
                                      ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:70:29: error: cannot define member function ‘PersonalTask::PersonalTask’ within ‘Planner’
  PersonalTask::PersonalTask(){}
                             ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:16:1: error: expected ‘}’ at end of input
 }
 ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp: In member function ‘void Planner::Filter_Tasks()’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:87:16: error: ‘DisplayMenu’ was not declared in this scope
    DisplayMenu();
                ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp: In member function ‘void Planner::Sort_Tasks()’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:128:16: error: ‘DisplayMenu’ was not declared in this scope
    DisplayMenu();
                ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp: In member function ‘void Planner::Display_Planner()’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:167:4: error: expected ‘}’ before ‘else’
    else
    ^~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp: In member function ‘int Planner::main()’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:14:10: error: ‘class Planner’ has no member named ‘DisplayMenu’; did you mean ‘Display_Planner’?
  planner.DisplayMenu();
          ^~~~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp: At global scope:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:16:1: error: expected unqualified-id at end of input
 }
 ^
CMakeFiles/test.dir/build.make:82: recipe for target 'CMakeFiles/test.dir/main.cpp.o' failed
make[2]: *** [CMakeFiles/test.dir/main.cpp.o] Error 1
CMakeFiles/Makefile2:157: recipe for target 'CMakeFiles/test.dir/all' failed
make[1]: *** [CMakeFiles/test.dir/all] Error 2
Makefile:149: recipe for target 'all' failed
make: *** [all] Error 2
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim Planner.cpp 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim CMakeLists.txt 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim Planner.cpp 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ git checkout IMPORTANT 
M	Planner.cpp
M	googletest
M	task.cpp
M	task.hpp
Switched to branch 'IMPORTANT'
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ git branch IMP2
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ git branch
  IMP2
* IMPORTANT
  aalsu013/SPfixes
  aalsu013/edittask
  aalsu013/school_andpersonal
  aalsu013/taskStuff
  aalsu013/task_interface
  aalsu013/updatedSP
  master
  new
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim Planner.cpp 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ rm Planner.cpp 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim Planner.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:354:2: error: #endif without #if
 #endif
  ^~~~~
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:1:1: error: ‘fndef’ does not name a type
 fndef __PLANNER_CPP__
 ^~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:62:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/type_traits.h:162:35: error: ‘__gnu_cxx::__is_null_pointer’ declared as an ‘inline’ variable
   __is_null_pointer(std::nullptr_t)
                                   ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/type_traits.h:162:35: error: ‘bool __gnu_cxx::__is_null_pointer’ redeclared as different kind of symbol
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/type_traits.h:157:5: note: previous declaration ‘template<class _Type> bool __gnu_cxx::__is_null_pointer(_Type)’
     __is_null_pointer(_Type)
     ^~~~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/type_traits.h:162:21: error: ‘nullptr_t’ is not a member of ‘std’
   __is_null_pointer(std::nullptr_t)
                     ^~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:57:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:59,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:64,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:359:31: error: ‘std::size_t’ has not been declared
   template<typename _Tp, std::size_t _Size>
                               ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:360:25: error: ‘_Size’ was not declared in this scope
     struct is_array<_Tp[_Size]>
                         ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:360:31: error: template argument 1 is invalid
     struct is_array<_Tp[_Size]>
                               ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:558:37: error: ‘nullptr_t’ is not a member of ‘std’
     struct __is_null_pointer_helper<std::nullptr_t>
                                     ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:558:37: error: ‘nullptr_t’ is not a member of ‘std’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:558:51: error: template argument 1 is invalid
     struct __is_null_pointer_helper<std::nullptr_t>
                                                   ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1478:32: error: ‘size_t’ is not a member of ‘std’
     : public integral_constant<std::size_t, __alignof__(_Tp)> { };
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1478:32: error: ‘size_t’ is not a member of ‘std’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1478:61: error: template argument 1 is invalid
     : public integral_constant<std::size_t, __alignof__(_Tp)> { };
                                                             ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1478:61: note: invalid template non-type parameter
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1483:32: error: ‘size_t’ is not a member of ‘std’
     : public integral_constant<std::size_t, 0> { };
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1483:32: error: ‘size_t’ is not a member of ‘std’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1483:46: error: template argument 1 is invalid
     : public integral_constant<std::size_t, 0> { };
                                              ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1483:46: note: invalid template non-type parameter
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1485:31: error: ‘std::size_t’ has not been declared
   template<typename _Tp, std::size_t _Size>
                               ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1486:21: error: ‘_Size’ was not declared in this scope
     struct rank<_Tp[_Size]>
                     ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1486:27: error: template argument 1 is invalid
     struct rank<_Tp[_Size]>
                           ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1487:32: error: ‘size_t’ is not a member of ‘std’
     : public integral_constant<std::size_t, 1 + rank<_Tp>::value> { };
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1487:32: error: ‘size_t’ is not a member of ‘std’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1487:65: error: template argument 1 is invalid
     : public integral_constant<std::size_t, 1 + rank<_Tp>::value> { };
                                                                 ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1487:65: note: invalid template non-type parameter
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1491:32: error: ‘size_t’ is not a member of ‘std’
     : public integral_constant<std::size_t, 1 + rank<_Tp>::value> { };
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1491:32: error: ‘size_t’ is not a member of ‘std’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1491:65: error: template argument 1 is invalid
     : public integral_constant<std::size_t, 1 + rank<_Tp>::value> { };
                                                                 ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1491:65: note: invalid template non-type parameter
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1496:32: error: ‘size_t’ is not a member of ‘std’
     : public integral_constant<std::size_t, 0> { };
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1496:32: error: ‘size_t’ is not a member of ‘std’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1496:46: error: template argument 1 is invalid
     : public integral_constant<std::size_t, 0> { };
                                              ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1496:46: note: invalid template non-type parameter
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1498:47: error: ‘std::size_t’ has not been declared
   template<typename _Tp, unsigned _Uint, std::size_t _Size>
                                               ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1499:23: error: ‘_Size’ was not declared in this scope
     struct extent<_Tp[_Size], _Uint>
                       ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1499:36: error: template argument 1 is invalid
     struct extent<_Tp[_Size], _Uint>
                                    ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1500:32: error: ‘size_t’ is not a member of ‘std’
     : public integral_constant<std::size_t,
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1500:32: error: ‘size_t’ is not a member of ‘std’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1501:24: error: ‘_Size’ was not declared in this scope
           _Uint == 0 ? _Size : extent<_Tp,
                        ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1502:28: error: template argument 1 is invalid
           _Uint - 1>::value>
                            ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1502:28: note: invalid template non-type parameter
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1507:32: error: ‘size_t’ is not a member of ‘std’
     : public integral_constant<std::size_t,
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1507:32: error: ‘size_t’ is not a member of ‘std’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1509:31: error: template argument 1 is invalid
              _Uint - 1>::value>
                               ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1509:31: note: invalid template non-type parameter
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1958:31: error: ‘std::size_t’ has not been declared
   template<typename _Tp, std::size_t _Size>
                               ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1959:30: error: ‘_Size’ was not declared in this scope
     struct remove_extent<_Tp[_Size]>
                              ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1959:36: error: template argument 1 is invalid
     struct remove_extent<_Tp[_Size]>
                                    ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1971:31: error: ‘std::size_t’ has not been declared
   template<typename _Tp, std::size_t _Size>
                               ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1972:35: error: ‘_Size’ was not declared in this scope
     struct remove_all_extents<_Tp[_Size]>
                                   ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1972:41: error: template argument 1 is invalid
     struct remove_all_extents<_Tp[_Size]>
                                         ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2030:17: error: ‘std::size_t’ has not been declared
   template<std::size_t _Len>
                 ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2035:23: error: ‘_Len’ was not declared in this scope
  unsigned char __data[_Len];
                       ^~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2050:17: error: ‘std::size_t’ has not been declared
   template<std::size_t _Len, std::size_t _Align =
                 ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2050:35: error: ‘std::size_t’ has not been declared
   template<std::size_t _Len, std::size_t _Align =
                                   ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2051:48: error: ‘_Len’ was not declared in this scope
     __alignof__(typename __aligned_storage_msa<_Len>::__type)>
                                                ^~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2051:52: error: template argument 1 is invalid
     __alignof__(typename __aligned_storage_msa<_Len>::__type)>
                                                    ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2056:23: error: ‘_Len’ was not declared in this scope
  unsigned char __data[_Len];
                       ^~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2057:37: error: ‘_Align’ was not declared in this scope
  struct __attribute__((__aligned__((_Align)))) { } __align;
                                     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2064:20: error: ‘size_t’ does not name a type
       static const size_t _S_alignment = 0;
                    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2065:20: error: ‘size_t’ does not name a type
       static const size_t _S_size = 0;
                    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2071:20: error: ‘size_t’ does not name a type
       static const size_t _S_alignment =
                    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2074:20: error: ‘size_t’ does not name a type
       static const size_t _S_size =
                    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2089:13: error: ‘size_t’ has not been declared
   template <size_t _Len, typename... _Types>
             ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2096:20: error: ‘size_t’ does not name a type
       static const size_t _S_len = _Len > __strictest::_S_size
                    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2100:20: error: ‘size_t’ does not name a type
       static const size_t alignment_value = __strictest::_S_alignment;
                    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2102:40: error: ‘_S_len’ was not declared in this scope
       typedef typename aligned_storage<_S_len, alignment_value>::type type;
                                        ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2102:48: error: ‘alignment_value’ was not declared in this scope
       typedef typename aligned_storage<_S_len, alignment_value>::type type;
                                                ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2102:63: error: template argument 1 is invalid
       typedef typename aligned_storage<_S_len, alignment_value>::type type;
                                                               ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2102:63: error: template argument 2 is invalid
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2105:13: error: ‘size_t’ has not been declared
   template <size_t _Len, typename... _Types>
             ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2106:11: error: ‘size_t’ does not name a type
     const size_t aligned_union<_Len, _Types...>::alignment_value;
           ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2609:26: error: ‘size_t’ has not been declared
   template<typename _Tp, size_t _Nm>
                          ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2612:21: error: ‘_Nm’ was not declared in this scope
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                     ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2612:24: error: ‘std::swap’ declared as an ‘inline’ variable
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                        ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2612:24: error: ‘template<class _Tp, <declaration error> > typename std::enable_if<std::__is_swappable<_Tp>::value>::type std::swap’ conflicts with a previous declaration
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2605:5: note: previous declaration ‘typename std::enable_if<std::__and_<std::is_move_constructible<_Tp>, std::is_move_assignable<_Tp> >::value>::type std::swap(_Tp&, _Tp&)’
     swap(_Tp&, _Tp&)
     ^~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2612:16: error: ‘__a’ was not declared in this scope
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2612:21: error: ‘_Nm’ was not declared in this scope
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                     ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2612:33: error: ‘__b’ was not declared in this scope
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                                 ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2612:38: error: ‘_Nm’ was not declared in this scope
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                                      ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2613:5: error: expected ‘;’ before ‘noexcept’
     noexcept(__is_nothrow_swappable<_Tp>::value);
     ^~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:59:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:64,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:198:26: error: ‘size_t’ has not been declared
   template<typename _Tp, size_t _Nm>
                          ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:202:21: error: ‘_Nm’ was not declared in this scope
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                     ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:202:24: error: ‘std::swap’ declared as an ‘inline’ variable
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                        ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:202:24: error: ‘template<class _Tp, <declaration error> > typename std::enable_if<std::__is_swappable<_Tp>::value>::type std::swap’ conflicts with a previous declaration
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:179:5: note: previous declaration ‘typename std::enable_if<std::__and_<std::is_move_constructible<_Tp>, std::is_move_assignable<_Tp> >::value>::type std::swap(_Tp&, _Tp&)’
     swap(_Tp& __a, _Tp& __b)
     ^~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:202:16: error: ‘__a’ was not declared in this scope
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:202:21: error: ‘_Nm’ was not declared in this scope
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                     ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:202:33: error: ‘__b’ was not declared in this scope
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                                 ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:202:38: error: ‘_Nm’ was not declared in this scope
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                                      ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:203:5: error: expected ‘;’ before ‘noexcept’
     noexcept(__is_nothrow_swappable<_Tp>::value)
     ^~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:64:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:85:17: error: ‘std::size_t’ has not been declared
   template<std::size_t...>
                 ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:421:41: error: ‘std::size_t’ has not been declared
       template<typename... _Args1, std::size_t... _Indexes1,
                                         ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:422:41: error: ‘std::size_t’ has not been declared
                typename... _Args2, std::size_t... _Indexes2>
                                         ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:424:27: error: ‘_Indexes1’ was not declared in this scope
              _Index_tuple<_Indexes1...>, _Index_tuple<_Indexes2...>);
                           ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:424:36: error: expected parameter pack before ‘...’
              _Index_tuple<_Indexes1...>, _Index_tuple<_Indexes2...>);
                                    ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:424:39: error: template argument 1 is invalid
              _Index_tuple<_Indexes1...>, _Index_tuple<_Indexes2...>);
                                       ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:424:55: error: ‘_Indexes2’ was not declared in this scope
              _Index_tuple<_Indexes1...>, _Index_tuple<_Indexes2...>);
                                                       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:424:64: error: expected parameter pack before ‘...’
              _Index_tuple<_Indexes1...>, _Index_tuple<_Indexes2...>);
                                                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:424:67: error: template argument 1 is invalid
              _Index_tuple<_Indexes1...>, _Index_tuple<_Indexes2...>);
                                                                   ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:65:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator_base_types.h:116:67: error: ‘ptrdiff_t’ does not name a type
   template<typename _Category, typename _Tp, typename _Distance = ptrdiff_t,
                                                                   ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator_base_types.h:182:15: error: ‘ptrdiff_t’ does not name a type
       typedef ptrdiff_t                   difference_type;
               ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator_base_types.h:193:15: error: ‘ptrdiff_t’ does not name a type
       typedef ptrdiff_t                   difference_type;
               ^~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:66:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:67,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ptr_traits.h:104:20: error: ‘ptrdiff_t’ was not declared in this scope
  = __detected_or_t<ptrdiff_t, __difference_type, _Ptr>;
                    ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ptr_traits.h:104:54: error: template argument 1 is invalid
  = __detected_or_t<ptrdiff_t, __difference_type, _Ptr>;
                                                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ptr_traits.h:130:15: error: ‘ptrdiff_t’ does not name a type
       typedef ptrdiff_t difference_type;
               ^~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h: In static member function ‘static _Tp* std::__copy_move<_IsMove, true, std::random_access_iterator_tag>::__copy_m(const _Tp*, const _Tp*, _Tp*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:366:10: error: ‘ptrdiff_t’ does not name a type
    const ptrdiff_t _Num = __last - __first;
          ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:367:8: error: ‘_Num’ was not declared in this scope
    if (_Num)
        ^~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:369:22: error: ‘_Num’ was not declared in this scope
    return __result + _Num;
                      ^~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h: In static member function ‘static _Tp* std::__copy_move_backward<_IsMove, true, std::random_access_iterator_tag>::__copy_move_b(const _Tp*, const _Tp*, _Tp*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:568:10: error: ‘ptrdiff_t’ does not name a type
    const ptrdiff_t _Num = __last - __first;
          ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:569:8: error: ‘_Num’ was not declared in this scope
    if (_Num)
        ^~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:571:22: error: ‘_Num’ was not declared in this scope
    return __result - _Num;
                      ^~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h: In function ‘typename __gnu_cxx::__enable_if<std::__is_byte<_Tp>::__value, void>::__type std::__fill_a(_Tp*, _Tp*, const _Tp&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:706:11: error: expected primary-expression before ‘const’
       if (const size_t __len = __last - __first)
           ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:706:11: error: expected ‘)’ before ‘const’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:707:63: error: ‘__len’ was not declared in this scope
  __builtin_memset(__first, static_cast<unsigned char>(__tmp), __len);
                                                               ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h: In static member function ‘static bool std::__equal<true>::equal(const _Tp*, const _Tp*, const _Tp*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:813:8: error: expected primary-expression before ‘const’
    if (const size_t __len = (__last1 - __first1))
        ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:813:8: error: expected ‘)’ before ‘const’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:814:65: error: ‘__len’ was not declared in this scope
      return !__builtin_memcmp(__first1, __first2, sizeof(_Tp) * __len);
                                                                 ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h: In static member function ‘static bool std::__lexicographical_compare<true>::__lc(const _Tp*, const _Tp*, const _Up*, const _Up*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:917:10: error: ‘size_t’ does not name a type
    const size_t __len1 = __last1 - __first1;
          ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:918:10: error: ‘size_t’ does not name a type
    const size_t __len2 = __last2 - __first2;
          ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:919:8: error: expected primary-expression before ‘const’
    if (const size_t __len = std::min(__len1, __len2))
        ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:919:8: error: expected ‘)’ before ‘const’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:920:62: error: ‘__len’ was not declared in this scope
      if (int __result = __builtin_memcmp(__first1, __first2, __len))
                                                              ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:922:11: error: ‘__len1’ was not declared in this scope
    return __len1 < __len2;
           ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:922:20: error: ‘__len2’ was not declared in this scope
    return __len1 < __len2;
                    ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:40:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/postypes.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/postypes.h:98:11: error: ‘ptrdiff_t’ does not name a type
   typedef ptrdiff_t streamsize; // Signed integral type
           ^~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:104:66: error: ‘std::size_t’ has not been declared
       compare(const char_type* __s1, const char_type* __s2, std::size_t __n);
                                                                  ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:106:19: error: ‘size_t’ in namespace ‘std’ does not name a type
       static std::size_t
                   ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:110:39: error: ‘std::size_t’ has not been declared
       find(const char_type* __s, std::size_t __n, const char_type& __a);
                                       ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:113:57: error: ‘std::size_t’ has not been declared
       move(char_type* __s1, const char_type* __s2, std::size_t __n);
                                                         ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:116:57: error: ‘std::size_t’ has not been declared
       copy(char_type* __s1, const char_type* __s2, std::size_t __n);
                                                         ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:119:35: error: ‘std::size_t’ has not been declared
       assign(char_type* __s, std::size_t __n, char_type __a);
                                   ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:145:64: error: ‘std::size_t’ has not been declared
     compare(const char_type* __s1, const char_type* __s2, std::size_t __n)
                                                                ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h: In static member function ‘static int __gnu_cxx::char_traits<_CharT>::compare(const char_type*, const char_type*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:147:12: error: ‘size_t’ is not a member of ‘std’
       for (std::size_t __i = 0; __i < __n; ++__i)
            ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:147:12: note: suggested alternative:
In file included from /usr/include/wchar.h:51:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/cwchar:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/postypes.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/lib/gcc/x86_64-redhat-linux/6.3.1/include/stddef.h:216:23: note:   ‘size_t’
 typedef __SIZE_TYPE__ size_t;
                       ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:147:33: error: ‘__i’ was not declared in this scope
       for (std::size_t __i = 0; __i < __n; ++__i)
                                 ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:156:10: error: ‘size_t’ in namespace ‘std’ does not name a type
     std::size_t
          ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:169:37: error: ‘std::size_t’ has not been declared
     find(const char_type* __s, std::size_t __n, const char_type& __a)
                                     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h: In static member function ‘static const char_type* __gnu_cxx::char_traits<_CharT>::find(const char_type*, int, const char_type&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:171:12: error: ‘size_t’ is not a member of ‘std’
       for (std::size_t __i = 0; __i < __n; ++__i)
            ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:171:12: note: suggested alternative:
In file included from /usr/include/wchar.h:51:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/cwchar:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/postypes.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/lib/gcc/x86_64-redhat-linux/6.3.1/include/stddef.h:216:23: note:   ‘size_t’
 typedef __SIZE_TYPE__ size_t;
                       ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:171:33: error: ‘__i’ was not declared in this scope
       for (std::size_t __i = 0; __i < __n; ++__i)
                                 ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:180:55: error: ‘std::size_t’ has not been declared
     move(char_type* __s1, const char_type* __s2, std::size_t __n)
                                                       ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:189:55: error: ‘std::size_t’ has not been declared
     copy(char_type* __s1, const char_type* __s2, std::size_t __n)
                                                       ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:199:33: error: ‘std::size_t’ has not been declared
     assign(char_type* __s, std::size_t __n, char_type __a)
                                 ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/exception:170:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:33,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/c++allocator.h:33,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:46,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/exception_ptr.h:97:30: error: field ‘nullptr_t’ has incomplete type ‘std::__exception_ptr::exception_ptr’
       exception_ptr(nullptr_t) noexcept
                              ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/exception_ptr.h:77:11: note: definition of ‘class std::__exception_ptr::exception_ptr’ is not complete until the closing brace
     class exception_ptr
           ^~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/exception_ptr.h:97:30: error: expected ‘;’ at end of member declaration
       exception_ptr(nullptr_t) noexcept
                              ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/exception_ptr.h:97:32: error: expected unqualified-id before ‘noexcept’
       exception_ptr(nullptr_t) noexcept
                                ^~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:33:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/c++allocator.h:33,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:46,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:116:31: error: declaration of ‘operator new’ as non-function
 void* operator new(std::size_t) _GLIBCXX_THROW (std::bad_alloc)
                               ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:116:20: error: ‘size_t’ is not a member of ‘std’
 void* operator new(std::size_t) _GLIBCXX_THROW (std::bad_alloc)
                    ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:116:20: note: suggested alternative:
In file included from /usr/include/wchar.h:51:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/cwchar:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/postypes.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/lib/gcc/x86_64-redhat-linux/6.3.1/include/stddef.h:216:23: note:   ‘size_t’
 typedef __SIZE_TYPE__ size_t;
                       ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:33:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/c++allocator.h:33,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:46,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:118:33: error: declaration of ‘operator new []’ as non-function
 void* operator new[](std::size_t) _GLIBCXX_THROW (std::bad_alloc)
                                 ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:118:22: error: ‘size_t’ is not a member of ‘std’
 void* operator new[](std::size_t) _GLIBCXX_THROW (std::bad_alloc)
                      ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:118:22: note: suggested alternative:
In file included from /usr/include/wchar.h:51:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/cwchar:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/postypes.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/lib/gcc/x86_64-redhat-linux/6.3.1/include/stddef.h:216:23: note:   ‘size_t’
 typedef __SIZE_TYPE__ size_t;
                       ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:33:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/c++allocator.h:33,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:46,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:130:25: error: declaration of ‘operator new’ as non-function
 void* operator new(std::size_t, const std::nothrow_t&) _GLIBCXX_USE_NOEXCEPT
                         ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:130:20: error: ‘size_t’ is not a member of ‘std’
 void* operator new(std::size_t, const std::nothrow_t&) _GLIBCXX_USE_NOEXCEPT
                    ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:130:20: note: suggested alternative:
In file included from /usr/include/wchar.h:51:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/cwchar:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/postypes.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/lib/gcc/x86_64-redhat-linux/6.3.1/include/stddef.h:216:23: note:   ‘size_t’
 typedef __SIZE_TYPE__ size_t;
                       ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:33:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/c++allocator.h:33,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:46,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:130:33: error: expected primary-expression before ‘const’
 void* operator new(std::size_t, const std::nothrow_t&) _GLIBCXX_USE_NOEXCEPT
                                 ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:132:27: error: declaration of ‘operator new []’ as non-function
 void* operator new[](std::size_t, const std::nothrow_t&) _GLIBCXX_USE_NOEXCEPT
                           ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:132:22: error: ‘size_t’ is not a member of ‘std’
 void* operator new[](std::size_t, const std::nothrow_t&) _GLIBCXX_USE_NOEXCEPT
                      ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:132:22: note: suggested alternative:
In file included from /usr/include/wchar.h:51:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/cwchar:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/postypes.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/lib/gcc/x86_64-redhat-linux/6.3.1/include/stddef.h:216:23: note:   ‘size_t’
 typedef __SIZE_TYPE__ size_t;
                       ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:33:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/c++allocator.h:33,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:46,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:132:35: error: expected primary-expression before ‘const’
 void* operator new[](std::size_t, const std::nothrow_t&) _GLIBCXX_USE_NOEXCEPT
                                   ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:146:32: error: declaration of ‘operator new’ as non-function
 inline void* operator new(std::size_t, void* __p) _GLIBCXX_USE_NOEXCEPT
                                ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:146:27: error: ‘size_t’ is not a member of ‘std’
 inline void* operator new(std::size_t, void* __p) _GLIBCXX_USE_NOEXCEPT
                           ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:146:27: note: suggested alternative:
In file included from /usr/include/wchar.h:51:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/cwchar:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/postypes.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/lib/gcc/x86_64-redhat-linux/6.3.1/include/stddef.h:216:23: note:   ‘size_t’
 typedef __SIZE_TYPE__ size_t;
                       ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:33:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/c++allocator.h:33,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:46,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:146:40: error: expected primary-expression before ‘void’
 inline void* operator new(std::size_t, void* __p) _GLIBCXX_USE_NOEXCEPT
                                        ^~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:148:34: error: declaration of ‘operator new []’ as non-function
 inline void* operator new[](std::size_t, void* __p) _GLIBCXX_USE_NOEXCEPT
                                  ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:148:29: error: ‘size_t’ is not a member of ‘std’
 inline void* operator new[](std::size_t, void* __p) _GLIBCXX_USE_NOEXCEPT
                             ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:148:29: note: suggested alternative:
In file included from /usr/include/wchar.h:51:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/cwchar:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/postypes.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/lib/gcc/x86_64-redhat-linux/6.3.1/include/stddef.h:216:23: note:   ‘size_t’
 typedef __SIZE_TYPE__ size_t;
                       ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:33:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/c++allocator.h:33,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:46,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:148:42: error: expected primary-expression before ‘void’
 inline void* operator new[](std::size_t, void* __p) _GLIBCXX_USE_NOEXCEPT
                                          ^~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/c++allocator.h:33:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:46,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:44:14: error: ‘std::size_t’ has not been declared
   using std::size_t;
              ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:45:14: error: ‘std::ptrdiff_t’ has not been declared
   using std::ptrdiff_t;
              ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:62:15: error: ‘ptrdiff_t’ does not name a type
       typedef ptrdiff_t  difference_type;
               ^~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:72:15: error: ‘ptrdiff_t’ does not name a type
       typedef ptrdiff_t   difference_type;
               ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:112:15: error: ‘ptrdiff_t’ does not name a type
       typedef ptrdiff_t  difference_type;
               ^~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:44:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h:45:26: error: ‘streamsize’ has not been declared
       const _CharT* __s, streamsize __n)
                          ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h: In function ‘void std::__ostream_write(std::basic_ostream<_CharT, _Traits>&, const _CharT*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h:50:13: error: ‘streamsize’ does not name a type
       const streamsize __put = __out.rdbuf()->sputn(__s, __n);
             ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h:51:11: error: ‘__put’ was not declared in this scope
       if (__put != __n)
           ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h:57:59: error: ‘streamsize’ has not been declared
     __ostream_fill(basic_ostream<_CharT, _Traits>& __out, streamsize __n)
                                                           ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h:77:27: error: ‘streamsize’ has not been declared
        const _CharT* __s, streamsize __n)
                           ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h: In function ‘std::basic_ostream<_CharT, _Traits>& std::__ostream_insert(std::basic_ostream<_CharT, _Traits>&, const _CharT*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h:87:14: error: ‘streamsize’ does not name a type
        const streamsize __w = __out.width();
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h:88:12: error: ‘__w’ was not declared in this scope
        if (__w > __n)
            ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h:118:68: error: ‘streamsize’ has not been declared
   extern template ostream& __ostream_insert(ostream&, const char*, streamsize);
                                                                    ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h:122:11: error: ‘streamsize’ has not been declared
           streamsize);
           ^~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/alloc_traits.h:36:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/alloc_traits.h:404:36: error: ‘ptrdiff_t’ in namespace ‘std’ does not name a type
       using difference_type = std::ptrdiff_t;
                                    ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/alloc_traits.h:407:30: error: ‘size_t’ in namespace ‘std’ does not name a type
       using size_type = std::size_t;
                              ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/alloc_traits.h:435:37: error: ‘size_type’ has not been declared
       allocate(allocator_type& __a, size_type __n)
                                     ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/alloc_traits.h:449:37: error: ‘size_type’ has not been declared
       allocate(allocator_type& __a, size_type __n, const_void_pointer __hint)
                                     ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/alloc_traits.h:461:52: error: ‘size_type’ has not been declared
       deallocate(allocator_type& __a, pointer __p, size_type __n)
                                                    ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/alloc_traits.h:494:14: error: ‘size_type’ does not name a type
       static size_type
              ^~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:55:51: error: ‘std::size_t’ has not been declared
     const char* __name, const _CharT* __str, std::size_t* __idx,
                                                   ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:48: error: ‘std::size_t’ has not been declared
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
                                                ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:90:31: error: ‘std::size_t’ has not been declared
      __builtin_va_list), std::size_t __n,
                               ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In instantiation of ‘class std::basic_string<char>’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5428:68:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:2624:61: error: no type named ‘difference_type’ in ‘std::basic_string<char>::_CharT_alloc_type {aka class std::allocator<char>}’
       typedef typename _CharT_alloc_type::difference_type   difference_type;
                                                             ^~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘int std::stoi(const string&, size_t*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5429:19: error: no matching function for call to ‘__stoa(long int (*)(const char*, char**, int) throw (), const char [5], const char*, size_t*&, int&)’
      __idx, __base); }
                   ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5429:19: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
      __idx, __base); }
                   ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘long int std::stol(const string&, size_t*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5434:22: error: no matching function for call to ‘__stoa(long int (*)(const char*, char**, int) throw (), const char [5], const char*, size_t*&, int&)’
         __idx, __base); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5434:22: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
         __idx, __base); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘long unsigned int std::stoul(const string&, size_t*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5439:22: error: no matching function for call to ‘__stoa(long unsigned int (*)(const char*, char**, int) throw (), const char [6], const char*, size_t*&, int&)’
         __idx, __base); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5439:22: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
         __idx, __base); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘long long int std::stoll(const string&, size_t*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5444:22: error: no matching function for call to ‘__stoa(long long int (*)(const char*, char**, int) throw (), const char [6], const char*, size_t*&, int&)’
         __idx, __base); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5444:22: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
         __idx, __base); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘long long unsigned int std::stoull(const string&, size_t*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5449:22: error: no matching function for call to ‘__stoa(long long unsigned int (*)(const char*, char**, int) throw (), const char [7], const char*, size_t*&, int&)’
         __idx, __base); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5449:22: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
         __idx, __base); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘float std::stof(const string&, size_t*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5454:72: error: no matching function for call to ‘__stoa(float (*)(const char*, char**) throw (), const char [5], const char*, size_t*&)’
   { return __gnu_cxx::__stoa(&std::strtof, "stof", __str.c_str(), __idx); }
                                                                        ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5454:72: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
   { return __gnu_cxx::__stoa(&std::strtof, "stof", __str.c_str(), __idx); }
                                                                        ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘double std::stod(const string&, size_t*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5458:72: error: no matching function for call to ‘__stoa(double (*)(const char*, char**) throw (), const char [5], const char*, size_t*&)’
   { return __gnu_cxx::__stoa(&std::strtod, "stod", __str.c_str(), __idx); }
                                                                        ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5458:72: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
   { return __gnu_cxx::__stoa(&std::strtod, "stod", __str.c_str(), __idx); }
                                                                        ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘long double std::stold(const string&, size_t*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5462:74: error: no matching function for call to ‘__stoa(long double (*)(const char*, char**) throw (), const char [6], const char*, size_t*&)’
   { return __gnu_cxx::__stoa(&std::strtold, "stold", __str.c_str(), __idx); }
                                                                          ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5462:74: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
   { return __gnu_cxx::__stoa(&std::strtold, "stold", __str.c_str(), __idx); }
                                                                          ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::string std::to_string(int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5472:20: error: no matching function for call to ‘__to_xstring(int (*)(char*, size_t, const char*, __va_list_tag*) throw (), long unsigned int, const char [3], int&)’
         "%d", __val); }
                    ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5472:20: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
         "%d", __val); }
                    ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::string std::to_string(unsigned int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5478:20: error: no matching function for call to ‘__to_xstring(int (*)(char*, size_t, const char*, __va_list_tag*) throw (), long unsigned int, const char [3], unsigned int&)’
         "%u", __val); }
                    ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5478:20: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
         "%u", __val); }
                    ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::string std::to_string(long int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5483:21: error: no matching function for call to ‘__to_xstring(int (*)(char*, size_t, const char*, __va_list_tag*) throw (), long unsigned int, const char [4], long int&)’
         "%ld", __val); }
                     ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5483:21: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
         "%ld", __val); }
                     ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::string std::to_string(long unsigned int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5489:21: error: no matching function for call to ‘__to_xstring(int (*)(char*, size_t, const char*, __va_list_tag*) throw (), long unsigned int, const char [4], long unsigned int&)’
         "%lu", __val); }
                     ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5489:21: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
         "%lu", __val); }
                     ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::string std::to_string(long long int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5495:22: error: no matching function for call to ‘__to_xstring(int (*)(char*, size_t, const char*, __va_list_tag*) throw (), long unsigned int, const char [5], long long int&)’
         "%lld", __val); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5495:22: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
         "%lld", __val); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::string std::to_string(long long unsigned int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5501:22: error: no matching function for call to ‘__to_xstring(int (*)(char*, size_t, const char*, __va_list_tag*) throw (), long unsigned int, const char [5], long long unsigned int&)’
         "%llu", __val); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5501:22: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
         "%llu", __val); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::string std::to_string(float)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5509:20: error: no matching function for call to ‘__to_xstring(int (*)(char*, size_t, const char*, __va_list_tag*) throw (), const int&, const char [3], float&)’
         "%f", __val);
                    ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5509:20: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
         "%f", __val);
                    ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::string std::to_string(double)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5518:20: error: no matching function for call to ‘__to_xstring(int (*)(char*, size_t, const char*, __va_list_tag*) throw (), const int&, const char [3], double&)’
         "%f", __val);
                    ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5518:20: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
         "%f", __val);
                    ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::string std::to_string(long double)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5527:21: error: no matching function for call to ‘__to_xstring(int (*)(char*, size_t, const char*, __va_list_tag*) throw (), const int&, const char [4], long double&)’
         "%Lf", __val);
                     ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5527:21: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
         "%Lf", __val);
                     ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In instantiation of ‘class std::basic_string<wchar_t>’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5534:68:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:2624:61: error: no type named ‘difference_type’ in ‘std::basic_string<wchar_t>::_CharT_alloc_type {aka class std::allocator<wchar_t>}’
       typedef typename _CharT_alloc_type::difference_type   difference_type;
                                                             ^~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘int std::stoi(const wstring&, size_t*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5535:19: error: no matching function for call to ‘__stoa(long int (*)(const wchar_t*, wchar_t**, int) throw (), const char [5], const wchar_t*, size_t*&, int&)’
      __idx, __base); }
                   ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5535:19: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
      __idx, __base); }
                   ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘long int std::stol(const wstring&, size_t*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5540:22: error: no matching function for call to ‘__stoa(long int (*)(const wchar_t*, wchar_t**, int) throw (), const char [5], const wchar_t*, size_t*&, int&)’
         __idx, __base); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5540:22: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
         __idx, __base); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘long unsigned int std::stoul(const wstring&, size_t*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5545:22: error: no matching function for call to ‘__stoa(long unsigned int (*)(const wchar_t*, wchar_t**, int) throw (), const char [6], const wchar_t*, size_t*&, int&)’
         __idx, __base); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5545:22: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
         __idx, __base); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘long long int std::stoll(const wstring&, size_t*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5550:22: error: no matching function for call to ‘__stoa(long long int (*)(const wchar_t*, wchar_t**, int) throw (), const char [6], const wchar_t*, size_t*&, int&)’
         __idx, __base); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5550:22: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
         __idx, __base); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘long long unsigned int std::stoull(const wstring&, size_t*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5555:22: error: no matching function for call to ‘__stoa(long long unsigned int (*)(const wchar_t*, wchar_t**, int) throw (), const char [7], const wchar_t*, size_t*&, int&)’
         __idx, __base); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5555:22: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
         __idx, __base); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘float std::stof(const wstring&, size_t*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5560:72: error: no matching function for call to ‘__stoa(float (*)(const wchar_t*, wchar_t**) throw (), const char [5], const wchar_t*, size_t*&)’
   { return __gnu_cxx::__stoa(&std::wcstof, "stof", __str.c_str(), __idx); }
                                                                        ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5560:72: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
   { return __gnu_cxx::__stoa(&std::wcstof, "stof", __str.c_str(), __idx); }
                                                                        ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘double std::stod(const wstring&, size_t*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5564:72: error: no matching function for call to ‘__stoa(double (*)(const wchar_t*, wchar_t**) throw (), const char [5], const wchar_t*, size_t*&)’
   { return __gnu_cxx::__stoa(&std::wcstod, "stod", __str.c_str(), __idx); }
                                                                        ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5564:72: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
   { return __gnu_cxx::__stoa(&std::wcstod, "stod", __str.c_str(), __idx); }
                                                                        ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘long double std::stold(const wstring&, size_t*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5568:74: error: no matching function for call to ‘__stoa(long double (*)(const wchar_t*, wchar_t**) throw (), const char [6], const wchar_t*, size_t*&)’
   { return __gnu_cxx::__stoa(&std::wcstold, "stold", __str.c_str(), __idx); }
                                                                          ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5568:74: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
   { return __gnu_cxx::__stoa(&std::wcstold, "stold", __str.c_str(), __idx); }
                                                                          ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::wstring std::to_wstring(int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5575:22: error: no matching function for call to ‘__to_xstring(int (*)(wchar_t*, size_t, const wchar_t*, __va_list_tag*) throw (), long unsigned int, const wchar_t [3], int&)’
          L"%d", __val); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5575:22: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
          L"%d", __val); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::wstring std::to_wstring(unsigned int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5581:22: error: no matching function for call to ‘__to_xstring(int (*)(wchar_t*, size_t, const wchar_t*, __va_list_tag*) throw (), long unsigned int, const wchar_t [3], unsigned int&)’
          L"%u", __val); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5581:22: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
          L"%u", __val); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::wstring std::to_wstring(long int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5586:23: error: no matching function for call to ‘__to_xstring(int (*)(wchar_t*, size_t, const wchar_t*, __va_list_tag*) throw (), long unsigned int, const wchar_t [4], long int&)’
          L"%ld", __val); }
                       ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5586:23: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
          L"%ld", __val); }
                       ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::wstring std::to_wstring(long unsigned int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5592:23: error: no matching function for call to ‘__to_xstring(int (*)(wchar_t*, size_t, const wchar_t*, __va_list_tag*) throw (), long unsigned int, const wchar_t [4], long unsigned int&)’
          L"%lu", __val); }
                       ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5592:23: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
          L"%lu", __val); }
                       ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::wstring std::to_wstring(long long int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5598:24: error: no matching function for call to ‘__to_xstring(int (*)(wchar_t*, size_t, const wchar_t*, __va_list_tag*) throw (), long unsigned int, const wchar_t [5], long long int&)’
          L"%lld", __val); }
                        ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5598:24: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
          L"%lld", __val); }
                        ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::wstring std::to_wstring(long long unsigned int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5604:24: error: no matching function for call to ‘__to_xstring(int (*)(wchar_t*, size_t, const wchar_t*, __va_list_tag*) throw (), long unsigned int, const wchar_t [5], long long unsigned int&)’
          L"%llu", __val); }
                        ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5604:24: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
          L"%llu", __val); }
                        ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::wstring std::to_wstring(float)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5612:22: error: no matching function for call to ‘__to_xstring(int (*)(wchar_t*, size_t, const wchar_t*, __va_list_tag*) throw (), const int&, const wchar_t [3], float&)’
          L"%f", __val);
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5612:22: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
          L"%f", __val);
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::wstring std::to_wstring(double)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5621:22: error: no matching function for call to ‘__to_xstring(int (*)(wchar_t*, size_t, const wchar_t*, __va_list_tag*) throw (), const int&, const wchar_t [3], double&)’
          L"%f", __val);
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5621:22: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
          L"%f", __val);
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::wstring std::to_wstring(long double)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5630:23: error: no matching function for call to ‘__to_xstring(int (*)(wchar_t*, size_t, const wchar_t*, __va_list_tag*) throw (), const int&, const wchar_t [4], long double&)’
          L"%Lf", __val);
                       ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5630:23: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
          L"%Lf", __val);
                       ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In instantiation of ‘class std::basic_string<char16_t>’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5692:41:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:2624:61: error: no type named ‘difference_type’ in ‘std::basic_string<char16_t>::_CharT_alloc_type {aka class std::allocator<char16_t>}’
       typedef typename _CharT_alloc_type::difference_type   difference_type;
                                                             ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In instantiation of ‘class std::basic_string<char32_t>’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5707:41:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:2624:61: error: no type named ‘difference_type’ in ‘std::basic_string<char32_t>::_CharT_alloc_type {aka class std::allocator<char32_t>}’
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:53:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.tcc: In function ‘std::basic_istream<_CharT, _Traits>& std::operator>>(std::basic_istream<_CharT, _Traits>&, std::basic_string<_CharT, _Traits, _Alloc>&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.tcc:1459:14: error: ‘streamsize’ does not name a type
        const streamsize __w = __in.width();
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.tcc:1460:32: error: ‘__w’ was not declared in this scope
        const __size_type __n = __w > 0 ? static_cast<__size_type>(__w)
                                ^~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ios:42:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:38,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:39,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ios_base.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ios_base.h:520:5: error: ‘streamsize’ does not name a type
     streamsize  _M_precision;
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ios_base.h:521:5: error: ‘streamsize’ does not name a type
     streamsize  _M_width;
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ios_base.h:688:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ios_base.h:697:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ios_base.h:711:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ios_base.h:720:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ios:43:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:38,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:39,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:50:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:147:14: error: ‘streamsize’ does not name a type
       friend streamsize
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:239:33: error: ‘streamsize’ has not been declared
       pubsetbuf(char_type* __s, streamsize __n)
                                 ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:283:7: error: ‘streamsize’ does not name a type
       streamsize
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:356:7: error: ‘streamsize’ does not name a type
       streamsize
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:449:7: error: ‘streamsize’ does not name a type
       streamsize
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:591:26: error: ‘streamsize’ has not been declared
       setbuf(char_type*, streamsize)
                          ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:648:15: error: ‘streamsize’ does not name a type
       virtual streamsize
               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:664:15: error: ‘streamsize’ does not name a type
       virtual streamsize
               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:741:15: error: ‘streamsize’ does not name a type
       virtual streamsize
               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:794:20: error: ‘streamsize’ has not been declared
       __safe_gbump(streamsize __n) { _M_in_cur += __n; }
                    ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:797:20: error: ‘streamsize’ has not been declared
       __safe_pbump(streamsize __n) { _M_out_cur += __n; }
                    ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:837:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:842:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:850:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ios:43,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:38,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:39,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:44:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:78:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:115:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:138:12: error: ‘streamsize’ does not name a type
     inline streamsize
            ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:151:5: error: ‘streamsize’ is not a template function
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:152:5: error: expected ‘;’ before ‘__copy_streambufs’
     __copy_streambufs(basic_streambuf<char>*,
     ^~~~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:155:5: error: ‘streamsize’ is not a template function
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:156:5: error: expected ‘;’ before ‘__copy_streambufs_eof’
     __copy_streambufs_eof(basic_streambuf<char>*,
     ^~~~~~~~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:162:5: error: ‘streamsize’ is not a template function
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:163:5: error: expected ‘;’ before ‘__copy_streambufs’
     __copy_streambufs(basic_streambuf<wchar_t>*,
     ^~~~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:166:5: error: ‘streamsize’ is not a template function
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:167:5: error: expected ‘;’ before ‘__copy_streambufs_eof’
     __copy_streambufs_eof(basic_streambuf<wchar_t>*,
     ^~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.h:48:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_ios.h:37,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ios:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:38,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:39,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h:279:34: error: ‘streamsize’ has not been declared
       _M_put(const _CharT* __ws, streamsize __len)
                                  ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h: In function ‘typename __gnu_cxx::__enable_if<std::__is_char<_CharT>::__value, std::ostreambuf_iterator<_CharT, std::char_traits<_CharT> > >::__type std::__copy_move_a2(_CharT*, _CharT*, std::ostreambuf_iterator<_CharT, std::char_traits<_CharT> >)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h:313:13: error: ‘streamsize’ does not name a type
       const streamsize __num = __last - __first;
             ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h:314:11: error: ‘__num’ was not declared in this scope
       if (__num > 0)
           ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h: In function ‘typename __gnu_cxx::__enable_if<std::__is_char<_CharT>::__value, std::ostreambuf_iterator<_CharT, std::char_traits<_CharT> > >::__type std::__copy_move_a2(const _CharT*, const _CharT*, std::ostreambuf_iterator<_CharT, std::char_traits<_CharT> >)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h:325:13: error: ‘streamsize’ does not name a type
       const streamsize __num = __last - __first;
             ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h:326:11: error: ‘__num’ was not declared in this scope
       if (__num > 0)
           ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h: In function ‘typename __gnu_cxx::__enable_if<std::__is_char<_CharT>::__value, _CharT*>::__type std::__copy_move_a2(std::istreambuf_iterator<_CharT, std::char_traits<_CharT> >, std::istreambuf_iterator<_CharT, std::char_traits<_CharT> >, _CharT*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h:348:14: error: ‘streamsize’ does not name a type
        const streamsize __n = __sb->egptr() - __sb->gptr();
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h:349:12: error: ‘__n’ was not declared in this scope
        if (__n > 1)
            ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h: In function ‘typename __gnu_cxx::__enable_if<std::__is_char<_CharT2>::__value, std::istreambuf_iterator<_CharT> >::__type std::find(std::istreambuf_iterator<_CharT>, std::istreambuf_iterator<_CharT>, const _CharT2&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h:385:8: error: ‘streamsize’ was not declared in this scope
        streamsize __n = __sb->egptr() - __sb->gptr();
        ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h:386:12: error: ‘__n’ was not declared in this scope
        if (__n > 1)
            ^~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_ios.h:37:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ios:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:38,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:39,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.h:99:29: error: ‘streamsize’ has not been declared
       const _CharT* __olds, streamsize __newlen, streamsize __oldlen);
                             ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.h:99:50: error: ‘streamsize’ has not been declared
       const _CharT* __olds, streamsize __newlen, streamsize __oldlen);
                                                  ^~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_ios.h:37:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ios:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:38,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:39,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.h:2484:32: error: ‘streamsize’ has not been declared
       _M_pad(char_type __fill, streamsize __w, ios_base& __io,
                                ^~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.h:2651:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_ios.h:37,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ios:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:38,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:39,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:780:27: error: ‘streamsize’ has not been declared
     _M_pad(_CharT __fill, streamsize __w, ios_base& __io,
                           ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc: In member function ‘_OutIter std::num_put<_CharT, _OutIter>::_M_insert_int(_OutIter, std::ios_base&, _CharT, _ValueT) const’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:921:8: error: ‘streamsize’ does not name a type
  const streamsize __w = __io.width();
        ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:922:6: error: ‘__w’ was not declared in this scope
  if (__w > static_cast<streamsize>(__len))
      ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:922:24: error: ‘streamsize’ does not name a type
  if (__w > static_cast<streamsize>(__len))
                        ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:929:7: error: ‘class std::ios_base’ has no member named ‘width’
  __io.width(0);
       ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc: In member function ‘_OutIter std::num_put<_CharT, _OutIter>::_M_insert_float(_OutIter, std::ios_base&, _CharT, char, _ValueT) const’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:984:8: error: ‘streamsize’ does not name a type
  const streamsize __prec = __io.precision() < 0 ? 6 : __io.precision();
        ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1006:14: error: ‘__prec’ was not declared in this scope
      __fbuf, __prec, __v);
              ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1018:18: error: ‘__prec’ was not declared in this scope
          __fbuf, __prec, __v);
                  ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1071:6: error: ‘streamsize’ was not declared in this scope
      streamsize __off = 0;
      ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1074:3: error: ‘__off’ was not declared in this scope
   __off = 1;
   ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1080:45: error: ‘__off’ was not declared in this scope
       __lc->_M_thousands_sep, __wp, __ws2 + __off,
                                             ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1088:8: error: ‘streamsize’ does not name a type
  const streamsize __w = __io.width();
        ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1089:6: error: ‘__w’ was not declared in this scope
  if (__w > static_cast<streamsize>(__len))
      ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1089:24: error: ‘streamsize’ does not name a type
  if (__w > static_cast<streamsize>(__len))
                        ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1096:7: error: ‘class std::ios_base’ has no member named ‘width’
  __io.width(0);
       ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc: In member function ‘virtual _OutIter std::num_put<_CharT, _OutIter>::do_put(std::num_put<_CharT, _OutIter>::iter_type, std::ios_base&, std::num_put<_CharT, _OutIter>::char_type, bool) const’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1126:10: error: ‘streamsize’ does not name a type
    const streamsize __w = __io.width();
          ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1127:8: error: ‘__w’ was not declared in this scope
    if (__w > static_cast<streamsize>(__len))
        ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1127:26: error: ‘streamsize’ does not name a type
    if (__w > static_cast<streamsize>(__len))
                          ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1129:14: error: ‘streamsize’ does not name a type
        const streamsize __plen = __w - __len;
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1132:10: error: ‘__plen’ was not declared in this scope
        * __plen));
          ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1135:13: error: ‘class std::ios_base’ has no member named ‘width’
        __io.width(0);
             ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1149:9: error: ‘class std::ios_base’ has no member named ‘width’
    __io.width(0);
         ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1210:8: error: ‘streamsize’ has not been declared
        streamsize __newlen, streamsize __oldlen)
        ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1210:29: error: ‘streamsize’ has not been declared
        streamsize __newlen, streamsize __oldlen)
                             ^~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:39:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:311:38: error: ‘streamsize’ has not been declared
       _M_write(const char_type* __s, streamsize __n)
                                      ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:335:35: error: ‘streamsize’ has not been declared
       write(const char_type* __s, streamsize __n);
                                   ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream: In member function ‘void std::basic_ostream<_CharT, _Traits>::_M_write(const char_type*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:313:8: error: ‘streamsize’ does not name a type
  const streamsize __put = this->rdbuf()->sputn(__s, __n);
        ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:314:6: error: ‘__put’ was not declared in this scope
  if (__put != __n)
      ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream: In function ‘std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, const _CharT*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:545:17: error: ‘streamsize’ does not name a type
     static_cast<streamsize>(_Traits::length(__s)));
                 ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream: In function ‘std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, _Traits>&, const char*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:562:17: error: ‘streamsize’ does not name a type
     static_cast<streamsize>(_Traits::length(__s)));
                 ^~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:638:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:39,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream.tcc: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream.tcc:183:30: error: ‘streamsize’ has not been declared
     write(const _CharT* __s, streamsize __n)
                              ^~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:40:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:82:7: error: ‘streamsize’ does not name a type
       streamsize   _M_gcount;
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:268:7: error: ‘streamsize’ does not name a type
       streamsize
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:343:27: error: ‘streamsize’ has not been declared
       get(char_type* __s, streamsize __n, char_type __delim);
                           ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:354:27: error: ‘streamsize’ has not been declared
       get(char_type* __s, streamsize __n)
                           ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:416:31: error: ‘streamsize’ has not been declared
       getline(char_type* __s, streamsize __n, char_type __delim);
                               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:427:31: error: ‘streamsize’ has not been declared
       getline(char_type* __s, streamsize __n)
                               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:451:7: error: expected ‘;’ at end of member declaration
       ignore(streamsize __n, int_type __delim);
       ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:451:25: error: expected ‘)’ before ‘__n’
       ignore(streamsize __n, int_type __delim);
                         ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:454:7: error: expected ‘;’ at end of member declaration
       ignore(streamsize __n);
       ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:454:14: error: redeclaration of ‘std::basic_istream<_CharT, _Traits>::__istream_type& std::basic_istream<_CharT, _Traits>::ignore’
       ignore(streamsize __n);
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:451:14: note: previous declaration ‘std::basic_istream<_CharT, _Traits>::__istream_type& std::basic_istream<_CharT, _Traits>::ignore’
       ignore(streamsize __n, int_type __delim);
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:454:25: error: expected ‘)’ before ‘__n’
       ignore(streamsize __n);
                         ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:457:14: error: ‘std::basic_istream<_CharT, _Traits>::__istream_type& std::basic_istream<_CharT, _Traits>::ignore()’ conflicts with a previous declaration
       ignore();
              ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:451:14: note: previous declaration ‘std::basic_istream<_CharT, _Traits>::__istream_type& std::basic_istream<_CharT, _Traits>::ignore’
       ignore(streamsize __n, int_type __delim);
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:486:28: error: ‘streamsize’ has not been declared
       read(char_type* __s, streamsize __n);
                            ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:504:7: error: ‘streamsize’ does not name a type
       streamsize
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream: In constructor ‘std::basic_istream<_CharT, _Traits>::basic_istream(std::basic_istream<_CharT, _Traits>::__streambuf_type*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:94:9: error: class ‘std::basic_istream<_CharT, _Traits>’ does not have any field named ‘_M_gcount’
       : _M_gcount(streamsize(0))
         ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:94:31: error: there are no arguments to ‘streamsize’ that depend on a template parameter, so a declaration of ‘streamsize’ must be available [-fpermissive]
       : _M_gcount(streamsize(0))
                               ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:94:31: note: (if you use ‘-fpermissive’, G++ will accept your code, but allowing the use of an undeclared name is deprecated)
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream: In destructor ‘virtual std::basic_istream<_CharT, _Traits>::~basic_istream()’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:104:9: error: ‘_M_gcount’ was not declared in this scope
       { _M_gcount = streamsize(0); }
         ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:104:33: error: there are no arguments to ‘streamsize’ that depend on a template parameter, so a declaration of ‘streamsize’ must be available [-fpermissive]
       { _M_gcount = streamsize(0); }
                                 ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream: In constructor ‘std::basic_istream<_CharT, _Traits>::basic_istream()’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:607:9: error: class ‘std::basic_istream<_CharT, _Traits>’ does not have any field named ‘_M_gcount’
       : _M_gcount(streamsize(0))
         ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:607:31: error: there are no arguments to ‘streamsize’ that depend on a template parameter, so a declaration of ‘streamsize’ must be available [-fpermissive]
       : _M_gcount(streamsize(0))
                               ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream: In constructor ‘std::basic_istream<_CharT, _Traits>::basic_istream(std::basic_istream<_CharT, _Traits>&&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:614:23: error: class ‘std::basic_istream<_CharT, _Traits>’ does not have any field named ‘_M_gcount’
       : __ios_type(), _M_gcount(__rhs._M_gcount)
                       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream: In member function ‘void std::basic_istream<_CharT, _Traits>::swap(std::basic_istream<_CharT, _Traits>&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:635:12: error: ‘_M_gcount’ was not declared in this scope
  std::swap(_M_gcount, __rhs._M_gcount);
            ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream: In instantiation of ‘class std::basic_istream<char>’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:647:24:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:451:14: error: ‘std::basic_istream<_CharT, _Traits>::__istream_type& std::basic_istream<_CharT, _Traits>::ignore() [with _CharT = char; _Traits = std::char_traits<char>; std::basic_istream<_CharT, _Traits>::__istream_type = std::basic_istream<char>]’ conflicts with a previous declaration
       ignore(streamsize __n, int_type __delim);
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:451:14: note: previous declaration ‘std::basic_istream<char>::__istream_type& std::basic_istream<char>::ignore’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:648:29: error: ‘streamsize’ has not been declared
     getline(char_type* __s, streamsize __n, char_type __delim);
                             ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:653:12: error: ‘std::basic_istream<char>& std::basic_istream<char>::ignore’ is not a static data member of ‘class std::basic_istream<char>’
     ignore(streamsize __n);
            ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:653:12: error: ‘streamsize’ was not declared in this scope
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:658:12: error: ‘std::basic_istream<char>& std::basic_istream<char>::ignore’ is not a static data member of ‘class std::basic_istream<char>’
     ignore(streamsize __n, int_type __delim);
            ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:658:12: error: ‘streamsize’ was not declared in this scope
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:658:37: error: expected primary-expression before ‘__delim’
     ignore(streamsize __n, int_type __delim);
                                     ^~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:658:44: error: expression list treated as compound expression in initializer [-fpermissive]
     ignore(streamsize __n, int_type __delim);
                                            ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream: In instantiation of ‘class std::basic_istream<wchar_t>’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:663:27:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:451:14: error: ‘std::basic_istream<_CharT, _Traits>::__istream_type& std::basic_istream<_CharT, _Traits>::ignore() [with _CharT = wchar_t; _Traits = std::char_traits<wchar_t>; std::basic_istream<_CharT, _Traits>::__istream_type = std::basic_istream<wchar_t>]’ conflicts with a previous declaration
       ignore(streamsize __n, int_type __delim);
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:451:14: note: previous declaration ‘std::basic_istream<wchar_t>::__istream_type& std::basic_istream<wchar_t>::ignore’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:664:29: error: ‘streamsize’ has not been declared
     getline(char_type* __s, streamsize __n, char_type __delim);
                             ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:669:12: error: ‘std::basic_istream<wchar_t>& std::basic_istream<wchar_t>::ignore’ is not a static data member of ‘class std::basic_istream<wchar_t>’
     ignore(streamsize __n);
            ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:669:12: error: ‘streamsize’ was not declared in this scope
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:674:12: error: ‘std::basic_istream<wchar_t>& std::basic_istream<wchar_t>::ignore’ is not a static data member of ‘class std::basic_istream<wchar_t>’
     ignore(streamsize __n, int_type __delim);
            ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:674:12: error: ‘streamsize’ was not declared in this scope
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:674:37: error: expected primary-expression before ‘__delim’
     ignore(streamsize __n, int_type __delim);
                                     ^~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:674:44: error: expression list treated as compound expression in initializer [-fpermissive]
     ignore(streamsize __n, int_type __delim);
                                            ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:934:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In member function ‘std::basic_istream<_CharT, _Traits>::int_type std::basic_istream<_CharT, _Traits>::get()’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:240:7: error: ‘_M_gcount’ was not declared in this scope
       _M_gcount = 0;
       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In member function ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::get(std::basic_istream<_CharT, _Traits>::char_type&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:274:7: error: ‘_M_gcount’ was not declared in this scope
       _M_gcount = 0;
       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:309:25: error: ‘streamsize’ has not been declared
     get(char_type* __s, streamsize __n, char_type __delim)
                         ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In member function ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::get(std::basic_istream<_CharT, _Traits>::char_type*, int, std::basic_istream<_CharT, _Traits>::char_type)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:311:7: error: ‘_M_gcount’ was not declared in this scope
       _M_gcount = 0;
       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In member function ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::get(std::basic_istream<_CharT, _Traits>::__streambuf_type&, std::basic_istream<_CharT, _Traits>::char_type)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:358:7: error: ‘_M_gcount’ was not declared in this scope
       _M_gcount = 0;
       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:400:29: error: ‘streamsize’ has not been declared
     getline(char_type* __s, streamsize __n, char_type __delim)
                             ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In member function ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::getline(std::basic_istream<_CharT, _Traits>::char_type*, int, std::basic_istream<_CharT, _Traits>::char_type)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:402:7: error: ‘_M_gcount’ was not declared in this scope
       _M_gcount = 0;
       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In member function ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::ignore()’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:462:7: error: ‘_M_gcount’ was not declared in this scope
       _M_gcount = 0;
       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:493:12: error: ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::ignore’ is not a static data member of ‘class std::basic_istream<_CharT, _Traits>’
     ignore(streamsize __n)
            ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:493:12: error: template definition of non-template ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::ignore’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:493:12: error: ‘streamsize’ was not declared in this scope
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:555:12: error: ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::ignore’ is not a static data member of ‘class std::basic_istream<_CharT, _Traits>’
     ignore(streamsize __n, int_type __delim)
            ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:555:12: error: template definition of non-template ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::ignore’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:555:12: error: ‘streamsize’ was not declared in this scope
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:555:37: error: expected primary-expression before ‘__delim’
     ignore(streamsize __n, int_type __delim)
                                     ^~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In member function ‘std::basic_istream<_CharT, _Traits>::int_type std::basic_istream<_CharT, _Traits>::peek()’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:623:7: error: ‘_M_gcount’ was not declared in this scope
       _M_gcount = 0;
       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:650:26: error: ‘streamsize’ has not been declared
     read(char_type* __s, streamsize __n)
                          ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In member function ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::read(std::basic_istream<_CharT, _Traits>::char_type*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:652:7: error: ‘_M_gcount’ was not declared in this scope
       _M_gcount = 0;
       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:677:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In member function ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::putback(std::basic_istream<_CharT, _Traits>::char_type)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:715:7: error: ‘_M_gcount’ was not declared in this scope
       _M_gcount = 0;
       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In member function ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::unget()’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:750:7: error: ‘_M_gcount’ was not declared in this scope
       _M_gcount = 0;
       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In function ‘std::basic_istream<_CharT, _Traits>& std::operator>>(std::basic_istream<_CharT, _Traits>&, _CharT2*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:963:7: error: ‘streamsize’ was not declared in this scope
       streamsize __extracted = 0;
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:971:19: error: expected ‘;’ before ‘__num’
        streamsize __num = __in.width();
                   ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:972:12: error: ‘__num’ was not declared in this scope
        if (__num <= 0)
            ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:973:39: error: the value of ‘streamsize’ is not usable in a constant expression
   __num = __gnu_cxx::__numeric_traits<streamsize>::__max;
                                       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:963:7: note: ‘streamsize’ was not declared ‘constexpr’
       streamsize __extracted = 0;
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:973:49: error: type/value mismatch at argument 1 in template parameter list for ‘template<class _Value> struct __gnu_cxx::__numeric_traits’
   __num = __gnu_cxx::__numeric_traits<streamsize>::__max;
                                                 ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:973:49: note:   expected a type, got ‘streamsize’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:981:15: error: ‘__extracted’ was not declared in this scope
        while (__extracted < __num - 1
               ^~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:981:29: error: ‘__num’ was not declared in this scope
        while (__extracted < __num - 1
                             ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:1006:12: error: ‘__extracted’ was not declared in this scope
       if (!__extracted)
            ^~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:64:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:239:15: error: ‘ptrdiff_t’ does not name a type
       typedef ptrdiff_t      difference_type;
               ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h: In member function ‘std::vector<_Tp, _Alloc>::iterator std::vector<_Tp, _Alloc>::insert(std::vector<_Tp, _Alloc>::const_iterator, std::vector<_Tp, _Alloc>::size_type, const value_type&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:1054:2: error: ‘difference_type’ was not declared in this scope
  difference_type __offset = __position - cbegin();
  ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:1055:27: error: ‘__offset’ was not declared in this scope
  _M_fill_insert(begin() + __offset, __n, __x);
                           ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h: In member function ‘std::vector<_Tp, _Alloc>::iterator std::vector<_Tp, _Alloc>::insert(std::vector<_Tp, _Alloc>::const_iterator, _InputIterator, _InputIterator)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:1099:4: error: ‘difference_type’ was not declared in this scope
    difference_type __offset = __position - cbegin();
    ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:1100:33: error: ‘__offset’ was not declared in this scope
    _M_insert_dispatch(begin() + __offset,
                                 ^~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:65:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:137:63: error: template argument 3 is invalid
   : public std::iterator<std::random_access_iterator_tag, bool>
                                                               ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:166:13: error: ‘ptrdiff_t’ has not been declared
     _M_incr(ptrdiff_t __i)
             ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘void std::_Bit_iterator_base::_M_incr(int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:168:7: error: ‘difference_type’ was not declared in this scope
       difference_type __n = __i + _M_offset;
       ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:169:15: error: ‘__n’ was not declared in this scope
       _M_p += __n / int(_S_word_bit);
               ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:207:10: error: ‘ptrdiff_t’ does not name a type
   inline ptrdiff_t
          ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:264:16: error: declaration of ‘operator+=’ as non-function
     operator+=(difference_type __i)
                ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:264:13: error: expected ‘;’ at end of member declaration
     operator+=(difference_type __i)
             ^~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:264:32: error: expected ‘)’ before ‘__i’
     operator+=(difference_type __i)
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:271:16: error: declaration of ‘operator-=’ as non-function
     operator-=(difference_type __i)
                ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:271:13: error: expected ‘;’ at end of member declaration
     operator-=(difference_type __i)
             ^~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:271:32: error: expected ‘)’ before ‘__i’
     operator-=(difference_type __i)
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:278:15: error: ‘difference_type’ has not been declared
     operator+(difference_type __i) const
               ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:285:15: error: ‘difference_type’ has not been declared
     operator-(difference_type __i) const
               ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:292:16: error: ‘difference_type’ has not been declared
     operator[](difference_type __i) const
                ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘std::_Bit_iterator::iterator std::_Bit_iterator::operator+(int) const’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:281:20: error: no match for ‘operator+=’ (operand types are ‘std::_Bit_iterator::iterator {aka std::_Bit_iterator}’ and ‘int’)
       return __tmp += __i;
              ~~~~~~^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘std::_Bit_iterator::iterator std::_Bit_iterator::operator-(int) const’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:288:20: error: no match for ‘operator-=’ (operand types are ‘std::_Bit_iterator::iterator {aka std::_Bit_iterator}’ and ‘int’)
       return __tmp -= __i;
              ~~~~~~^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:297:13: error: declaration of ‘operator+’ as non-function
   operator+(ptrdiff_t __n, const _Bit_iterator& __x)
             ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:297:13: error: ‘ptrdiff_t’ was not declared in this scope
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:297:28: error: expected primary-expression before ‘const’
   operator+(ptrdiff_t __n, const _Bit_iterator& __x)
                            ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:354:16: error: declaration of ‘operator+=’ as non-function
     operator+=(difference_type __i)
                ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:354:13: error: expected ‘;’ at end of member declaration
     operator+=(difference_type __i)
             ^~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:354:32: error: expected ‘)’ before ‘__i’
     operator+=(difference_type __i)
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:361:16: error: declaration of ‘operator-=’ as non-function
     operator-=(difference_type __i)
                ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:361:13: error: expected ‘;’ at end of member declaration
     operator-=(difference_type __i)
             ^~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:361:32: error: expected ‘)’ before ‘__i’
     operator-=(difference_type __i)
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:368:15: error: ‘difference_type’ has not been declared
     operator+(difference_type __i) const
               ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:375:15: error: ‘difference_type’ has not been declared
     operator-(difference_type __i) const
               ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:382:16: error: ‘difference_type’ has not been declared
     operator[](difference_type __i) const
                ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘std::_Bit_const_iterator::const_iterator std::_Bit_const_iterator::operator+(int) const’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:371:20: error: no match for ‘operator+=’ (operand types are ‘std::_Bit_const_iterator::const_iterator {aka std::_Bit_const_iterator}’ and ‘int’)
       return __tmp += __i;
              ~~~~~~^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘std::_Bit_const_iterator::const_iterator std::_Bit_const_iterator::operator-(int) const’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:378:20: error: no match for ‘operator-=’ (operand types are ‘std::_Bit_const_iterator::const_iterator {aka std::_Bit_const_iterator}’ and ‘int’)
       return __tmp -= __i;
              ~~~~~~^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:387:13: error: declaration of ‘operator+’ as non-function
   operator+(ptrdiff_t __n, const _Bit_const_iterator& __x)
             ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:387:13: error: ‘ptrdiff_t’ was not declared in this scope
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:387:28: error: expected primary-expression before ‘const’
   operator+(ptrdiff_t __n, const _Bit_const_iterator& __x)
                            ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:554:13: error: ‘ptrdiff_t’ does not name a type
     typedef ptrdiff_t                                    difference_type;
             ^~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:67:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h: In instantiation of ‘class std::reverse_iterator<std::_Bit_iterator>’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:796:5:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:97:11: error: no type named ‘iterator_category’ in ‘struct std::iterator_traits<std::_Bit_iterator>’
     class reverse_iterator
           ^~~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:111:55: error: no type named ‘difference_type’ in ‘struct std::iterator_traits<std::_Bit_iterator>’
       typedef typename __traits_type::difference_type difference_type;
                                                       ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:112:48: error: no type named ‘pointer’ in ‘struct std::iterator_traits<std::_Bit_iterator>’
       typedef typename __traits_type::pointer  pointer;
                                                ^~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:113:50: error: no type named ‘reference’ in ‘struct std::iterator_traits<std::_Bit_iterator>’
       typedef typename __traits_type::reference  reference;
                                                  ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h: In instantiation of ‘class std::reverse_iterator<std::_Bit_const_iterator>’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:800:5:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:97:11: error: no type named ‘iterator_category’ in ‘struct std::iterator_traits<std::_Bit_const_iterator>’
     class reverse_iterator
           ^~~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:111:55: error: no type named ‘difference_type’ in ‘struct std::iterator_traits<std::_Bit_const_iterator>’
       typedef typename __traits_type::difference_type difference_type;
                                                       ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:112:48: error: no type named ‘pointer’ in ‘struct std::iterator_traits<std::_Bit_const_iterator>’
       typedef typename __traits_type::pointer  pointer;
                                                ^~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:113:50: error: no type named ‘reference’ in ‘struct std::iterator_traits<std::_Bit_const_iterator>’
       typedef typename __traits_type::reference  reference;
                                                  ^~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:65:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘std::vector<bool, _Alloc>::size_type std::vector<bool, _Alloc>::max_size() const’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:836:30: error: ‘difference_type’ was not declared in this scope
  __gnu_cxx::__numeric_traits<difference_type>::__max
                              ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:836:45: error: template argument 1 is invalid
  __gnu_cxx::__numeric_traits<difference_type>::__max
                                             ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘std::vector<bool, _Alloc>::iterator std::vector<bool, _Alloc>::insert(std::vector<bool, _Alloc>::const_iterator, const bool&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:956:13: error: ‘difference_type’ does not name a type
       const difference_type __n = __position - begin();
             ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:962:24: error: ‘__n’ was not declared in this scope
       return begin() + __n;
                        ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘std::vector<bool, _Alloc>::iterator std::vector<bool, _Alloc>::insert(std::vector<bool, _Alloc>::const_iterator, _InputIterator, _InputIterator)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:972:2: error: ‘difference_type’ was not declared in this scope
  difference_type __offset = __position - cbegin();
  ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:975:19: error: ‘__offset’ was not declared in this scope
  return begin() + __offset;
                   ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘std::vector<bool, _Alloc>::iterator std::vector<bool, _Alloc>::insert(std::vector<bool, _Alloc>::const_iterator, std::vector<bool, _Alloc>::size_type, const bool&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:992:7: error: ‘difference_type’ was not declared in this scope
       difference_type __offset = __position - cbegin();
       ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:994:24: error: ‘__offset’ was not declared in this scope
       return begin() + __offset;
                        ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘void std::vector<bool, _Alloc>::resize(std::vector<bool, _Alloc>::size_type, bool)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:1032:61: error: there are no arguments to ‘difference_type’ that depend on a template parameter, so a declaration of ‘difference_type’ must be available [-fpermissive]
         _M_erase_at_end(begin() + difference_type(__new_size));
                                                             ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘void std::vector<bool, _Alloc>::_M_initialize(std::vector<bool, _Alloc>::size_type)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:1084:77: error: there are no arguments to ‘difference_type’ that depend on a template parameter, so a declaration of ‘difference_type’ must be available [-fpermissive]
       this->_M_impl._M_finish = this->_M_impl._M_start + difference_type(__n);
                                                                             ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc: In member function ‘void std::vector<bool, _Alloc>::_M_fill_insert(std::vector<bool, _Alloc>::iterator, std::vector<bool, _Alloc>::size_type, bool)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:720:54: error: there are no arguments to ‘difference_type’ that depend on a template parameter, so a declaration of ‘difference_type’ must be available [-fpermissive]
         this->_M_impl._M_finish + difference_type(__n));
                                                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:721:58: error: there are no arguments to ‘difference_type’ that depend on a template parameter, so a declaration of ‘difference_type’ must be available [-fpermissive]
    std::fill(__position, __position + difference_type(__n), __x);
                                                          ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:722:50: error: there are no arguments to ‘difference_type’ that depend on a template parameter, so a declaration of ‘difference_type’ must be available [-fpermissive]
    this->_M_impl._M_finish += difference_type(__n);
                                                  ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:731:44: error: there are no arguments to ‘difference_type’ that depend on a template parameter, so a declaration of ‘difference_type’ must be available [-fpermissive]
    std::fill(__i, __i + difference_type(__n), __x);
                                            ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:733:37: error: there are no arguments to ‘difference_type’ that depend on a template parameter, so a declaration of ‘difference_type’ must be available [-fpermissive]
            __i + difference_type(__n));
                                     ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc: In member function ‘void std::vector<bool, _Alloc>::_M_insert_range(std::vector<bool, _Alloc>::iterator, _ForwardIterator, _ForwardIterator, std::forward_iterator_tag)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:754:29: error: there are no arguments to ‘difference_type’ that depend on a template parameter, so a declaration of ‘difference_type’ must be available [-fpermissive]
        + difference_type(__n));
                             ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:756:49: error: there are no arguments to ‘difference_type’ that depend on a template parameter, so a declaration of ‘difference_type’ must be available [-fpermissive]
   this->_M_impl._M_finish += difference_type(__n);
                                                 ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:10:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/sstream: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/sstream:210:15: error: ‘streamsize’ does not name a type
       virtual streamsize
               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/sstream:243:30: error: ‘streamsize’ has not been declared
       setbuf(char_type* __s, streamsize __n)
                              ^~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/fstream:42:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:11,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/basic_file.h:107:7: error: ‘streamsize’ does not name a type
       streamsize
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/basic_file.h:110:7: error: ‘streamsize’ does not name a type
       streamsize
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/basic_file.h:114:7: error: ‘streamsize’ does not name a type
       streamsize
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/basic_file.h:123:7: error: ‘streamsize’ does not name a type
       streamsize
       ^~~~~~~~~~
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:11:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/fstream:175:7: error: ‘streamsize’ does not name a type
       streamsize  _M_ext_buf_size;
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/fstream:334:15: error: ‘streamsize’ does not name a type
       virtual streamsize
               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/fstream:361:42: error: ‘streamsize’ has not been declared
       _M_convert_to_external(char_type*, streamsize);
                                          ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/fstream:376:30: error: ‘streamsize’ has not been declared
       setbuf(char_type* __s, streamsize __n);
                              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/fstream:399:15: error: ‘streamsize’ does not name a type
       virtual streamsize
               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/fstream:402:15: error: ‘streamsize’ does not name a type
       virtual streamsize
               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/fstream:422:21: error: ‘streamsize’ has not been declared
       _M_set_buffer(streamsize __off)
                     ^~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/fstream:1081:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:11,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: In member function ‘void std::basic_filebuf<_CharT, _Traits>::_M_destroy_internal_buffer()’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:73:7: error: ‘_M_ext_buf_size’ was not declared in this scope
       _M_ext_buf_size = 0;
       ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: In constructor ‘std::basic_filebuf<_CharT, _Traits>::basic_filebuf()’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:85:35: error: class ‘std::basic_filebuf<_CharT, _Traits>’ does not have any field named ‘_M_ext_buf_size’
     _M_codecvt(0), _M_ext_buf(0), _M_ext_buf_size(0), _M_ext_next(0),
                                   ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: In constructor ‘std::basic_filebuf<_CharT, _Traits>::basic_filebuf(std::basic_filebuf<_CharT, _Traits>&&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:113:5: error: class ‘std::basic_filebuf<_CharT, _Traits>’ does not have any field named ‘_M_ext_buf_size’
     _M_ext_buf_size(std::__exchange(__rhs._M_ext_buf_size, 0)),
     ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: In member function ‘std::basic_filebuf<_CharT, _Traits>& std::basic_filebuf<_CharT, _Traits>::operator=(std::basic_filebuf<_CharT, _Traits>&&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:137:7: error: ‘_M_ext_buf_size’ was not declared in this scope
       _M_ext_buf_size = std::__exchange(__rhs._M_ext_buf_size, 0);
       ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: In member function ‘void std::basic_filebuf<_CharT, _Traits>::swap(std::basic_filebuf<_CharT, _Traits>&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:165:17: error: ‘_M_ext_buf_size’ was not declared in this scope
       std::swap(_M_ext_buf_size, __rhs._M_ext_buf_size);
                 ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:261:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: In member function ‘virtual std::basic_filebuf<_CharT, _Traits>::int_type std::basic_filebuf<_CharT, _Traits>::underflow()’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:316:4: error: ‘streamsize’ was not declared in this scope
    streamsize __ilen = 0;
    ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:320:8: error: ‘__ilen’ was not declared in this scope
        __ilen = _M_file.xsgetn(reinterpret_cast<char*>(this->eback()),
        ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:320:25: error: ‘std::basic_filebuf<_CharT, _Traits>::__file_type {aka class std::__basic_file<char>}’ has no member named ‘xsgetn’
        __ilen = _M_file.xsgetn(reinterpret_cast<char*>(this->eback()),
                         ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:330:19: error: expected ‘;’ before ‘__blen’
        streamsize __blen; // Minimum buffer size.
                   ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:331:19: error: expected ‘;’ before ‘__rlen’
        streamsize __rlen; // Number of chars to read.
                   ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:333:3: error: ‘__blen’ was not declared in this scope
   __blen = __rlen = __buflen * __enc;
   ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:333:12: error: ‘__rlen’ was not declared in this scope
   __blen = __rlen = __buflen * __enc;
            ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:336:5: error: ‘__blen’ was not declared in this scope
     __blen = __buflen + _M_codecvt->max_length() - 1;
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:337:5: error: ‘__rlen’ was not declared in this scope
     __rlen = __buflen;
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:339:14: error: ‘streamsize’ does not name a type
        const streamsize __remainder = _M_ext_end - _M_ext_next;
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:340:8: error: ‘__rlen’ was not declared in this scope
        __rlen = __rlen > __remainder ? __rlen - __remainder : 0;
        ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:340:26: error: ‘__remainder’ was not declared in this scope
        __rlen = __rlen > __remainder ? __rlen - __remainder : 0;
                          ^~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:349:12: error: ‘_M_ext_buf_size’ was not declared in this scope
        if (_M_ext_buf_size < __blen)
            ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:349:30: error: ‘__blen’ was not declared in this scope
        if (_M_ext_buf_size < __blen)
                              ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:373:48: error: ‘_M_ext_buf_size’ was not declared in this scope
         if (_M_ext_end - _M_ext_buf + __rlen > _M_ext_buf_size)
                                                ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:379:20: error: expected ‘;’ before ‘__elen’
         streamsize __elen = _M_file.xsgetn(_M_ext_end, __rlen);
                    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:380:13: error: ‘__elen’ was not declared in this scope
         if (__elen == 0)
             ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:384:23: error: ‘__elen’ was not declared in this scope
         _M_ext_end += __elen;
                       ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:396:9: error: ‘__ilen’ was not declared in this scope
         __ilen = std::min(__avail, __buflen);
         ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:403:7: error: ‘__ilen’ was not declared in this scope
       __ilen = __iend - this->eback();
       ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:413:15: error: ‘__ilen’ was not declared in this scope
        while (__ilen == 0 && !__got_eof);
               ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:416:8: error: ‘__ilen’ was not declared in this scope
    if (__ilen > 0)
        ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:572:44: error: ‘streamsize’ has not been declared
     _M_convert_to_external(_CharT* __ibuf, streamsize __ilen)
                                            ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: In member function ‘bool std::basic_filebuf<_CharT, _Traits>::_M_convert_to_external(_CharT*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:575:7: error: ‘streamsize’ was not declared in this scope
       streamsize __elen;
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:576:18: error: expected ‘;’ before ‘__plen’
       streamsize __plen;
                  ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:579:4: error: ‘__elen’ was not declared in this scope
    __elen = _M_file.xsputn(reinterpret_cast<char*>(__ibuf), __ilen);
    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:579:21: error: ‘std::basic_filebuf<_CharT, _Traits>::__file_type {aka class std::__basic_file<char>}’ has no member named ‘xsputn’
    __elen = _M_file.xsputn(reinterpret_cast<char*>(__ibuf), __ilen);
                     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:580:4: error: ‘__plen’ was not declared in this scope
    __plen = __ilen;
    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:586:15: error: expected ‘;’ before ‘__blen’
    streamsize __blen = __ilen * _M_codecvt->max_length();
               ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:587:54: error: ‘__blen’ was not declared in this scope
    char* __buf = static_cast<char*>(__builtin_alloca(__blen));
                                                      ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:607:4: error: ‘__elen’ was not declared in this scope
    __elen = _M_file.xsputn(__buf, __blen);
    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:607:21: error: ‘std::basic_filebuf<_CharT, _Traits>::__file_type {aka class std::__basic_file<char>}’ has no member named ‘xsputn’
    __elen = _M_file.xsputn(__buf, __blen);
                     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:608:4: error: ‘__plen’ was not declared in this scope
    __plen = __blen;
    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:614:19: error: expected ‘;’ before ‘__rlen’
        streamsize __rlen = this->pptr() - __iend;
                   ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:616:21: error: ‘__rlen’ was not declared in this scope
         __iresume + __rlen, __iend, __buf,
                     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:621:22: error: ‘std::basic_filebuf<_CharT, _Traits>::__file_type {aka class std::__basic_file<char>}’ has no member named ‘xsputn’
     __elen = _M_file.xsputn(__buf, __rlen);
                      ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:629:14: error: ‘__elen’ was not declared in this scope
       return __elen == __plen;
              ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:629:24: error: ‘__plen’ was not declared in this scope
       return __elen == __plen;
                        ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:633:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:721:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:771:28: error: ‘streamsize’ has not been declared
     setbuf(char_type* __s, streamsize __n)
                            ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: In member function ‘bool std::basic_filebuf<_CharT, _Traits>::_M_terminate_output()’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:940:4: error: ‘streamsize’ was not declared in this scope
    streamsize __ilen = 0;
    ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:952:5: error: ‘__ilen’ was not declared in this scope
     __ilen = __next - __buf;
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:955:15: error: ‘streamsize’ does not name a type
         const streamsize __elen = _M_file.xsputn(__buf, __ilen);
               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:956:13: error: ‘__elen’ was not declared in this scope
         if (__elen != __ilen)
             ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:961:43: error: ‘__ilen’ was not declared in this scope
    while (__r == codecvt_base::partial && __ilen > 0 && __testvalid);
                                           ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: In member function ‘virtual void std::basic_filebuf<_CharT, _Traits>::imbue(const std::locale&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:1029:15: error: ‘streamsize’ does not name a type
         const streamsize __remainder = _M_ext_end - _M_ext_next;
               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:1030:13: error: ‘__remainder’ was not declared in this scope
         if (__remainder)
             ^~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:1034:35: error: ‘__remainder’ was not declared in this scope
         _M_ext_end = _M_ext_buf + __remainder;
                                   ^~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:40:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/alloc_traits.h: In instantiation of ‘struct __gnu_cxx::__alloc_traits<std::allocator<Task> >’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:75:28:   required from ‘struct std::_Vector_base<Task, std::allocator<Task> >’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:214:11:   required from ‘class std::vector<Task>’
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortCategory.cpp:22:17:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/alloc_traits.h:61:53: error: no type named ‘size_type’ in ‘struct std::allocator_traits<std::allocator<Task> >’
     typedef typename _Base_type::size_type          size_type;
                                                     ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/alloc_traits.h:62:53: error: no type named ‘difference_type’ in ‘struct std::allocator_traits<std::allocator<Task> >’
     typedef typename _Base_type::difference_type    difference_type;
                                                     ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/alloc_traits.h:70:23: error: no members matching ‘__gnu_cxx::__alloc_traits<std::allocator<Task> >::_Base_type {aka std::allocator_traits<std::allocator<Task> >}::max_size’ in ‘__gnu_cxx::__alloc_traits<std::allocator<Task> >::_Base_type {aka struct std::allocator_traits<std::allocator<Task> >}’
     using _Base_type::max_size;
                       ^~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:67:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h: In instantiation of ‘class __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortDate.cpp:34:39:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:768:56: error: no type named ‘difference_type’ in ‘struct std::iterator_traits<Task*>’
       typedef typename __traits_type::difference_type  difference_type;
                                                        ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h: In instantiation of ‘class __gnu_cxx::__normal_iterator<const Task*, std::vector<Task> >’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortDate.cpp:34:49:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:768:56: error: no type named ‘difference_type’ in ‘struct std::iterator_traits<const Task*>’
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:2:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:8:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp: At global scope:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:11:7: error: expected nested-name-specifier before ‘namespace’
 using namespace std;
       ^~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:14:12: error: cannot define member function ‘Task::Task’ within ‘Planner’
 Task::Task(){
            ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:25:60: error: cannot define member function ‘Task::Task’ within ‘Planner’
 Task::Task(string category, string name, string description){
                                                            ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:31:35: error: cannot define member function ‘Task::setDescription’ within ‘Planner’
 void Task::setDescription(string d) {
                                   ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:34:28: error: cannot define member function ‘Task::setName’ within ‘Planner’
 void Task::setName(string n){
                            ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:37:24: error: cannot define member function ‘Task::setDay’ within ‘Planner’
 void Task::setDay(int d){
                        ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:40:32: error: cannot define member function ‘Task::setCategory’ within ‘Planner’
 void Task::setCategory(string c) {
                                ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:43:26: error: cannot define member function ‘Task::setMonth’ within ‘Planner’
 void Task::setMonth(int m){
                          ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:46:25: error: cannot define member function ‘Task::setYear’ within ‘Planner’
 void Task::setYear(int y){
                         ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:49:29: error: cannot define member function ‘Task::setPriority’ within ‘Planner’
 void Task::setPriority(int p){
                             ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:52:29: error: cannot define member function ‘Task::getDescription’ within ‘Planner’
 string Task::getDescription(){
                             ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:55:22: error: cannot define member function ‘Task::getName’ within ‘Planner’
 string Task::getName(){
                      ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:58:26: error: cannot define member function ‘Task::getCategory’ within ‘Planner’
 string Task::getCategory(){
                          ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:61:18: error: cannot define member function ‘Task::getDay’ within ‘Planner’
 int Task::getDay(){
                  ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:64:20: error: cannot define member function ‘Task::getMonth’ within ‘Planner’
 int Task::getMonth(){
                    ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:67:19: error: cannot define member function ‘Task::getYear’ within ‘Planner’
 int Task::getYear(){
                   ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:70:23: error: cannot define member function ‘Task::getPriority’ within ‘Planner’
 int Task::getPriority(){
                       ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:76:21: error: cannot define member function ‘Task::EditTask’ within ‘Planner’
 void Task::EditTask(){
                     ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:8:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:9:7: error: expected nested-name-specifier before ‘namespace’
 using namespace std;
       ^~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:13:73: error: cannot define member function ‘SchoolTask::SchoolTask’ within ‘Planner’
  SchoolTask::SchoolTask(string category, string name, string description){
                                                                         ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:19:34: error: cannot define member function ‘SchoolTask::Add_SchoolTask’ within ‘Planner’
  void SchoolTask::Add_SchoolTask(){
                                  ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:8:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:96:25: error: cannot define member function ‘SchoolTask::SchoolTask’ within ‘Planner’
  SchoolTask::SchoolTask(){}
                         ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:9:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:6:7: error: expected nested-name-specifier before ‘namespace’
 using namespace std;
       ^~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:9:76: error: cannot define member function ‘PersonalTask::PersonalTask’ within ‘Planner’
 PersonalTask::PersonalTask(string category, string name, string description){
                                                                            ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:14:38: error: cannot define member function ‘PersonalTask::Add_PersonalTask’ within ‘Planner’
  void PersonalTask::Add_PersonalTask(){
                                      ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:70:29: error: cannot define member function ‘PersonalTask::PersonalTask’ within ‘Planner’
  PersonalTask::PersonalTask(){}
                             ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:16:1: error: expected ‘}’ at end of input
 }
 ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp: In member function ‘void Planner::Filter_Tasks()’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:87:37: error: ‘DisplayMenu’ was not declared in this scope
                         DisplayMenu();
                                     ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp: In member function ‘void Planner::Sort_Tasks()’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:128:37: error: ‘DisplayMenu’ was not declared in this scope
                         DisplayMenu();
                                     ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp: In member function ‘void Planner::Display_Planner()’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:167:25: error: expected ‘}’ before ‘else’
                         else
                         ^~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp: In member function ‘int Planner::main()’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:14:10: error: ‘class Planner’ has no member named ‘DisplayMenu’; did you mean ‘Display_Planner’?
  planner.DisplayMenu();
          ^~~~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp: At global scope:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:16:1: error: expected unqualified-id at end of input
 }
 ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:67:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h: In instantiation of ‘class __gnu_cxx::__normal_iterator<char*, std::basic_string<char> >’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5027:32:   required from ‘std::basic_string<_CharT, _Traits, _Alloc> std::operator+(std::basic_string<_CharT, _Traits, _Alloc>&&, std::basic_string<_CharT, _Traits, _Alloc>&&) [with _CharT = char; _Traits = std::char_traits<char>; _Alloc = std::allocator<char>]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/system_error:343:50:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:768:56: error: no type named ‘difference_type’ in ‘struct std::iterator_traits<char*>’
       typedef typename __traits_type::difference_type  difference_type;
                                                        ^~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc: In instantiation of ‘std::vector<_Tp, _Alloc>::iterator std::vector<_Tp, _Alloc>::insert(std::vector<_Tp, _Alloc>::const_iterator, const value_type&) [with _Tp = Task; _Alloc = std::allocator<Task>; std::vector<_Tp, _Alloc>::iterator = __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >; typename std::_Vector_base<_Tp, _Alloc>::pointer = Task*; std::vector<_Tp, _Alloc>::const_iterator = __gnu_cxx::__normal_iterator<const Task*, std::vector<Task> >; typename __gnu_cxx::__alloc_traits<typename std::_Vector_base<_Tp, _Alloc>::_Tp_alloc_type>::const_pointer = const Task*; std::vector<_Tp, _Alloc>::value_type = Task]’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortDate.cpp:34:49:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: error: no match for ‘operator+’ (operand types are ‘std::vector<Task>::iterator {aka __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >}’ and ‘long int’)
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:67:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:341:5: note: candidate: template<class _Iterator> std::reverse_iterator<_Iterator> std::operator+(typename std::reverse_iterator<_Iterator>::difference_type, const std::reverse_iterator<_Iterator>&)
     operator+(typename reverse_iterator<_Iterator>::difference_type __n,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:341:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   mismatched types ‘const std::reverse_iterator<_Iterator>’ and ‘long int’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:67:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:1200:5: note: candidate: template<class _Iterator> std::move_iterator<_IteratorL> std::operator+(typename std::move_iterator<_IteratorL>::difference_type, const std::move_iterator<_IteratorL>&)
     operator+(typename move_iterator<_Iterator>::difference_type __n,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:1200:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   mismatched types ‘const std::move_iterator<_IteratorL>’ and ‘long int’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:4944:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(const std::basic_string<_CharT, _Traits, _Alloc>&, const std::basic_string<_CharT, _Traits, _Alloc>&)
     operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:4944:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   ‘std::vector<Task>::iterator {aka __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >}’ is not derived from ‘const std::basic_string<_CharT, _Traits, _Alloc>’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:53:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.tcc:1147:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(const _CharT*, const std::basic_string<_CharT, _Traits, _Alloc>&)
     operator+(const _CharT* __lhs,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.tcc:1147:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   mismatched types ‘const _CharT*’ and ‘__gnu_cxx::__normal_iterator<Task*, std::vector<Task> >’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:53:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.tcc:1163:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(_CharT, const std::basic_string<_CharT, _Traits, _Alloc>&)
     operator+(_CharT __lhs, const basic_string<_CharT, _Traits, _Alloc>& __rhs)
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.tcc:1163:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   mismatched types ‘const std::basic_string<_CharT, _Traits, _Alloc>’ and ‘long int’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:4981:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(const std::basic_string<_CharT, _Traits, _Alloc>&, const _CharT*)
     operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:4981:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   ‘std::vector<Task>::iterator {aka __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >}’ is not derived from ‘const std::basic_string<_CharT, _Traits, _Alloc>’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:4997:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(const std::basic_string<_CharT, _Traits, _Alloc>&, _CharT)
     operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs, _CharT __rhs)
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:4997:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   ‘std::vector<Task>::iterator {aka __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >}’ is not derived from ‘const std::basic_string<_CharT, _Traits, _Alloc>’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5009:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(std::basic_string<_CharT, _Traits, _Alloc>&&, const std::basic_string<_CharT, _Traits, _Alloc>&)
     operator+(basic_string<_CharT, _Traits, _Alloc>&& __lhs,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5009:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   ‘std::vector<Task>::iterator {aka __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >}’ is not derived from ‘std::basic_string<_CharT, _Traits, _Alloc>’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5015:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(const std::basic_string<_CharT, _Traits, _Alloc>&, std::basic_string<_CharT, _Traits, _Alloc>&&)
     operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5015:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   ‘std::vector<Task>::iterator {aka __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >}’ is not derived from ‘const std::basic_string<_CharT, _Traits, _Alloc>’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5021:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(std::basic_string<_CharT, _Traits, _Alloc>&&, std::basic_string<_CharT, _Traits, _Alloc>&&)
     operator+(basic_string<_CharT, _Traits, _Alloc>&& __lhs,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5021:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   ‘std::vector<Task>::iterator {aka __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >}’ is not derived from ‘std::basic_string<_CharT, _Traits, _Alloc>’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5033:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(const _CharT*, std::basic_string<_CharT, _Traits, _Alloc>&&)
     operator+(const _CharT* __lhs,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5033:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   mismatched types ‘const _CharT*’ and ‘__gnu_cxx::__normal_iterator<Task*, std::vector<Task> >’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5039:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(_CharT, std::basic_string<_CharT, _Traits, _Alloc>&&)
     operator+(_CharT __lhs,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5039:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   mismatched types ‘std::basic_string<_CharT, _Traits, _Alloc>’ and ‘long int’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5045:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(std::basic_string<_CharT, _Traits, _Alloc>&&, const _CharT*)
     operator+(basic_string<_CharT, _Traits, _Alloc>&& __lhs,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5045:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   ‘std::vector<Task>::iterator {aka __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >}’ is not derived from ‘std::basic_string<_CharT, _Traits, _Alloc>’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5051:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(std::basic_string<_CharT, _Traits, _Alloc>&&, _CharT)
     operator+(basic_string<_CharT, _Traits, _Alloc>&& __lhs,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5051:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   ‘std::vector<Task>::iterator {aka __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >}’ is not derived from ‘std::basic_string<_CharT, _Traits, _Alloc>’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:67:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:966:5: note: candidate: template<class _Iterator, class _Container> __gnu_cxx::__normal_iterator<_Iterator, _Container> __gnu_cxx::operator+(typename __gnu_cxx::__normal_iterator<_Iterator, _Container>::difference_type, const __gnu_cxx::__normal_iterator<_Iterator, _Container>&)
     operator+(typename __normal_iterator<_Iterator, _Container>::difference_type
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:966:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   mismatched types ‘const __gnu_cxx::__normal_iterator<_Iterator, _Container>’ and ‘long int’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/c++allocator.h:33:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:46,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h: In instantiation of ‘void __gnu_cxx::new_allocator<_Tp>::construct(_Up*, _Args&& ...) [with _Up = Task; _Args = {const Task&}; _Tp = Task]’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/alloc_traits.h:475:4:   required from ‘static void std::allocator_traits<std::allocator<_CharT> >::construct(std::allocator_traits<std::allocator<_CharT> >::allocator_type&, _Up*, _Args&& ...) [with _Up = Task; _Args = {const Task&}; _Tp = Task; std::allocator_traits<std::allocator<_CharT> >::allocator_type = std::allocator<Task>]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:918:30:   required from ‘void std::vector<_Tp, _Alloc>::push_back(const value_type&) [with _Tp = Task; _Alloc = std::allocator<Task>; std::vector<_Tp, _Alloc>::value_type = Task]’
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortCategory.cpp:29:33:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:120:4: error: no matching function for call to ‘operator new(sizetype, void*)’
  { ::new((void *)__p) _Up(std::forward<_Args>(__args)...); }
    ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
<built-in>: note: candidate: void* operator new(long unsigned int)
<built-in>: note:   candidate expects 1 argument, 2 provided
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:67:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h: In instantiation of ‘class std::move_iterator<Task*>’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_uninitialized.h:303:3:   required from ‘_ForwardIterator std::__uninitialized_move_if_noexcept_a(_InputIterator, _InputIterator, _ForwardIterator, _Allocator&) [with _InputIterator = Task*; _ForwardIterator = Task*; _Allocator = std::allocator<Task>]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:422:8:   required from ‘void std::vector<_Tp, _Alloc>::_M_emplace_back_aux(_Args&& ...) [with _Args = {const Task&}; _Tp = Task; _Alloc = std::allocator<Task>]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:924:4:   required from ‘void std::vector<_Tp, _Alloc>::push_back(const value_type&) [with _Tp = Task; _Alloc = std::allocator<Task>; std::vector<_Tp, _Alloc>::value_type = Task]’
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortCategory.cpp:29:33:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:1019:55: error: no type named ‘difference_type’ in ‘struct std::iterator_traits<Task*>’
       typedef typename __traits_type::difference_type difference_type;
                                                       ^~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:62:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_construct.h: In instantiation of ‘void std::_Destroy(_ForwardIterator, _ForwardIterator) [with _ForwardIterator = __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >]’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_construct.h:151:15:   required from ‘void std::_Destroy(_ForwardIterator, _ForwardIterator, std::allocator<_T2>&) [with _ForwardIterator = __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >; _Tp = Task]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:206:21:   required from ‘std::vector<_Tp, _Alloc>& std::vector<_Tp, _Alloc>::operator=(const std::vector<_Tp, _Alloc>&) [with _Tp = Task; _Alloc = std::allocator<Task>]’
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortCategory.cpp:53:11:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_construct.h:125:24: error: no type named ‘value_type’ in ‘struct std::iterator_traits<__gnu_cxx::__normal_iterator<Task*, std::vector<Task> > >’
                        _Value_type;
                        ^~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_construct.h:127:11: error: no type named ‘value_type’ in ‘struct std::iterator_traits<__gnu_cxx::__normal_iterator<Task*, std::vector<Task> > >’
       std::_Destroy_aux<__has_trivial_destructor(_Value_type)>::
       ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  __destroy(__first, __last);
  ~~~~~~~~~^~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:64:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h: In instantiation of ‘std::vector<_Tp, _Alloc>::size_type std::vector<_Tp, _Alloc>::max_size() const [with _Tp = Task; _Alloc = std::allocator<Task>; std::vector<_Tp, _Alloc>::size_type = long unsigned int]’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:1422:14:   required from ‘std::vector<_Tp, _Alloc>::size_type std::vector<_Tp, _Alloc>::_M_check_len(std::vector<_Tp, _Alloc>::size_type, const char*) const [with _Tp = Task; _Alloc = std::allocator<Task>; std::vector<_Tp, _Alloc>::size_type = long unsigned int]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:411:16:   required from ‘void std::vector<_Tp, _Alloc>::_M_emplace_back_aux(_Args&& ...) [with _Args = {const Task&}; _Tp = Task; _Alloc = std::allocator<Task>]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:924:4:   required from ‘void std::vector<_Tp, _Alloc>::push_back(const value_type&) [with _Tp = Task; _Alloc = std::allocator<Task>; std::vector<_Tp, _Alloc>::value_type = Task]’
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortCategory.cpp:29:33:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:661:39: error: ‘max_size’ is not a member of ‘std::vector<Task>::_Alloc_traits {aka __gnu_cxx::__alloc_traits<std::allocator<Task> >}’
       { return _Alloc_traits::max_size(_M_get_Tp_allocator()); }
                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:63:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_uninitialized.h: In instantiation of ‘_ForwardIterator std::uninitialized_copy(_InputIterator, _InputIterator, _ForwardIterator) [with _InputIterator = __gnu_cxx::__normal_iterator<const Task*, std::vector<Task> >; _ForwardIterator = Task*]’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_uninitialized.h:281:37:   required from ‘_ForwardIterator std::__uninitialized_copy_a(_InputIterator, _InputIterator, _ForwardIterator, std::allocator<_Tp>&) [with _InputIterator = __gnu_cxx::__normal_iterator<const Task*, std::vector<Task> >; _ForwardIterator = Task*; _Tp = Task]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:1225:35:   required from ‘std::vector<_Tp, _Alloc>::pointer std::vector<_Tp, _Alloc>::_M_allocate_and_copy(std::vector<_Tp, _Alloc>::size_type, _ForwardIterator, _ForwardIterator) [with _ForwardIterator = __gnu_cxx::__normal_iterator<const Task*, std::vector<Task> >; _Tp = Task; _Alloc = std::allocator<Task>; std::vector<_Tp, _Alloc>::pointer = Task*; std::vector<_Tp, _Alloc>::size_type = long unsigned int]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:195:19:   required from ‘std::vector<_Tp, _Alloc>& std::vector<_Tp, _Alloc>::operator=(const std::vector<_Tp, _Alloc>&) [with _Tp = Task; _Alloc = std::allocator<Task>]’
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortCategory.cpp:53:11:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_uninitialized.h:111:2: error: no type named ‘value_type’ in ‘struct std::iterator_traits<__gnu_cxx::__normal_iterator<const Task*, std::vector<Task> > >’
  _ValueType1;
  ^~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_uninitialized.h:118:67: error: no type named ‘reference’ in ‘struct std::iterator_traits<__gnu_cxx::__normal_iterator<const Task*, std::vector<Task> > >’
       typedef typename iterator_traits<_InputIterator>::reference _RefType1;
                                                                   ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_uninitialized.h:120:70: error: no type named ‘reference’ in ‘struct std::iterator_traits<__gnu_cxx::__normal_iterator<const Task*, std::vector<Task> > >’
       const bool __assignable = is_assignable<_RefType2, _RefType1>::value;
                                                                      ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_uninitialized.h:124:12: error: no type named ‘value_type’ in ‘struct std::iterator_traits<__gnu_cxx::__normal_iterator<const Task*, std::vector<Task> > >’
            && __is_trivial(_ValueType2)
             
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h: In instantiation of ‘static _OI std::__copy_move<false, false, std::random_access_iterator_tag>::__copy_m(_II, _II, _OI) [with _II = const Task*; _OI = Task*]’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:386:44:   required from ‘_OI std::__copy_move_a(_II, _II, _OI) [with bool _IsMove = false; _II = const Task*; _OI = Task*]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:422:45:   required from ‘_OI std::__copy_move_a2(_II, _II, _OI) [with bool _IsMove = false; _II = __gnu_cxx::__normal_iterator<const Task*, std::vector<Task> >; _OI = __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:455:8:   required from ‘_OI std::copy(_II, _II, _OI) [with _II = __gnu_cxx::__normal_iterator<const Task*, std::vector<Task> >; _OI = __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:206:31:   required from ‘std::vector<_Tp, _Alloc>& std::vector<_Tp, _Alloc>::operator=(const std::vector<_Tp, _Alloc>&) [with _Tp = Task; _Alloc = std::allocator<Task>]’
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortCategory.cpp:53:11:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:321:59: error: no type named ‘difference_type’ in ‘struct std::iterator_traits<const Task*>’
    typedef typename iterator_traits<_II>::difference_type _Distance;
                                                           ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h: In instantiation of ‘static _OI std::__copy_move<false, false, std::random_access_iterator_tag>::__copy_m(_II, _II, _OI) [with _II = Task*; _OI = Task*]’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:386:44:   required from ‘_OI std::__copy_move_a(_II, _II, _OI) [with bool _IsMove = false; _II = Task*; _OI = Task*]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:422:45:   required from ‘_OI std::__copy_move_a2(_II, _II, _OI) [with bool _IsMove = false; _II = Task*; _OI = Task*]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:455:8:   required from ‘_OI std::copy(_II, _II, _OI) [with _II = Task*; _OI = Task*]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:211:17:   required from ‘std::vector<_Tp, _Alloc>& std::vector<_Tp, _Alloc>::operator=(const std::vector<_Tp, _Alloc>&) [with _Tp = Task; _Alloc = std::allocator<Task>]’
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortCategory.cpp:53:11:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:321:59: error: no type named ‘difference_type’ in ‘struct std::iterator_traits<Task*>’
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:62:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_construct.h: In instantiation of ‘void std::_Construct(_T1*, _Args&& ...) [with _T1 = Task; _Args = {Task&}]’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_uninitialized.h:75:18:   required from ‘static _ForwardIterator std::__uninitialized_copy<_TrivialValueTypes>::__uninit_copy(_InputIterator, _InputIterator, _ForwardIterator) [with _InputIterator = Task*; _ForwardIterator = Task*; bool _TrivialValueTypes = false]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_uninitialized.h:126:15:   required from ‘_ForwardIterator std::uninitialized_copy(_InputIterator, _InputIterator, _ForwardIterator) [with _InputIterator = Task*; _ForwardIterator = Task*]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_uninitialized.h:281:37:   required from ‘_ForwardIterator std::__uninitialized_copy_a(_InputIterator, _InputIterator, _ForwardIterator, std::allocator<_Tp>&) [with _InputIterator = Task*; _ForwardIterator = Task*; _Tp = Task]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:213:35:   required from ‘std::vector<_Tp, _Alloc>& std::vector<_Tp, _Alloc>::operator=(const std::vector<_Tp, _Alloc>&) [with _Tp = Task; _Alloc = std::allocator<Task>]’
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortCategory.cpp:53:11:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_construct.h:75:7: error: no matching function for call to ‘operator new(sizetype, void*)’
     { ::new(static_cast<void*>(__p)) _T1(std::forward<_Args>(__args)...); }
       ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
<built-in>: note: candidate: void* operator new(long unsigned int)
<built-in>: note:   candidate expects 1 argument, 2 provided
CMakeFiles/test.dir/build.make:82: recipe for target 'CMakeFiles/test.dir/main.cpp.o' failed
make[2]: *** [CMakeFiles/test.dir/main.cpp.o] Error 1
CMakeFiles/Makefile2:157: recipe for target 'CMakeFiles/test.dir/all' failed
make[1]: *** [CMakeFiles/test.dir/all] Error 2
Makefile:149: recipe for target 'all' failed
make: *** [all] Error 2
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ git checkout aalsu013/edittask 
M	Planner.cpp
M	googletest
M	task.cpp
M	task.hpp
Switched to branch 'aalsu013/edittask'
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:354:2: error: #endif without #if
 #endif
  ^~~~~
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:1:1: error: ‘fndef’ does not name a type
 fndef __PLANNER_CPP__
 ^~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:62:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/type_traits.h:162:35: error: ‘__gnu_cxx::__is_null_pointer’ declared as an ‘inline’ variable
   __is_null_pointer(std::nullptr_t)
                                   ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/type_traits.h:162:35: error: ‘bool __gnu_cxx::__is_null_pointer’ redeclared as different kind of symbol
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/type_traits.h:157:5: note: previous declaration ‘template<class _Type> bool __gnu_cxx::__is_null_pointer(_Type)’
     __is_null_pointer(_Type)
     ^~~~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/type_traits.h:162:21: error: ‘nullptr_t’ is not a member of ‘std’
   __is_null_pointer(std::nullptr_t)
                     ^~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:57:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:59,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:64,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:359:31: error: ‘std::size_t’ has not been declared
   template<typename _Tp, std::size_t _Size>
                               ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:360:25: error: ‘_Size’ was not declared in this scope
     struct is_array<_Tp[_Size]>
                         ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:360:31: error: template argument 1 is invalid
     struct is_array<_Tp[_Size]>
                               ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:558:37: error: ‘nullptr_t’ is not a member of ‘std’
     struct __is_null_pointer_helper<std::nullptr_t>
                                     ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:558:37: error: ‘nullptr_t’ is not a member of ‘std’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:558:51: error: template argument 1 is invalid
     struct __is_null_pointer_helper<std::nullptr_t>
                                                   ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1478:32: error: ‘size_t’ is not a member of ‘std’
     : public integral_constant<std::size_t, __alignof__(_Tp)> { };
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1478:32: error: ‘size_t’ is not a member of ‘std’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1478:61: error: template argument 1 is invalid
     : public integral_constant<std::size_t, __alignof__(_Tp)> { };
                                                             ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1478:61: note: invalid template non-type parameter
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1483:32: error: ‘size_t’ is not a member of ‘std’
     : public integral_constant<std::size_t, 0> { };
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1483:32: error: ‘size_t’ is not a member of ‘std’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1483:46: error: template argument 1 is invalid
     : public integral_constant<std::size_t, 0> { };
                                              ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1483:46: note: invalid template non-type parameter
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1485:31: error: ‘std::size_t’ has not been declared
   template<typename _Tp, std::size_t _Size>
                               ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1486:21: error: ‘_Size’ was not declared in this scope
     struct rank<_Tp[_Size]>
                     ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1486:27: error: template argument 1 is invalid
     struct rank<_Tp[_Size]>
                           ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1487:32: error: ‘size_t’ is not a member of ‘std’
     : public integral_constant<std::size_t, 1 + rank<_Tp>::value> { };
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1487:32: error: ‘size_t’ is not a member of ‘std’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1487:65: error: template argument 1 is invalid
     : public integral_constant<std::size_t, 1 + rank<_Tp>::value> { };
                                                                 ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1487:65: note: invalid template non-type parameter
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1491:32: error: ‘size_t’ is not a member of ‘std’
     : public integral_constant<std::size_t, 1 + rank<_Tp>::value> { };
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1491:32: error: ‘size_t’ is not a member of ‘std’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1491:65: error: template argument 1 is invalid
     : public integral_constant<std::size_t, 1 + rank<_Tp>::value> { };
                                                                 ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1491:65: note: invalid template non-type parameter
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1496:32: error: ‘size_t’ is not a member of ‘std’
     : public integral_constant<std::size_t, 0> { };
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1496:32: error: ‘size_t’ is not a member of ‘std’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1496:46: error: template argument 1 is invalid
     : public integral_constant<std::size_t, 0> { };
                                              ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1496:46: note: invalid template non-type parameter
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1498:47: error: ‘std::size_t’ has not been declared
   template<typename _Tp, unsigned _Uint, std::size_t _Size>
                                               ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1499:23: error: ‘_Size’ was not declared in this scope
     struct extent<_Tp[_Size], _Uint>
                       ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1499:36: error: template argument 1 is invalid
     struct extent<_Tp[_Size], _Uint>
                                    ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1500:32: error: ‘size_t’ is not a member of ‘std’
     : public integral_constant<std::size_t,
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1500:32: error: ‘size_t’ is not a member of ‘std’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1501:24: error: ‘_Size’ was not declared in this scope
           _Uint == 0 ? _Size : extent<_Tp,
                        ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1502:28: error: template argument 1 is invalid
           _Uint - 1>::value>
                            ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1502:28: note: invalid template non-type parameter
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1507:32: error: ‘size_t’ is not a member of ‘std’
     : public integral_constant<std::size_t,
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1507:32: error: ‘size_t’ is not a member of ‘std’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1509:31: error: template argument 1 is invalid
              _Uint - 1>::value>
                               ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1509:31: note: invalid template non-type parameter
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1958:31: error: ‘std::size_t’ has not been declared
   template<typename _Tp, std::size_t _Size>
                               ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1959:30: error: ‘_Size’ was not declared in this scope
     struct remove_extent<_Tp[_Size]>
                              ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1959:36: error: template argument 1 is invalid
     struct remove_extent<_Tp[_Size]>
                                    ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1971:31: error: ‘std::size_t’ has not been declared
   template<typename _Tp, std::size_t _Size>
                               ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1972:35: error: ‘_Size’ was not declared in this scope
     struct remove_all_extents<_Tp[_Size]>
                                   ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1972:41: error: template argument 1 is invalid
     struct remove_all_extents<_Tp[_Size]>
                                         ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2030:17: error: ‘std::size_t’ has not been declared
   template<std::size_t _Len>
                 ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2035:23: error: ‘_Len’ was not declared in this scope
  unsigned char __data[_Len];
                       ^~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2050:17: error: ‘std::size_t’ has not been declared
   template<std::size_t _Len, std::size_t _Align =
                 ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2050:35: error: ‘std::size_t’ has not been declared
   template<std::size_t _Len, std::size_t _Align =
                                   ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2051:48: error: ‘_Len’ was not declared in this scope
     __alignof__(typename __aligned_storage_msa<_Len>::__type)>
                                                ^~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2051:52: error: template argument 1 is invalid
     __alignof__(typename __aligned_storage_msa<_Len>::__type)>
                                                    ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2056:23: error: ‘_Len’ was not declared in this scope
  unsigned char __data[_Len];
                       ^~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2057:37: error: ‘_Align’ was not declared in this scope
  struct __attribute__((__aligned__((_Align)))) { } __align;
                                     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2064:20: error: ‘size_t’ does not name a type
       static const size_t _S_alignment = 0;
                    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2065:20: error: ‘size_t’ does not name a type
       static const size_t _S_size = 0;
                    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2071:20: error: ‘size_t’ does not name a type
       static const size_t _S_alignment =
                    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2074:20: error: ‘size_t’ does not name a type
       static const size_t _S_size =
                    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2089:13: error: ‘size_t’ has not been declared
   template <size_t _Len, typename... _Types>
             ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2096:20: error: ‘size_t’ does not name a type
       static const size_t _S_len = _Len > __strictest::_S_size
                    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2100:20: error: ‘size_t’ does not name a type
       static const size_t alignment_value = __strictest::_S_alignment;
                    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2102:40: error: ‘_S_len’ was not declared in this scope
       typedef typename aligned_storage<_S_len, alignment_value>::type type;
                                        ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2102:48: error: ‘alignment_value’ was not declared in this scope
       typedef typename aligned_storage<_S_len, alignment_value>::type type;
                                                ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2102:63: error: template argument 1 is invalid
       typedef typename aligned_storage<_S_len, alignment_value>::type type;
                                                               ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2102:63: error: template argument 2 is invalid
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2105:13: error: ‘size_t’ has not been declared
   template <size_t _Len, typename... _Types>
             ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2106:11: error: ‘size_t’ does not name a type
     const size_t aligned_union<_Len, _Types...>::alignment_value;
           ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2609:26: error: ‘size_t’ has not been declared
   template<typename _Tp, size_t _Nm>
                          ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2612:21: error: ‘_Nm’ was not declared in this scope
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                     ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2612:24: error: ‘std::swap’ declared as an ‘inline’ variable
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                        ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2612:24: error: ‘template<class _Tp, <declaration error> > typename std::enable_if<std::__is_swappable<_Tp>::value>::type std::swap’ conflicts with a previous declaration
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2605:5: note: previous declaration ‘typename std::enable_if<std::__and_<std::is_move_constructible<_Tp>, std::is_move_assignable<_Tp> >::value>::type std::swap(_Tp&, _Tp&)’
     swap(_Tp&, _Tp&)
     ^~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2612:16: error: ‘__a’ was not declared in this scope
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2612:21: error: ‘_Nm’ was not declared in this scope
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                     ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2612:33: error: ‘__b’ was not declared in this scope
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                                 ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2612:38: error: ‘_Nm’ was not declared in this scope
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                                      ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2613:5: error: expected ‘;’ before ‘noexcept’
     noexcept(__is_nothrow_swappable<_Tp>::value);
     ^~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:59:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:64,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:198:26: error: ‘size_t’ has not been declared
   template<typename _Tp, size_t _Nm>
                          ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:202:21: error: ‘_Nm’ was not declared in this scope
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                     ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:202:24: error: ‘std::swap’ declared as an ‘inline’ variable
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                        ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:202:24: error: ‘template<class _Tp, <declaration error> > typename std::enable_if<std::__is_swappable<_Tp>::value>::type std::swap’ conflicts with a previous declaration
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:179:5: note: previous declaration ‘typename std::enable_if<std::__and_<std::is_move_constructible<_Tp>, std::is_move_assignable<_Tp> >::value>::type std::swap(_Tp&, _Tp&)’
     swap(_Tp& __a, _Tp& __b)
     ^~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:202:16: error: ‘__a’ was not declared in this scope
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:202:21: error: ‘_Nm’ was not declared in this scope
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                     ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:202:33: error: ‘__b’ was not declared in this scope
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                                 ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:202:38: error: ‘_Nm’ was not declared in this scope
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                                      ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:203:5: error: expected ‘;’ before ‘noexcept’
     noexcept(__is_nothrow_swappable<_Tp>::value)
     ^~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:64:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:85:17: error: ‘std::size_t’ has not been declared
   template<std::size_t...>
                 ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:421:41: error: ‘std::size_t’ has not been declared
       template<typename... _Args1, std::size_t... _Indexes1,
                                         ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:422:41: error: ‘std::size_t’ has not been declared
                typename... _Args2, std::size_t... _Indexes2>
                                         ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:424:27: error: ‘_Indexes1’ was not declared in this scope
              _Index_tuple<_Indexes1...>, _Index_tuple<_Indexes2...>);
                           ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:424:36: error: expected parameter pack before ‘...’
              _Index_tuple<_Indexes1...>, _Index_tuple<_Indexes2...>);
                                    ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:424:39: error: template argument 1 is invalid
              _Index_tuple<_Indexes1...>, _Index_tuple<_Indexes2...>);
                                       ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:424:55: error: ‘_Indexes2’ was not declared in this scope
              _Index_tuple<_Indexes1...>, _Index_tuple<_Indexes2...>);
                                                       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:424:64: error: expected parameter pack before ‘...’
              _Index_tuple<_Indexes1...>, _Index_tuple<_Indexes2...>);
                                                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:424:67: error: template argument 1 is invalid
              _Index_tuple<_Indexes1...>, _Index_tuple<_Indexes2...>);
                                                                   ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:65:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator_base_types.h:116:67: error: ‘ptrdiff_t’ does not name a type
   template<typename _Category, typename _Tp, typename _Distance = ptrdiff_t,
                                                                   ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator_base_types.h:182:15: error: ‘ptrdiff_t’ does not name a type
       typedef ptrdiff_t                   difference_type;
               ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator_base_types.h:193:15: error: ‘ptrdiff_t’ does not name a type
       typedef ptrdiff_t                   difference_type;
               ^~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:66:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:67,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ptr_traits.h:104:20: error: ‘ptrdiff_t’ was not declared in this scope
  = __detected_or_t<ptrdiff_t, __difference_type, _Ptr>;
                    ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ptr_traits.h:104:54: error: template argument 1 is invalid
  = __detected_or_t<ptrdiff_t, __difference_type, _Ptr>;
                                                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ptr_traits.h:130:15: error: ‘ptrdiff_t’ does not name a type
       typedef ptrdiff_t difference_type;
               ^~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h: In static member function ‘static _Tp* std::__copy_move<_IsMove, true, std::random_access_iterator_tag>::__copy_m(const _Tp*, const _Tp*, _Tp*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:366:10: error: ‘ptrdiff_t’ does not name a type
    const ptrdiff_t _Num = __last - __first;
          ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:367:8: error: ‘_Num’ was not declared in this scope
    if (_Num)
        ^~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:369:22: error: ‘_Num’ was not declared in this scope
    return __result + _Num;
                      ^~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h: In static member function ‘static _Tp* std::__copy_move_backward<_IsMove, true, std::random_access_iterator_tag>::__copy_move_b(const _Tp*, const _Tp*, _Tp*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:568:10: error: ‘ptrdiff_t’ does not name a type
    const ptrdiff_t _Num = __last - __first;
          ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:569:8: error: ‘_Num’ was not declared in this scope
    if (_Num)
        ^~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:571:22: error: ‘_Num’ was not declared in this scope
    return __result - _Num;
                      ^~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h: In function ‘typename __gnu_cxx::__enable_if<std::__is_byte<_Tp>::__value, void>::__type std::__fill_a(_Tp*, _Tp*, const _Tp&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:706:11: error: expected primary-expression before ‘const’
       if (const size_t __len = __last - __first)
           ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:706:11: error: expected ‘)’ before ‘const’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:707:63: error: ‘__len’ was not declared in this scope
  __builtin_memset(__first, static_cast<unsigned char>(__tmp), __len);
                                                               ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h: In static member function ‘static bool std::__equal<true>::equal(const _Tp*, const _Tp*, const _Tp*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:813:8: error: expected primary-expression before ‘const’
    if (const size_t __len = (__last1 - __first1))
        ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:813:8: error: expected ‘)’ before ‘const’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:814:65: error: ‘__len’ was not declared in this scope
      return !__builtin_memcmp(__first1, __first2, sizeof(_Tp) * __len);
                                                                 ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h: In static member function ‘static bool std::__lexicographical_compare<true>::__lc(const _Tp*, const _Tp*, const _Up*, const _Up*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:917:10: error: ‘size_t’ does not name a type
    const size_t __len1 = __last1 - __first1;
          ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:918:10: error: ‘size_t’ does not name a type
    const size_t __len2 = __last2 - __first2;
          ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:919:8: error: expected primary-expression before ‘const’
    if (const size_t __len = std::min(__len1, __len2))
        ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:919:8: error: expected ‘)’ before ‘const’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:920:62: error: ‘__len’ was not declared in this scope
      if (int __result = __builtin_memcmp(__first1, __first2, __len))
                                                              ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:922:11: error: ‘__len1’ was not declared in this scope
    return __len1 < __len2;
           ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:922:20: error: ‘__len2’ was not declared in this scope
    return __len1 < __len2;
                    ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:40:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/postypes.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/postypes.h:98:11: error: ‘ptrdiff_t’ does not name a type
   typedef ptrdiff_t streamsize; // Signed integral type
           ^~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:104:66: error: ‘std::size_t’ has not been declared
       compare(const char_type* __s1, const char_type* __s2, std::size_t __n);
                                                                  ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:106:19: error: ‘size_t’ in namespace ‘std’ does not name a type
       static std::size_t
                   ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:110:39: error: ‘std::size_t’ has not been declared
       find(const char_type* __s, std::size_t __n, const char_type& __a);
                                       ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:113:57: error: ‘std::size_t’ has not been declared
       move(char_type* __s1, const char_type* __s2, std::size_t __n);
                                                         ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:116:57: error: ‘std::size_t’ has not been declared
       copy(char_type* __s1, const char_type* __s2, std::size_t __n);
                                                         ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:119:35: error: ‘std::size_t’ has not been declared
       assign(char_type* __s, std::size_t __n, char_type __a);
                                   ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:145:64: error: ‘std::size_t’ has not been declared
     compare(const char_type* __s1, const char_type* __s2, std::size_t __n)
                                                                ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h: In static member function ‘static int __gnu_cxx::char_traits<_CharT>::compare(const char_type*, const char_type*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:147:12: error: ‘size_t’ is not a member of ‘std’
       for (std::size_t __i = 0; __i < __n; ++__i)
            ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:147:12: note: suggested alternative:
In file included from /usr/include/wchar.h:51:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/cwchar:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/postypes.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/lib/gcc/x86_64-redhat-linux/6.3.1/include/stddef.h:216:23: note:   ‘size_t’
 typedef __SIZE_TYPE__ size_t;
                       ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:147:33: error: ‘__i’ was not declared in this scope
       for (std::size_t __i = 0; __i < __n; ++__i)
                                 ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:156:10: error: ‘size_t’ in namespace ‘std’ does not name a type
     std::size_t
          ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:169:37: error: ‘std::size_t’ has not been declared
     find(const char_type* __s, std::size_t __n, const char_type& __a)
                                     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h: In static member function ‘static const char_type* __gnu_cxx::char_traits<_CharT>::find(const char_type*, int, const char_type&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:171:12: error: ‘size_t’ is not a member of ‘std’
       for (std::size_t __i = 0; __i < __n; ++__i)
            ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:171:12: note: suggested alternative:
In file included from /usr/include/wchar.h:51:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/cwchar:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/postypes.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/lib/gcc/x86_64-redhat-linux/6.3.1/include/stddef.h:216:23: note:   ‘size_t’
 typedef __SIZE_TYPE__ size_t;
                       ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:171:33: error: ‘__i’ was not declared in this scope
       for (std::size_t __i = 0; __i < __n; ++__i)
                                 ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:180:55: error: ‘std::size_t’ has not been declared
     move(char_type* __s1, const char_type* __s2, std::size_t __n)
                                                       ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:189:55: error: ‘std::size_t’ has not been declared
     copy(char_type* __s1, const char_type* __s2, std::size_t __n)
                                                       ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:199:33: error: ‘std::size_t’ has not been declared
     assign(char_type* __s, std::size_t __n, char_type __a)
                                 ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/exception:170:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:33,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/c++allocator.h:33,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:46,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/exception_ptr.h:97:30: error: field ‘nullptr_t’ has incomplete type ‘std::__exception_ptr::exception_ptr’
       exception_ptr(nullptr_t) noexcept
                              ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/exception_ptr.h:77:11: note: definition of ‘class std::__exception_ptr::exception_ptr’ is not complete until the closing brace
     class exception_ptr
           ^~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/exception_ptr.h:97:30: error: expected ‘;’ at end of member declaration
       exception_ptr(nullptr_t) noexcept
                              ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/exception_ptr.h:97:32: error: expected unqualified-id before ‘noexcept’
       exception_ptr(nullptr_t) noexcept
                                ^~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:33:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/c++allocator.h:33,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:46,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:116:31: error: declaration of ‘operator new’ as non-function
 void* operator new(std::size_t) _GLIBCXX_THROW (std::bad_alloc)
                               ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:116:20: error: ‘size_t’ is not a member of ‘std’
 void* operator new(std::size_t) _GLIBCXX_THROW (std::bad_alloc)
                    ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:116:20: note: suggested alternative:
In file included from /usr/include/wchar.h:51:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/cwchar:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/postypes.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/lib/gcc/x86_64-redhat-linux/6.3.1/include/stddef.h:216:23: note:   ‘size_t’
 typedef __SIZE_TYPE__ size_t;
                       ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:33:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/c++allocator.h:33,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:46,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:118:33: error: declaration of ‘operator new []’ as non-function
 void* operator new[](std::size_t) _GLIBCXX_THROW (std::bad_alloc)
                                 ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:118:22: error: ‘size_t’ is not a member of ‘std’
 void* operator new[](std::size_t) _GLIBCXX_THROW (std::bad_alloc)
                      ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:118:22: note: suggested alternative:
In file included from /usr/include/wchar.h:51:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/cwchar:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/postypes.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/lib/gcc/x86_64-redhat-linux/6.3.1/include/stddef.h:216:23: note:   ‘size_t’
 typedef __SIZE_TYPE__ size_t;
                       ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:33:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/c++allocator.h:33,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:46,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:130:25: error: declaration of ‘operator new’ as non-function
 void* operator new(std::size_t, const std::nothrow_t&) _GLIBCXX_USE_NOEXCEPT
                         ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:130:20: error: ‘size_t’ is not a member of ‘std’
 void* operator new(std::size_t, const std::nothrow_t&) _GLIBCXX_USE_NOEXCEPT
                    ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:130:20: note: suggested alternative:
In file included from /usr/include/wchar.h:51:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/cwchar:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/postypes.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/lib/gcc/x86_64-redhat-linux/6.3.1/include/stddef.h:216:23: note:   ‘size_t’
 typedef __SIZE_TYPE__ size_t;
                       ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:33:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/c++allocator.h:33,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:46,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:130:33: error: expected primary-expression before ‘const’
 void* operator new(std::size_t, const std::nothrow_t&) _GLIBCXX_USE_NOEXCEPT
                                 ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:132:27: error: declaration of ‘operator new []’ as non-function
 void* operator new[](std::size_t, const std::nothrow_t&) _GLIBCXX_USE_NOEXCEPT
                           ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:132:22: error: ‘size_t’ is not a member of ‘std’
 void* operator new[](std::size_t, const std::nothrow_t&) _GLIBCXX_USE_NOEXCEPT
                      ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:132:22: note: suggested alternative:
In file included from /usr/include/wchar.h:51:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/cwchar:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/postypes.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/lib/gcc/x86_64-redhat-linux/6.3.1/include/stddef.h:216:23: note:   ‘size_t’
 typedef __SIZE_TYPE__ size_t;
                       ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:33:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/c++allocator.h:33,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:46,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:132:35: error: expected primary-expression before ‘const’
 void* operator new[](std::size_t, const std::nothrow_t&) _GLIBCXX_USE_NOEXCEPT
                                   ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:146:32: error: declaration of ‘operator new’ as non-function
 inline void* operator new(std::size_t, void* __p) _GLIBCXX_USE_NOEXCEPT
                                ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:146:27: error: ‘size_t’ is not a member of ‘std’
 inline void* operator new(std::size_t, void* __p) _GLIBCXX_USE_NOEXCEPT
                           ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:146:27: note: suggested alternative:
In file included from /usr/include/wchar.h:51:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/cwchar:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/postypes.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/lib/gcc/x86_64-redhat-linux/6.3.1/include/stddef.h:216:23: note:   ‘size_t’
 typedef __SIZE_TYPE__ size_t;
                       ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:33:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/c++allocator.h:33,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:46,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:146:40: error: expected primary-expression before ‘void’
 inline void* operator new(std::size_t, void* __p) _GLIBCXX_USE_NOEXCEPT
                                        ^~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:148:34: error: declaration of ‘operator new []’ as non-function
 inline void* operator new[](std::size_t, void* __p) _GLIBCXX_USE_NOEXCEPT
                                  ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:148:29: error: ‘size_t’ is not a member of ‘std’
 inline void* operator new[](std::size_t, void* __p) _GLIBCXX_USE_NOEXCEPT
                             ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:148:29: note: suggested alternative:
In file included from /usr/include/wchar.h:51:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/cwchar:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/postypes.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/lib/gcc/x86_64-redhat-linux/6.3.1/include/stddef.h:216:23: note:   ‘size_t’
 typedef __SIZE_TYPE__ size_t;
                       ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:33:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/c++allocator.h:33,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:46,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:148:42: error: expected primary-expression before ‘void’
 inline void* operator new[](std::size_t, void* __p) _GLIBCXX_USE_NOEXCEPT
                                          ^~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/c++allocator.h:33:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:46,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:44:14: error: ‘std::size_t’ has not been declared
   using std::size_t;
              ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:45:14: error: ‘std::ptrdiff_t’ has not been declared
   using std::ptrdiff_t;
              ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:62:15: error: ‘ptrdiff_t’ does not name a type
       typedef ptrdiff_t  difference_type;
               ^~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:72:15: error: ‘ptrdiff_t’ does not name a type
       typedef ptrdiff_t   difference_type;
               ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:112:15: error: ‘ptrdiff_t’ does not name a type
       typedef ptrdiff_t  difference_type;
               ^~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:44:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h:45:26: error: ‘streamsize’ has not been declared
       const _CharT* __s, streamsize __n)
                          ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h: In function ‘void std::__ostream_write(std::basic_ostream<_CharT, _Traits>&, const _CharT*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h:50:13: error: ‘streamsize’ does not name a type
       const streamsize __put = __out.rdbuf()->sputn(__s, __n);
             ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h:51:11: error: ‘__put’ was not declared in this scope
       if (__put != __n)
           ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h:57:59: error: ‘streamsize’ has not been declared
     __ostream_fill(basic_ostream<_CharT, _Traits>& __out, streamsize __n)
                                                           ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h:77:27: error: ‘streamsize’ has not been declared
        const _CharT* __s, streamsize __n)
                           ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h: In function ‘std::basic_ostream<_CharT, _Traits>& std::__ostream_insert(std::basic_ostream<_CharT, _Traits>&, const _CharT*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h:87:14: error: ‘streamsize’ does not name a type
        const streamsize __w = __out.width();
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h:88:12: error: ‘__w’ was not declared in this scope
        if (__w > __n)
            ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h:118:68: error: ‘streamsize’ has not been declared
   extern template ostream& __ostream_insert(ostream&, const char*, streamsize);
                                                                    ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h:122:11: error: ‘streamsize’ has not been declared
           streamsize);
           ^~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/alloc_traits.h:36:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/alloc_traits.h:404:36: error: ‘ptrdiff_t’ in namespace ‘std’ does not name a type
       using difference_type = std::ptrdiff_t;
                                    ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/alloc_traits.h:407:30: error: ‘size_t’ in namespace ‘std’ does not name a type
       using size_type = std::size_t;
                              ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/alloc_traits.h:435:37: error: ‘size_type’ has not been declared
       allocate(allocator_type& __a, size_type __n)
                                     ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/alloc_traits.h:449:37: error: ‘size_type’ has not been declared
       allocate(allocator_type& __a, size_type __n, const_void_pointer __hint)
                                     ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/alloc_traits.h:461:52: error: ‘size_type’ has not been declared
       deallocate(allocator_type& __a, pointer __p, size_type __n)
                                                    ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/alloc_traits.h:494:14: error: ‘size_type’ does not name a type
       static size_type
              ^~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:55:51: error: ‘std::size_t’ has not been declared
     const char* __name, const _CharT* __str, std::size_t* __idx,
                                                   ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:48: error: ‘std::size_t’ has not been declared
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
                                                ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:90:31: error: ‘std::size_t’ has not been declared
      __builtin_va_list), std::size_t __n,
                               ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In instantiation of ‘class std::basic_string<char>’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5428:68:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:2624:61: error: no type named ‘difference_type’ in ‘std::basic_string<char>::_CharT_alloc_type {aka class std::allocator<char>}’
       typedef typename _CharT_alloc_type::difference_type   difference_type;
                                                             ^~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘int std::stoi(const string&, size_t*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5429:19: error: no matching function for call to ‘__stoa(long int (*)(const char*, char**, int) throw (), const char [5], const char*, size_t*&, int&)’
      __idx, __base); }
                   ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5429:19: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
      __idx, __base); }
                   ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘long int std::stol(const string&, size_t*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5434:22: error: no matching function for call to ‘__stoa(long int (*)(const char*, char**, int) throw (), const char [5], const char*, size_t*&, int&)’
         __idx, __base); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5434:22: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
         __idx, __base); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘long unsigned int std::stoul(const string&, size_t*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5439:22: error: no matching function for call to ‘__stoa(long unsigned int (*)(const char*, char**, int) throw (), const char [6], const char*, size_t*&, int&)’
         __idx, __base); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5439:22: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
         __idx, __base); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘long long int std::stoll(const string&, size_t*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5444:22: error: no matching function for call to ‘__stoa(long long int (*)(const char*, char**, int) throw (), const char [6], const char*, size_t*&, int&)’
         __idx, __base); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5444:22: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
         __idx, __base); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘long long unsigned int std::stoull(const string&, size_t*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5449:22: error: no matching function for call to ‘__stoa(long long unsigned int (*)(const char*, char**, int) throw (), const char [7], const char*, size_t*&, int&)’
         __idx, __base); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5449:22: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
         __idx, __base); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘float std::stof(const string&, size_t*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5454:72: error: no matching function for call to ‘__stoa(float (*)(const char*, char**) throw (), const char [5], const char*, size_t*&)’
   { return __gnu_cxx::__stoa(&std::strtof, "stof", __str.c_str(), __idx); }
                                                                        ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5454:72: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
   { return __gnu_cxx::__stoa(&std::strtof, "stof", __str.c_str(), __idx); }
                                                                        ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘double std::stod(const string&, size_t*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5458:72: error: no matching function for call to ‘__stoa(double (*)(const char*, char**) throw (), const char [5], const char*, size_t*&)’
   { return __gnu_cxx::__stoa(&std::strtod, "stod", __str.c_str(), __idx); }
                                                                        ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5458:72: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
   { return __gnu_cxx::__stoa(&std::strtod, "stod", __str.c_str(), __idx); }
                                                                        ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘long double std::stold(const string&, size_t*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5462:74: error: no matching function for call to ‘__stoa(long double (*)(const char*, char**) throw (), const char [6], const char*, size_t*&)’
   { return __gnu_cxx::__stoa(&std::strtold, "stold", __str.c_str(), __idx); }
                                                                          ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5462:74: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
   { return __gnu_cxx::__stoa(&std::strtold, "stold", __str.c_str(), __idx); }
                                                                          ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::string std::to_string(int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5472:20: error: no matching function for call to ‘__to_xstring(int (*)(char*, size_t, const char*, __va_list_tag*) throw (), long unsigned int, const char [3], int&)’
         "%d", __val); }
                    ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5472:20: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
         "%d", __val); }
                    ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::string std::to_string(unsigned int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5478:20: error: no matching function for call to ‘__to_xstring(int (*)(char*, size_t, const char*, __va_list_tag*) throw (), long unsigned int, const char [3], unsigned int&)’
         "%u", __val); }
                    ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5478:20: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
         "%u", __val); }
                    ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::string std::to_string(long int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5483:21: error: no matching function for call to ‘__to_xstring(int (*)(char*, size_t, const char*, __va_list_tag*) throw (), long unsigned int, const char [4], long int&)’
         "%ld", __val); }
                     ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5483:21: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
         "%ld", __val); }
                     ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::string std::to_string(long unsigned int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5489:21: error: no matching function for call to ‘__to_xstring(int (*)(char*, size_t, const char*, __va_list_tag*) throw (), long unsigned int, const char [4], long unsigned int&’
         "%lu", __val); }
                     ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5489:21: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
         "%lu", __val); }
                     ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::string std::to_string(long long int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5495:22: error: no matching function for call to ‘__to_xstring(int (*)(char*, size_t, const char*, __va_list_tag*) throw (), long unsigned int, const char [5], long long int&)’
         "%lld", __val); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5495:22: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
         "%lld", __val); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::string std::to_string(long long unsigned int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5501:22: error: no matching function for call to ‘__to_xstring(int (*)(char*, size_t, const char*, __va_list_tag*) throw (), long unsigned int, const char [5], long long unsigned int&)’
         "%llu", __val); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5501:22: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
         "%llu", __val); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::string std::to_string(float)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5509:20: error: no matching function for call to ‘__to_xstring(int (*)(char*, size_t, const char*, __va_list_tag*) throw (), const int&, const char [3], float&)’
         "%f", __val);
                    ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5509:20: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
         "%f", __val);
                    ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::string std::to_string(double)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5518:20: error: no matching function for call to ‘__to_xstring(int (*)(char*, size_t, const char*, __va_list_tag*) throw (), const int&, const char [3], double&)’
         "%f", __val);
                    ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5518:20: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
         "%f", __val);
                    ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::string std::to_string(long double)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5527:21: error: no matching function for call to ‘__to_xstring(int (*)(char*, size_t, const char*, __va_list_tag*) throw (), const int&, const char [4], long double&)’
         "%Lf", __val);
                     ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5527:21: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
         "%Lf", __val);
                     ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In instantiation of ‘class std::basic_string<wchar_t>’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5534:68:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:2624:61: error: no type named ‘difference_type’ in ‘std::basic_string<wchar_t>::_CharT_alloc_type {aka class std::allocator<wchar_t>}’
       typedef typename _CharT_alloc_type::difference_type   difference_type;
                                                             ^~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘int std::stoi(const wstring&, size_t*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5535:19: error: no matching function for call to ‘__stoa(long int (*)(const wchar_t*, wchar_t**, int) throw (), const char [5], const wchar_t*, size_t*&, int&)’
      __idx, __base); }
                   ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5535:19: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
      __idx, __base); }
                   ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘long int std::stol(const wstring&, size_t*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5540:22: error: no matching function for call to ‘__stoa(long int (*)(const wchar_t*, wchar_t**, int) throw (), const char [5], const wchar_t*, size_t*&, int&)’
         __idx, __base); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5540:22: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
         __idx, __base); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘long unsigned int std::stoul(const wstring&, size_t*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5545:22: error: no matching function for call to ‘__stoa(long unsigned int (*)(const wchar_t*, wchar_t**, int) throw (), const char [6], const wchar_t*, size_t*&, int&)’
         __idx, __base); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5545:22: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
         __idx, __base); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘long long int std::stoll(const wstring&, size_t*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5550:22: error: no matching function for call to ‘__stoa(long long int (*)(const wchar_t*, wchar_t**, int) throw (), const char [6], const wchar_t*, size_t*&, int&)’
         __idx, __base); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5550:22: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
         __idx, __base); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘long long unsigned int std::stoull(const wstring&, size_t*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5555:22: error: no matching function for call to ‘__stoa(long long unsigned int (*)(const wchar_t*, wchar_t**, int) throw (), const char [7], const wchar_t*, size_t*&, int&)’
         __idx, __base); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5555:22: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
         __idx, __base); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘float std::stof(const wstring&, size_t*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5560:72: error: no matching function for call to ‘__stoa(float (*)(const wchar_t*, wchar_t**) throw (), const char [5], const wchar_t*, size_t*&)’
   { return __gnu_cxx::__stoa(&std::wcstof, "stof", __str.c_str(), __idx); }
                                                                        ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5560:72: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
   { return __gnu_cxx::__stoa(&std::wcstof, "stof", __str.c_str(), __idx); }
                                                                        ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘double std::stod(const wstring&, size_t*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5564:72: error: no matching function for call to ‘__stoa(double (*)(const wchar_t*, wchar_t**) throw (), const char [5], const wchar_t*, size_t*&)’
   { return __gnu_cxx::__stoa(&std::wcstod, "stod", __str.c_str(), __idx); }
                                                                        ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5564:72: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
   { return __gnu_cxx::__stoa(&std::wcstod, "stod", __str.c_str(), __idx); }
                                                                        ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘long double std::stold(const wstring&, size_t*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5568:74: error: no matching function for call to ‘__stoa(long double (*)(const wchar_t*, wchar_t**) throw (), const char [6], const wchar_t*, size_t*&)’
   { return __gnu_cxx::__stoa(&std::wcstold, "stold", __str.c_str(), __idx); }
                                                                          ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5568:74: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
   { return __gnu_cxx::__stoa(&std::wcstold, "stold", __str.c_str(), __idx); }
                                                                          ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::wstring std::to_wstring(int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5575:22: error: no matching function for call to ‘__to_xstring(int (*)(wchar_t*, size_t, const wchar_t*, __va_list_tag*) throw (), long unsigned int, const wchar_t [3], int&)’
          L"%d", __val); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5575:22: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
          L"%d", __val); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::wstring std::to_wstring(unsigned int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5581:22: error: no matching function for call to ‘__to_xstring(int (*)(wchar_t*, size_t, const wchar_t*, __va_list_tag*) throw (), long unsigned int, const wchar_t [3], unsigned int&)’
          L"%u", __val); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5581:22: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
          L"%u", __val); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::wstring std::to_wstring(long int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5586:23: error: no matching function for call to ‘__to_xstring(int (*)(wchar_t*, size_t, const wchar_t*, __va_list_tag*) throw (), long unsigned int, const wchar_t [4], long int&’
          L"%ld", __val); }
                       ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5586:23: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
          L"%ld", __val); }
                       ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::wstring std::to_wstring(long unsigned int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5592:23: error: no matching function for call to ‘__to_xstring(int (*)(wchar_t*, size_t, const wchar_t*, __va_list_tag*) throw (), long unsigned int, const wchar_t [4], long unsigned int&)’
          L"%lu", __val); }
                       ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5592:23: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
          L"%lu", __val); }
                       ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::wstring std::to_wstring(long long int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5598:24: error: no matching function for call to ‘__to_xstring(int (*)(wchar_t*, size_t, const wchar_t*, __va_list_tag*) throw (), long unsigned int, const wchar_t [5], long long int&)’
          L"%lld", __val); }
                        ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5598:24: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
          L"%lld", __val); }
                        ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::wstring std::to_wstring(long long unsigned int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5604:24: error: no matching function for call to ‘__to_xstring(int (*)(wchar_t*, size_t, const wchar_t*, __va_list_tag*) throw (), long unsigned int, const wchar_t [5], long long unsigned int&)’
          L"%llu", __val); }
                        ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5604:24: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
          L"%llu", __val); }
                        ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::wstring std::to_wstring(float)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5612:22: error: no matching function for call to ‘__to_xstring(int (*)(wchar_t*, size_t, const wchar_t*, __va_list_tag*) throw (), const int&, const wchar_t [3], float&)’
          L"%f", __val);
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5612:22: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
          L"%f", __val);
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::wstring std::to_wstring(double)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5621:22: error: no matching function for call to ‘__to_xstring(int (*)(wchar_t*, size_t, const wchar_t*, __va_list_tag*) throw (), const int&, const wchar_t [3], double&)’
          L"%f", __val);
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5621:22: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
          L"%f", __val);
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::wstring std::to_wstring(long double)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5630:23: error: no matching function for call to ‘__to_xstring(int (*)(wchar_t*, size_t, const wchar_t*, __va_list_tag*) throw (), const int&, const wchar_t [4], long double&)’
          L"%Lf", __val);
                       ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5630:23: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
          L"%Lf", __val);
                       ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In instantiation of ‘class std::basic_string<char16_t>’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5692:41:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:2624:61: error: no type named ‘difference_type’ in ‘std::basic_string<char16_t>::_CharT_alloc_type {aka class std::allocator<char16_t>}’
       typedef typename _CharT_alloc_type::difference_type   difference_type;
                                                             ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In instantiation of ‘class std::basic_string<char32_t>’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5707:41:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:2624:61: error: no type named ‘difference_type’ in ‘std::basic_string<char32_t>::_CharT_alloc_type {aka class std::allocator<char32_t>}’
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:53:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.tcc: In function ‘std::basic_istream<_CharT, _Traits>& std::operator>>(std::basic_istream<_CharT, _Traits>&, std::basic_string<_CharT, _Traits, _Alloc>&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.tcc:1459:14: error: ‘streamsize’ does not name a type
        const streamsize __w = __in.width();
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.tcc:1460:32: error: ‘__w’ was not declared in this scope
        const __size_type __n = __w > 0 ? static_cast<__size_type>(__w)
                                ^~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ios:42:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:38,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:39,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ios_base.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ios_base.h:520:5: error: ‘streamsize’ does not name a type
     streamsize  _M_precision;
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ios_base.h:521:5: error: ‘streamsize’ does not name a type
     streamsize  _M_width;
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ios_base.h:688:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ios_base.h:697:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ios_base.h:711:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ios_base.h:720:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ios:43:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:38,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:39,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:50:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:147:14: error: ‘streamsize’ does not name a type
       friend streamsize
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:239:33: error: ‘streamsize’ has not been declared
       pubsetbuf(char_type* __s, streamsize __n)
                                 ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:283:7: error: ‘streamsize’ does not name a type
       streamsize
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:356:7: error: ‘streamsize’ does not name a type
       streamsize
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:449:7: error: ‘streamsize’ does not name a type
       streamsize
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:591:26: error: ‘streamsize’ has not been declared
       setbuf(char_type*, streamsize)
                          ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:648:15: error: ‘streamsize’ does not name a type
       virtual streamsize
               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:664:15: error: ‘streamsize’ does not name a type
       virtual streamsize
               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:741:15: error: ‘streamsize’ does not name a type
       virtual streamsize
               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:794:20: error: ‘streamsize’ has not been declared
       __safe_gbump(streamsize __n) { _M_in_cur += __n; }
                    ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:797:20: error: ‘streamsize’ has not been declared
       __safe_pbump(streamsize __n) { _M_out_cur += __n; }
                    ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:837:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:842:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:850:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ios:43,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:38,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:39,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:44:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:78:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:115:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:138:12: error: ‘streamsize’ does not name a type
     inline streamsize
            ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:151:5: error: ‘streamsize’ is not a template function
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:152:5: error: expected ‘;’ before ‘__copy_streambufs’
     __copy_streambufs(basic_streambuf<char>*,
     ^~~~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:155:5: error: ‘streamsize’ is not a template function
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:156:5: error: expected ‘;’ before ‘__copy_streambufs_eof’
     __copy_streambufs_eof(basic_streambuf<char>*,
     ^~~~~~~~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:162:5: error: ‘streamsize’ is not a template function
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:163:5: error: expected ‘;’ before ‘__copy_streambufs’
     __copy_streambufs(basic_streambuf<wchar_t>*,
     ^~~~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:166:5: error: ‘streamsize’ is not a template function
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:167:5: error: expected ‘;’ before ‘__copy_streambufs_eof’
     __copy_streambufs_eof(basic_streambuf<wchar_t>*,
     ^~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.h:48:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_ios.h:37,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ios:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:38,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:39,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h:279:34: error: ‘streamsize’ has not been declared
       _M_put(const _CharT* __ws, streamsize __len)
                                  ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h: In function ‘typename __gnu_cxx::__enable_if<std::__is_char<_CharT>::__value, std::ostreambuf_iterator<_CharT, std::char_traits<_CharT> > >::__type std::__copy_move_a2(_CharT*, _CharT*, std::ostreambuf_iterator<_CharT, std::char_traits<_CharT> >)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h:313:13: error: ‘streamsize’ does not name a type
       const streamsize __num = __last - __first;
             ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h:314:11: error: ‘__num’ was not declared in this scope
       if (__num > 0)
           ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h: In function ‘typename __gnu_cxx::__enable_if<std::__is_char<_CharT>::__value, std::ostreambuf_iterator<_CharT, std::char_traits<_CharT> > >::__type std::__copy_move_a2(const _CharT*, const _CharT*, std::ostreambuf_iterator<_CharT, std::char_traits<_CharT> >)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h:325:13: error: ‘streamsize’ does not name a type
       const streamsize __num = __last - __first;
             ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h:326:11: error: ‘__num’ was not declared in this scope
       if (__num > 0)
           ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h: In function ‘typename __gnu_cxx::__enable_if<std::__is_char<_CharT>::__value, _CharT*>::__type std::__copy_move_a2(std::istreambuf_iterator<_CharT, std::char_traits<_CharT> >, std::istreambuf_iterator<_CharT, std::char_traits<_CharT> >, _CharT*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h:348:14: error: ‘streamsize’ does not name a type
        const streamsize __n = __sb->egptr() - __sb->gptr();
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h:349:12: error: ‘__n’ was not declared in this scope
        if (__n > 1)
            ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h: In function ‘typename __gnu_cxx::__enable_if<std::__is_char<_CharT2>::__value, std::istreambuf_iterator<_CharT> >::__type std::find(std::istreambuf_iterator<_CharT>, std::istreambuf_iterator<_CharT>, const _CharT2&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h:385:8: error: ‘streamsize’ was not declared in this scope
        streamsize __n = __sb->egptr() - __sb->gptr();
        ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h:386:12: error: ‘__n’ was not declared in this scope
        if (__n > 1)
            ^~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_ios.h:37:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ios:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:38,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:39,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.h:99:29: error: ‘streamsize’ has not been declared
       const _CharT* __olds, streamsize __newlen, streamsize __oldlen);
                             ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.h:99:50: error: ‘streamsize’ has not been declared
       const _CharT* __olds, streamsize __newlen, streamsize __oldlen);
                                                  ^~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_ios.h:37:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ios:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:38,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:39,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.h:2484:32: error: ‘streamsize’ has not been declared
       _M_pad(char_type __fill, streamsize __w, ios_base& __io,
                                ^~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.h:2651:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_ios.h:37,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ios:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:38,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:39,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:780:27: error: ‘streamsize’ has not been declared
     _M_pad(_CharT __fill, streamsize __w, ios_base& __io,
                           ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc: In member function ‘_OutIter std::num_put<_CharT, _OutIter>::_M_insert_int(_OutIter, std::ios_base&, _CharT, _ValueT) const’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:921:8: error: ‘streamsize’ does not name a type
  const streamsize __w = __io.width();
        ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:922:6: error: ‘__w’ was not declared in this scope
  if (__w > static_cast<streamsize>(__len))
      ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:922:24: error: ‘streamsize’ does not name a type
  if (__w > static_cast<streamsize>(__len))
                        ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:929:7: error: ‘class std::ios_base’ has no member named ‘width’
  __io.width(0);
       ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc: In member function ‘_OutIter std::num_put<_CharT, _OutIter>::_M_insert_float(_OutIter, std::ios_base&, _CharT, char, _ValueT) const’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:984:8: error: ‘streamsize’ does not name a type
  const streamsize __prec = __io.precision() < 0 ? 6 : __io.precision();
        ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1006:14: error: ‘__prec’ was not declared in this scope
      __fbuf, __prec, __v);
              ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1018:18: error: ‘__prec’ was not declared in this scope
          __fbuf, __prec, __v);
                  ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1071:6: error: ‘streamsize’ was not declared in this scope
      streamsize __off = 0;
      ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1074:3: error: ‘__off’ was not declared in this scope
   __off = 1;
   ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1080:45: error: ‘__off’ was not declared in this scope
       __lc->_M_thousands_sep, __wp, __ws2 + __off,
                                             ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1088:8: error: ‘streamsize’ does not name a type
  const streamsize __w = __io.width();
        ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1089:6: error: ‘__w’ was not declared in this scope
  if (__w > static_cast<streamsize>(__len))
      ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1089:24: error: ‘streamsize’ does not name a type
  if (__w > static_cast<streamsize>(__len))
                        ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1096:7: error: ‘class std::ios_base’ has no member named ‘width’
  __io.width(0);
       ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc: In member function ‘virtual _OutIter std::num_put<_CharT, _OutIter>::do_put(std::num_put<_CharT, _OutIter>::iter_type, std::ios_base&, std::num_put<_CharT, _OutIter>::char_type, bool) const’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1126:10: error: ‘streamsize’ does not name a type
    const streamsize __w = __io.width();
          ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1127:8: error: ‘__w’ was not declared in this scope
    if (__w > static_cast<streamsize>(__len))
        ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1127:26: error: ‘streamsize’ does not name a type
    if (__w > static_cast<streamsize>(__len))
                          ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1129:14: error: ‘streamsize’ does not name a type
        const streamsize __plen = __w - __len;
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1132:10: error: ‘__plen’ was not declared in this scope
        * __plen));
          ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1135:13: error: ‘class std::ios_base’ has no member named ‘width’
        __io.width(0);
             ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1149:9: error: ‘class std::ios_base’ has no member named ‘width’
    __io.width(0);
         ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1210:8: error: ‘streamsize’ has not been declared
        streamsize __newlen, streamsize __oldlen)
        ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1210:29: error: ‘streamsize’ has not been declared
        streamsize __newlen, streamsize __oldlen)
                             ^~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:39:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:311:38: error: ‘streamsize’ has not been declared
       _M_write(const char_type* __s, streamsize __n)
                                      ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:335:35: error: ‘streamsize’ has not been declared
       write(const char_type* __s, streamsize __n);
                                   ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream: In member function ‘void std::basic_ostream<_CharT, _Traits>::_M_write(const char_type*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:313:8: error: ‘streamsize’ does not name a type
  const streamsize __put = this->rdbuf()->sputn(__s, __n);
        ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:314:6: error: ‘__put’ was not declared in this scope
  if (__put != __n)
      ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream: In function ‘std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, const _CharT*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:545:17: error: ‘streamsize’ does not name a type
     static_cast<streamsize>(_Traits::length(__s)));
                 ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream: In function ‘std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, _Traits>&, const char*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:562:17: error: ‘streamsize’ does not name a type
     static_cast<streamsize>(_Traits::length(__s)));
                 ^~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:638:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:39,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream.tcc: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream.tcc:183:30: error: ‘streamsize’ has not been declared
     write(const _CharT* __s, streamsize __n)
                              ^~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:40:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:82:7: error: ‘streamsize’ does not name a type
       streamsize   _M_gcount;
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:268:7: error: ‘streamsize’ does not name a type
       streamsize
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:343:27: error: ‘streamsize’ has not been declared
       get(char_type* __s, streamsize __n, char_type __delim);
                           ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:354:27: error: ‘streamsize’ has not been declared
       get(char_type* __s, streamsize __n)
                           ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:416:31: error: ‘streamsize’ has not been declared
       getline(char_type* __s, streamsize __n, char_type __delim);
                               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:427:31: error: ‘streamsize’ has not been declared
       getline(char_type* __s, streamsize __n)
                               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:451:7: error: expected ‘;’ at end of member declaration
       ignore(streamsize __n, int_type __delim);
       ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:451:25: error: expected ‘)’ before ‘__n’
       ignore(streamsize __n, int_type __delim);
                         ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:454:7: error: expected ‘;’ at end of member declaration
       ignore(streamsize __n);
       ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:454:14: error: redeclaration of ‘std::basic_istream<_CharT, _Traits>::__istream_type& std::basic_istream<_CharT, _Traits>::ignore’
       ignore(streamsize __n);
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:451:14: note: previous declaration ‘std::basic_istream<_CharT, _Traits>::__istream_type& std::basic_istream<_CharT, _Traits>::ignore’
       ignore(streamsize __n, int_type __delim);
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:454:25: error: expected ‘)’ before ‘__n’
       ignore(streamsize __n);
                         ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:457:14: error: ‘std::basic_istream<_CharT, _Traits>::__istream_type& std::basic_istream<_CharT, _Traits>::ignore()’ conflicts with a previous declaration
       ignore();
              ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:451:14: note: previous declaration ‘std::basic_istream<_CharT, _Traits>::__istream_type& std::basic_istream<_CharT, _Traits>::ignore’
       ignore(streamsize __n, int_type __delim);
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:486:28: error: ‘streamsize’ has not been declared
       read(char_type* __s, streamsize __n);
                            ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:504:7: error: ‘streamsize’ does not name a type
       streamsize
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream: In constructor ‘std::basic_istream<_CharT, _Traits>::basic_istream(std::basic_istream<_CharT, _Traits>::__streambuf_type*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:94:9: error: class ‘std::basic_istream<_CharT, _Traits>’ does not have any field named ‘_M_gcount’
       : _M_gcount(streamsize(0))
         ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:94:31: error: there are no arguments to ‘streamsize’ that depend on a template parameter, so a declaration of ‘streamsize’ must be available [-fpermissive]
       : _M_gcount(streamsize(0))
                               ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:94:31: note: (if you use ‘-fpermissive’, G++ will accept your code, but allowing the use of an undeclared name is deprecated)
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream: In destructor ‘virtual std::basic_istream<_CharT, _Traits>::~basic_istream()’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:104:9: error: ‘_M_gcount’ was not declared in this scope
       { _M_gcount = streamsize(0); }
         ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:104:33: error: there are no arguments to ‘streamsize’ that depend on a template parameter, so a declaration of ‘streamsize’ must be available [-fpermissive]
       { _M_gcount = streamsize(0); }
                                 ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream: In constructor ‘std::basic_istream<_CharT, _Traits>::basic_istream()’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:607:9: error: class ‘std::basic_istream<_CharT, _Traits>’ does not have any field named ‘_M_gcount’
       : _M_gcount(streamsize(0))
         ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:607:31: error: there are no arguments to ‘streamsize’ that depend on a template parameter, so a declaration of ‘streamsize’ must be available [-fpermissive]
       : _M_gcount(streamsize(0))
                               ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream: In constructor ‘std::basic_istream<_CharT, _Traits>::basic_istream(std::basic_istream<_CharT, _Traits>&&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:614:23: error: class ‘std::basic_istream<_CharT, _Traits>’ does not have any field named ‘_M_gcount’
       : __ios_type(), _M_gcount(__rhs._M_gcount)
                       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream: In member function ‘void std::basic_istream<_CharT, _Traits>::swap(std::basic_istream<_CharT, _Traits>&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:635:12: error: ‘_M_gcount’ was not declared in this scope
  std::swap(_M_gcount, __rhs._M_gcount);
            ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream: In instantiation of ‘class std::basic_istream<char>’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:647:24:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:451:14: error: ‘std::basic_istream<_CharT, _Traits>::__istream_type& std::basic_istream<_CharT, _Traits>::ignore() [with _CharT = char; _Traits = std::char_traits<char>; std::basic_istream<_CharT, _Traits>::__istream_type = std::basic_istream<char>]’ conflicts with a previous declaration
       ignore(streamsize __n, int_type __delim);
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:451:14: note: previous declaration ‘std::basic_istream<char>::__istream_type& std::basic_istream<char>::ignore’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:648:29: error: ‘streamsize’ has not been declared
     getline(char_type* __s, streamsize __n, char_type __delim);
                             ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:653:12: error: ‘std::basic_istream<char>& std::basic_istream<char>::ignore’ is not a static data member of ‘class std::basic_istream<char>’
     ignore(streamsize __n);
            ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:653:12: error: ‘streamsize’ was not declared in this scope
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:658:12: error: ‘std::basic_istream<char>& std::basic_istream<char>::ignore’ is not a static data member of ‘class std::basic_istream<char>’
     ignore(streamsize __n, int_type __delim);
            ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:658:12: error: ‘streamsize’ was not declared in this scope
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:658:37: error: expected primary-expression before ‘__delim’
     ignore(streamsize __n, int_type __delim);
                                     ^~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:658:44: error: expression list treated as compound expression in initializer [-fpermissive]
     ignore(streamsize __n, int_type __delim);
                                            ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream: In instantiation of ‘class std::basic_istream<wchar_t>’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:663:27:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:451:14: error: ‘std::basic_istream<_CharT, _Traits>::__istream_type& std::basic_istream<_CharT, _Traits>::ignore() [with _CharT = wchar_t; _Traits = std::char_traits<wchar_t>; std::basic_istream<_CharT, _Traits>::__istream_type = std::basic_istream<wchar_t>]’ conflicts with a previous declaration
       ignore(streamsize __n, int_type __delim);
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:451:14: note: previous declaration ‘std::basic_istream<wchar_t>::__istream_type& std::basic_istream<wchar_t>::ignore’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:664:29: error: ‘streamsize’ has not been declared
     getline(char_type* __s, streamsize __n, char_type __delim);
                             ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:669:12: error: ‘std::basic_istream<wchar_t>& std::basic_istream<wchar_t>::ignore’ is not a static data member of ‘class std::basic_istream<wchar_t>’
     ignore(streamsize __n);
            ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:669:12: error: ‘streamsize’ was not declared in this scope
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:674:12: error: ‘std::basic_istream<wchar_t>& std::basic_istream<wchar_t>::ignore’ is not a static data member of ‘class std::basic_istream<wchar_t>’
     ignore(streamsize __n, int_type __delim);
            ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:674:12: error: ‘streamsize’ was not declared in this scope
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:674:37: error: expected primary-expression before ‘__delim’
     ignore(streamsize __n, int_type __delim);
                                     ^~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:674:44: error: expression list treated as compound expression in initializer [-fpermissive]
     ignore(streamsize __n, int_type __delim);
                                            ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:934:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In member function ‘std::basic_istream<_CharT, _Traits>::int_type std::basic_istream<_CharT, _Traits>::get()’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:240:7: error: ‘_M_gcount’ was not declared in this scope
       _M_gcount = 0;
       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In member function ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::get(std::basic_istream<_CharT, _Traits>::char_type&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:274:7: error: ‘_M_gcount’ was not declared in this scope
       _M_gcount = 0;
       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:309:25: error: ‘streamsize’ has not been declared
     get(char_type* __s, streamsize __n, char_type __delim)
                         ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In member function ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::get(std::basic_istream<_CharT, _Traits>::char_type*, int, std::basic_istream<_CharT, _Traits>::char_type)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:311:7: error: ‘_M_gcount’ was not declared in this scope
       _M_gcount = 0;
       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In member function ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::get(std::basic_istream<_CharT, _Traits>::__streambuf_type&, std::basic_istream<_CharT, _Traits>::char_type)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:358:7: error: ‘_M_gcount’ was not declared in this scope
       _M_gcount = 0;
       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:400:29: error: ‘streamsize’ has not been declared
     getline(char_type* __s, streamsize __n, char_type __delim)
                             ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In member function ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::getline(std::basic_istream<_CharT, _Traits>::char_type*, int, std::basic_istream<_CharT, _Traits>::char_type)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:402:7: error: ‘_M_gcount’ was not declared in this scope
       _M_gcount = 0;
       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In member function ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::ignore()’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:462:7: error: ‘_M_gcount’ was not declared in this scope
       _M_gcount = 0;
       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:493:12: error: ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::ignore’ is not a static data member of ‘class std::basic_istream<_CharT, _Traits>’
     ignore(streamsize __n)
            ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:493:12: error: template definition of non-template ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::ignore’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:493:12: error: ‘streamsize’ was not declared in this scope
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:555:12: error: ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::ignore’ is not a static data member of ‘class std::basic_istream<_CharT, _Traits>’
     ignore(streamsize __n, int_type __delim)
            ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:555:12: error: template definition of non-template ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::ignore’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:555:12: error: ‘streamsize’ was not declared in this scope
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:555:37: error: expected primary-expression before ‘__delim’
     ignore(streamsize __n, int_type __delim)
                                     ^~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In member function ‘std::basic_istream<_CharT, _Traits>::int_type std::basic_istream<_CharT, _Traits>::peek()’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:623:7: error: ‘_M_gcount’ was not declared in this scope
       _M_gcount = 0;
       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:650:26: error: ‘streamsize’ has not been declared
     read(char_type* __s, streamsize __n)
                          ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In member function ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::read(std::basic_istream<_CharT, _Traits>::char_type*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:652:7: error: ‘_M_gcount’ was not declared in this scope
       _M_gcount = 0;
       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:677:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In member function ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::putback(std::basic_istream<_CharT, _Traits>::char_type)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:715:7: error: ‘_M_gcount’ was not declared in this scope
       _M_gcount = 0;
       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In member function ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::unget()’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:750:7: error: ‘_M_gcount’ was not declared in this scope
       _M_gcount = 0;
       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In function ‘std::basic_istream<_CharT, _Traits>& std::operator>>(std::basic_istream<_CharT, _Traits>&, _CharT2*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:963:7: error: ‘streamsize’ was not declared in this scope
       streamsize __extracted = 0;
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:971:19: error: expected ‘;’ before ‘__num’
        streamsize __num = __in.width();
                   ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:972:12: error: ‘__num’ was not declared in this scope
        if (__num <= 0)
            ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:973:39: error: the value of ‘streamsize’ is not usable in a constant expression
   __num = __gnu_cxx::__numeric_traits<streamsize>::__max;
                                       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:963:7: note: ‘streamsize’ was not declared ‘constexpr’
       streamsize __extracted = 0;
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:973:49: error: type/value mismatch at argument 1 in template parameter list for ‘template<class _Value> struct __gnu_cxx::__numeric_traits’
   __num = __gnu_cxx::__numeric_traits<streamsize>::__max;
                                                 ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:973:49: note:   expected a type, got ‘streamsize’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:981:15: error: ‘__extracted’ was not declared in this scope
        while (__extracted < __num - 1
               ^~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:981:29: error: ‘__num’ was not declared in this scope
        while (__extracted < __num - 1
                             ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:1006:12: error: ‘__extracted’ was not declared in this scope
       if (!__extracted)
            ^~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:64:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:239:15: error: ‘ptrdiff_t’ does not name a type
       typedef ptrdiff_t      difference_type;
               ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h: In member function ‘std::vector<_Tp, _Alloc>::iterator std::vector<_Tp, _Alloc>::insert(std::vector<_Tp, _Alloc>::const_iterator, std::vector<_Tp, _Alloc>::size_type, const value_type&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:1054:2: error: ‘difference_type’ was not declared in this scope
  difference_type __offset = __position - cbegin();
  ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:1055:27: error: ‘__offset’ was not declared in this scope
  _M_fill_insert(begin() + __offset, __n, __x);
                           ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h: In member function ‘std::vector<_Tp, _Alloc>::iterator std::vector<_Tp, _Alloc>::insert(std::vector<_Tp, _Alloc>::const_iterator, _InputIterator, _InputIterator)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:1099:4: error: ‘difference_type’ was not declared in this scope
    difference_type __offset = __position - cbegin();
    ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:1100:33: error: ‘__offset’ was not declared in this scope
    _M_insert_dispatch(begin() + __offset,
                                 ^~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:65:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:137:63: error: template argument 3 is invalid
   : public std::iterator<std::random_access_iterator_tag, bool>
                                                               ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:166:13: error: ‘ptrdiff_t’ has not been declared
     _M_incr(ptrdiff_t __i)
             ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘void std::_Bit_iterator_base::_M_incr(int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:168:7: error: ‘difference_type’ was not declared in this scope
       difference_type __n = __i + _M_offset;
       ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:169:15: error: ‘__n’ was not declared in this scope
       _M_p += __n / int(_S_word_bit);
               ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:207:10: error: ‘ptrdiff_t’ does not name a type
   inline ptrdiff_t
          ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:264:16: error: declaration of ‘operator+=’ as non-function
     operator+=(difference_type __i)
                ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:264:13: error: expected ‘;’ at end of member declaration
     operator+=(difference_type __i)
             ^~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:264:32: error: expected ‘)’ before ‘__i’
     operator+=(difference_type __i)
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:271:16: error: declaration of ‘operator-=’ as non-function
     operator-=(difference_type __i)
                ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:271:13: error: expected ‘;’ at end of member declaration
     operator-=(difference_type __i)
             ^~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:271:32: error: expected ‘)’ before ‘__i’
     operator-=(difference_type __i)
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:278:15: error: ‘difference_type’ has not been declared
     operator+(difference_type __i) const
               ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:285:15: error: ‘difference_type’ has not been declared
     operator-(difference_type __i) const
               ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:292:16: error: ‘difference_type’ has not been declared
     operator[](difference_type __i) const
                ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘std::_Bit_iterator::iterator std::_Bit_iterator::operator+(int) const’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:281:20: error: no match for ‘operator+=’ (operand types are ‘std::_Bit_iterator::iterator {aka std::_Bit_iterator}’ and ‘int’)
       return __tmp += __i;
              ~~~~~~^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘std::_Bit_iterator::iterator std::_Bit_iterator::operator-(int) const’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:288:20: error: no match for ‘operator-=’ (operand types are ‘std::_Bit_iterator::iterator {aka std::_Bit_iterator}’ and ‘int’)
       return __tmp -= __i;
              ~~~~~~^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:297:13: error: declaration of ‘operator+’ as non-function
   operator+(ptrdiff_t __n, const _Bit_iterator& __x)
             ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:297:13: error: ‘ptrdiff_t’ was not declared in this scope
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:297:28: error: expected primary-expression before ‘const’
   operator+(ptrdiff_t __n, const _Bit_iterator& __x)
                            ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:354:16: error: declaration of ‘operator+=’ as non-function
     operator+=(difference_type __i)
                ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:354:13: error: expected ‘;’ at end of member declaration
     operator+=(difference_type __i)
             ^~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:354:32: error: expected ‘)’ before ‘__i’
     operator+=(difference_type __i)
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:361:16: error: declaration of ‘operator-=’ as non-function
     operator-=(difference_type __i)
                ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:361:13: error: expected ‘;’ at end of member declaration
     operator-=(difference_type __i)
             ^~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:361:32: error: expected ‘)’ before ‘__i’
     operator-=(difference_type __i)
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:368:15: error: ‘difference_type’ has not been declared
     operator+(difference_type __i) const
               ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:375:15: error: ‘difference_type’ has not been declared
     operator-(difference_type __i) const
               ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:382:16: error: ‘difference_type’ has not been declared
     operator[](difference_type __i) const
                ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘std::_Bit_const_iterator::const_iterator std::_Bit_const_iterator::operator+(int) const’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:371:20: error: no match for ‘operator+=’ (operand types are ‘std::_Bit_const_iterator::const_iterator {aka std::_Bit_const_iterator}’ and ‘int’)
       return __tmp += __i;
              ~~~~~~^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘std::_Bit_const_iterator::const_iterator std::_Bit_const_iterator::operator-(int) const’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:378:20: error: no match for ‘operator-=’ (operand types are ‘std::_Bit_const_iterator::const_iterator {aka std::_Bit_const_iterator}’ and ‘int’)
       return __tmp -= __i;
              ~~~~~~^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:387:13: error: declaration of ‘operator+’ as non-function
   operator+(ptrdiff_t __n, const _Bit_const_iterator& __x)
             ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:387:13: error: ‘ptrdiff_t’ was not declared in this scope
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:387:28: error: expected primary-expression before ‘const’
   operator+(ptrdiff_t __n, const _Bit_const_iterator& __x)
                            ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:554:13: error: ‘ptrdiff_t’ does not name a type
     typedef ptrdiff_t                                    difference_type;
             ^~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:67:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h: In instantiation of ‘class std::reverse_iterator<std::_Bit_iterator>’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:796:5:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:97:11: error: no type named ‘iterator_category’ in ‘struct std::iterator_traits<std::_Bit_iterator>’
     class reverse_iterator
           ^~~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:111:55: error: no type named ‘difference_type’ in ‘struct std::iterator_traits<std::_Bit_iterator>’
       typedef typename __traits_type::difference_type difference_type;
                                                       ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:112:48: error: no type named ‘pointer’ in ‘struct std::iterator_traits<std::_Bit_iterator>’
       typedef typename __traits_type::pointer  pointer;
                                                ^~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:113:50: error: no type named ‘reference’ in ‘struct std::iterator_traits<std::_Bit_iterator>’
       typedef typename __traits_type::reference  reference;
                                                  ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h: In instantiation of ‘class std::reverse_iterator<std::_Bit_const_iterator>’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:800:5:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:97:11: error: no type named ‘iterator_category’ in ‘struct std::iterator_traits<std::_Bit_const_iterator>’
     class reverse_iterator
           ^~~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:111:55: error: no type named ‘difference_type’ in ‘struct std::iterator_traits<std::_Bit_const_iterator>’
       typedef typename __traits_type::difference_type difference_type;
                                                       ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:112:48: error: no type named ‘pointer’ in ‘struct std::iterator_traits<std::_Bit_const_iterator>’
       typedef typename __traits_type::pointer  pointer;
                                                ^~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:113:50: error: no type named ‘reference’ in ‘struct std::iterator_traits<std::_Bit_const_iterator>’
       typedef typename __traits_type::reference  reference;
                                                  ^~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:65:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘std::vector<bool, _Alloc>::size_type std::vector<bool, _Alloc>::max_size() const’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:836:30: error: ‘difference_type’ was not declared in this scope
  __gnu_cxx::__numeric_traits<difference_type>::__max
                              ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:836:45: error: template argument 1 is invalid
  __gnu_cxx::__numeric_traits<difference_type>::__max
                                             ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘std::vector<bool, _Alloc>::iterator std::vector<bool, _Alloc>::insert(std::vector<bool, _Alloc>::const_iterator, const bool&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:956:13: error: ‘difference_type’ does not name a type
       const difference_type __n = __position - begin();
             ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:962:24: error: ‘__n’ was not declared in this scope
       return begin() + __n;
                        ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘std::vector<bool, _Alloc>::iterator std::vector<bool, _Alloc>::insert(std::vector<bool, _Alloc>::const_iterator, _InputIterator, _InputIterator)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:972:2: error: ‘difference_type’ was not declared in this scope
  difference_type __offset = __position - cbegin();
  ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:975:19: error: ‘__offset’ was not declared in this scope
  return begin() + __offset;
                   ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘std::vector<bool, _Alloc>::iterator std::vector<bool, _Alloc>::insert(std::vector<bool, _Alloc>::const_iterator, std::vector<bool, _Alloc>::size_type, const bool&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:992:7: error: ‘difference_type’ was not declared in this scope
       difference_type __offset = __position - cbegin();
       ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:994:24: error: ‘__offset’ was not declared in this scope
       return begin() + __offset;
                        ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘void std::vector<bool, _Alloc>::resize(std::vector<bool, _Alloc>::size_type, bool)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:1032:61: error: there are no arguments to ‘difference_type’ that depend on a template parameter, so a declaration of ‘difference_type’ must be available [-fpermissive]
         _M_erase_at_end(begin() + difference_type(__new_size));
                                                             ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘void std::vector<bool, _Alloc>::_M_initialize(std::vector<bool, _Alloc>::size_type)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:1084:77: error: there are no arguments to ‘difference_type’ that depend on a template parameter, so a declaration of ‘difference_type’ must be available [-fpermissive]
       this->_M_impl._M_finish = this->_M_impl._M_start + difference_type(__n);
                                                                             ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc: In member function ‘void std::vector<bool, _Alloc>::_M_fill_insert(std::vector<bool, _Alloc>::iterator, std::vector<bool, _Alloc>::size_type, bool)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:720:54: error: there are no arguments to ‘difference_type’ that depend on a template parameter, so a declaration of ‘difference_type’ must be available [-fpermissive]
         this->_M_impl._M_finish + difference_type(__n));
                                                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:721:58: error: there are no arguments to ‘difference_type’ that depend on a template parameter, so a declaration of ‘difference_type’ must be available [-fpermissive]
    std::fill(__position, __position + difference_type(__n), __x);
                                                          ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:722:50: error: there are no arguments to ‘difference_type’ that depend on a template parameter, so a declaration of ‘difference_type’ must be available [-fpermissive]
    this->_M_impl._M_finish += difference_type(__n);
                                                  ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:731:44: error: there are no arguments to ‘difference_type’ that depend on a template parameter, so a declaration of ‘difference_type’ must be available [-fpermissive]
    std::fill(__i, __i + difference_type(__n), __x);
                                            ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:733:37: error: there are no arguments to ‘difference_type’ that depend on a template parameter, so a declaration of ‘difference_type’ must be available [-fpermissive]
            __i + difference_type(__n));
                                     ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc: In member function ‘void std::vector<bool, _Alloc>::_M_insert_range(std::vector<bool, _Alloc>::iterator, _ForwardIterator, _ForwardIterator, std::forward_iterator_tag)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:754:29: error: there are no arguments to ‘difference_type’ that depend on a template parameter, so a declaration of ‘difference_type’ must be available [-fpermissive]
        + difference_type(__n));
                             ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:756:49: error: there are no arguments to ‘difference_type’ that depend on a template parameter, so a declaration of ‘difference_type’ must be available [-fpermissive]
   this->_M_impl._M_finish += difference_type(__n);
                                                 ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:10:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/sstream: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/sstream:210:15: error: ‘streamsize’ does not name a type
       virtual streamsize
               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/sstream:243:30: error: ‘streamsize’ has not been declared
       setbuf(char_type* __s, streamsize __n)
                              ^~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/fstream:42:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:11,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/basic_file.h:107:7: error: ‘streamsize’ does not name a type
       streamsize
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/basic_file.h:110:7: error: ‘streamsize’ does not name a type
       streamsize
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/basic_file.h:114:7: error: ‘streamsize’ does not name a type
       streamsize
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/basic_file.h:123:7: error: ‘streamsize’ does not name a type
       streamsize
       ^~~~~~~~~~
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:11:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/fstream:175:7: error: ‘streamsize’ does not name a type
       streamsize  _M_ext_buf_size;
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/fstream:334:15: error: ‘streamsize’ does not name a type
       virtual streamsize
               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/fstream:361:42: error: ‘streamsize’ has not been declared
       _M_convert_to_external(char_type*, streamsize);
                                          ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/fstream:376:30: error: ‘streamsize’ has not been declared
       setbuf(char_type* __s, streamsize __n);
                              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/fstream:399:15: error: ‘streamsize’ does not name a type
       virtual streamsize
               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/fstream:402:15: error: ‘streamsize’ does not name a type
       virtual streamsize
               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/fstream:422:21: error: ‘streamsize’ has not been declared
       _M_set_buffer(streamsize __off)
                     ^~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/fstream:1081:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:11,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: In member function ‘void std::basic_filebuf<_CharT, _Traits>::_M_destroy_internal_buffer()’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:73:7: error: ‘_M_ext_buf_size’ was not declared in this scope
       _M_ext_buf_size = 0;
       ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: In constructor ‘std::basic_filebuf<_CharT, _Traits>::basic_filebuf()’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:85:35: error: class ‘std::basic_filebuf<_CharT, _Traits>’ does not have any field named ‘_M_ext_buf_size’
     _M_codecvt(0), _M_ext_buf(0), _M_ext_buf_size(0), _M_ext_next(0),
                                   ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: In constructor ‘std::basic_filebuf<_CharT, _Traits>::basic_filebuf(std::basic_filebuf<_CharT, _Traits>&&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:113:5: error: class ‘std::basic_filebuf<_CharT, _Traits>’ does not have any field named ‘_M_ext_buf_size’
     _M_ext_buf_size(std::__exchange(__rhs._M_ext_buf_size, 0)),
     ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: In member function ‘std::basic_filebuf<_CharT, _Traits>& std::basic_filebuf<_CharT, _Traits>::operator=(std::basic_filebuf<_CharT, _Traits>&&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:137:7: error: ‘_M_ext_buf_size’ was not declared in this scope
       _M_ext_buf_size = std::__exchange(__rhs._M_ext_buf_size, 0);
       ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: In member function ‘void std::basic_filebuf<_CharT, _Traits>::swap(std::basic_filebuf<_CharT, _Traits>&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:165:17: error: ‘_M_ext_buf_size’ was not declared in this scope
       std::swap(_M_ext_buf_size, __rhs._M_ext_buf_size);
                 ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:261:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: In member function ‘virtual std::basic_filebuf<_CharT, _Traits>::int_type std::basic_filebuf<_CharT, _Traits>::underflow()’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:316:4: error: ‘streamsize’ was not declared in this scope
    streamsize __ilen = 0;
    ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:320:8: error: ‘__ilen’ was not declared in this scope
        __ilen = _M_file.xsgetn(reinterpret_cast<char*>(this->eback()),
        ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:320:25: error: ‘std::basic_filebuf<_CharT, _Traits>::__file_type {aka class std::__basic_file<char>}’ has no member named ‘xsgetn’
        __ilen = _M_file.xsgetn(reinterpret_cast<char*>(this->eback()),
                         ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:330:19: error: expected ‘;’ before ‘__blen’
        streamsize __blen; // Minimum buffer size.
                   ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:331:19: error: expected ‘;’ before ‘__rlen’
        streamsize __rlen; // Number of chars to read.
                   ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:333:3: error: ‘__blen’ was not declared in this scope
   __blen = __rlen = __buflen * __enc;
   ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:333:12: error: ‘__rlen’ was not declared in this scope
   __blen = __rlen = __buflen * __enc;
            ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:336:5: error: ‘__blen’ was not declared in this scope
     __blen = __buflen + _M_codecvt->max_length() - 1;
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:337:5: error: ‘__rlen’ was not declared in this scope
     __rlen = __buflen;
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:339:14: error: ‘streamsize’ does not name a type
        const streamsize __remainder = _M_ext_end - _M_ext_next;
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:340:8: error: ‘__rlen’ was not declared in this scope
        __rlen = __rlen > __remainder ? __rlen - __remainder : 0;
        ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:340:26: error: ‘__remainder’ was not declared in this scope
        __rlen = __rlen > __remainder ? __rlen - __remainder : 0;
                          ^~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:349:12: error: ‘_M_ext_buf_size’ was not declared in this scope
        if (_M_ext_buf_size < __blen)
            ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:349:30: error: ‘__blen’ was not declared in this scope
        if (_M_ext_buf_size < __blen)
                              ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:373:48: error: ‘_M_ext_buf_size’ was not declared in this scope
         if (_M_ext_end - _M_ext_buf + __rlen > _M_ext_buf_size)
                                                ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:379:20: error: expected ‘;’ before ‘__elen’
         streamsize __elen = _M_file.xsgetn(_M_ext_end, __rlen);
                    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:380:13: error: ‘__elen’ was not declared in this scope
         if (__elen == 0)
             ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:384:23: error: ‘__elen’ was not declared in this scope
         _M_ext_end += __elen;
                       ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:396:9: error: ‘__ilen’ was not declared in this scope
         __ilen = std::min(__avail, __buflen);
         ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:403:7: error: ‘__ilen’ was not declared in this scope
       __ilen = __iend - this->eback();
       ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:413:15: error: ‘__ilen’ was not declared in this scope
        while (__ilen == 0 && !__got_eof);
               ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:416:8: error: ‘__ilen’ was not declared in this scope
    if (__ilen > 0)
        ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:572:44: error: ‘streamsize’ has not been declared
     _M_convert_to_external(_CharT* __ibuf, streamsize __ilen)
                                            ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: In member function ‘bool std::basic_filebuf<_CharT, _Traits>::_M_convert_to_external(_CharT*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:575:7: error: ‘streamsize’ was not declared in this scope
       streamsize __elen;
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:576:18: error: expected ‘;’ before ‘__plen’
       streamsize __plen;
                  ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:579:4: error: ‘__elen’ was not declared in this scope
    __elen = _M_file.xsputn(reinterpret_cast<char*>(__ibuf), __ilen);
    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:579:21: error: ‘std::basic_filebuf<_CharT, _Traits>::__file_type {aka class std::__basic_file<char>}’ has no member named ‘xsputn’
    __elen = _M_file.xsputn(reinterpret_cast<char*>(__ibuf), __ilen);
                     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:580:4: error: ‘__plen’ was not declared in this scope
    __plen = __ilen;
    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:586:15: error: expected ‘;’ before ‘__blen’
    streamsize __blen = __ilen * _M_codecvt->max_length();
               ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:587:54: error: ‘__blen’ was not declared in this scope
    char* __buf = static_cast<char*>(__builtin_alloca(__blen));
                                                      ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:607:4: error: ‘__elen’ was not declared in this scope
    __elen = _M_file.xsputn(__buf, __blen);
    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:607:21: error: ‘std::basic_filebuf<_CharT, _Traits>::__file_type {aka class std::__basic_file<char>}’ has no member named ‘xsputn’
    __elen = _M_file.xsputn(__buf, __blen);
                     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:608:4: error: ‘__plen’ was not declared in this scope
    __plen = __blen;
    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:614:19: error: expected ‘;’ before ‘__rlen’
        streamsize __rlen = this->pptr() - __iend;
                   ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:616:21: error: ‘__rlen’ was not declared in this scope
         __iresume + __rlen, __iend, __buf,
                     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:621:22: error: ‘std::basic_filebuf<_CharT, _Traits>::__file_type {aka class std::__basic_file<char>}’ has no member named ‘xsputn’
     __elen = _M_file.xsputn(__buf, __rlen);
                      ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:629:14: error: ‘__elen’ was not declared in this scope
       return __elen == __plen;
              ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:629:24: error: ‘__plen’ was not declared in this scope
       return __elen == __plen;
                        ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:633:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:721:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:771:28: error: ‘streamsize’ has not been declared
     setbuf(char_type* __s, streamsize __n)
                            ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: In member function ‘bool std::basic_filebuf<_CharT, _Traits>::_M_terminate_output()’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:940:4: error: ‘streamsize’ was not declared in this scope
    streamsize __ilen = 0;
    ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:952:5: error: ‘__ilen’ was not declared in this scope
     __ilen = __next - __buf;
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:955:15: error: ‘streamsize’ does not name a type
         const streamsize __elen = _M_file.xsputn(__buf, __ilen);
               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:956:13: error: ‘__elen’ was not declared in this scope
         if (__elen != __ilen)
             ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:961:43: error: ‘__ilen’ was not declared in this scope
    while (__r == codecvt_base::partial && __ilen > 0 && __testvalid);
                                           ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: In member function ‘virtual void std::basic_filebuf<_CharT, _Traits>::imbue(const std::locale&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:1029:15: error: ‘streamsize’ does not name a type
         const streamsize __remainder = _M_ext_end - _M_ext_next;
               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:1030:13: error: ‘__remainder’ was not declared in this scope
         if (__remainder)
             ^~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:1034:35: error: ‘__remainder’ was not declared in this scope
         _M_ext_end = _M_ext_buf + __remainder;
                                   ^~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:40:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/alloc_traits.h: In instantiation of ‘struct __gnu_cxx::__alloc_traits<std::allocator<Task> >’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:75:28:   required from ‘struct std::_Vector_base<Task, std::allocator<Task> >’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:214:11:   required from ‘class std::vector<Task>’
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortCategory.cpp:22:17:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/alloc_traits.h:61:53: error: no type named ‘size_type’ in ‘struct std::allocator_traits<std::allocator<Task> >’
     typedef typename _Base_type::size_type          size_type;
                                                     ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/alloc_traits.h:62:53: error: no type named ‘difference_type’ in ‘struct std::allocator_traits<std::allocator<Task> >’
     typedef typename _Base_type::difference_type    difference_type;
                                                     ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/alloc_traits.h:70:23: error: no members matching ‘__gnu_cxx::__alloc_traits<std::allocator<Task> >::_Base_type {aka std::allocator_traits<std::allocator<Task> >}::max_size’ in ‘__gnu_cxx::__alloc_traits<std::allocator<Task> >::_Base_type {aka struct std::allocator_traits<std::allocator<Task> >}’
     using _Base_type::max_size;
                       ^~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:67:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h: In instantiation of ‘class __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortDate.cpp:34:39:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:768:56: error: no type named ‘difference_type’ in ‘struct std::iterator_traits<Task*>’
       typedef typename __traits_type::difference_type  difference_type;
                                                        ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h: In instantiation of ‘class __gnu_cxx::__normal_iterator<const Task*, std::vector<Task> >’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortDate.cpp:34:49:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:768:56: error: no type named ‘difference_type’ in ‘struct std::iterator_traits<const Task*>’
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:2:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:8:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp: At global scope:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:11:7: error: expected nested-name-specifier before ‘namespace’
 using namespace std;
       ^~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:14:12: error: cannot define member function ‘Task::Task’ within ‘Planner’
 Task::Task(){
            ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:25:60: error: cannot define member function ‘Task::Task’ within ‘Planner’
 Task::Task(string category, string name, string description){
                                                            ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:31:35: error: cannot define member function ‘Task::setDescription’ within ‘Planner’
 void Task::setDescription(string d) {
                                   ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:34:28: error: cannot define member function ‘Task::setName’ within ‘Planner’
 void Task::setName(string n){
                            ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:37:24: error: cannot define member function ‘Task::setDay’ within ‘Planner’
 void Task::setDay(int d){
                        ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:40:32: error: cannot define member function ‘Task::setCategory’ within ‘Planner’
 void Task::setCategory(string c) {
                                ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:43:26: error: cannot define member function ‘Task::setMonth’ within ‘Planner’
 void Task::setMonth(int m){
                          ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:46:25: error: cannot define member function ‘Task::setYear’ within ‘Planner’
 void Task::setYear(int y){
                         ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:49:29: error: cannot define member function ‘Task::setPriority’ within ‘Planner’
 void Task::setPriority(int p){
                             ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:52:29: error: cannot define member function ‘Task::getDescription’ within ‘Planner’
 string Task::getDescription(){
                             ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:55:22: error: cannot define member function ‘Task::getName’ within ‘Planner’
 string Task::getName(){
                      ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:58:26: error: cannot define member function ‘Task::getCategory’ within ‘Planner’
 string Task::getCategory(){
                          ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:61:18: error: cannot define member function ‘Task::getDay’ within ‘Planner’
 int Task::getDay(){
                  ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:64:20: error: cannot define member function ‘Task::getMonth’ within ‘Planner’
 int Task::getMonth(){
                    ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:67:19: error: cannot define member function ‘Task::getYear’ within ‘Planner’
 int Task::getYear(){
                   ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:70:23: error: cannot define member function ‘Task::getPriority’ within ‘Planner’
 int Task::getPriority(){
                       ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:76:21: error: cannot define member function ‘Task::EditTask’ within ‘Planner’
 void Task::EditTask(){
                     ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:8:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:9:7: error: expected nested-name-specifier before ‘namespace’
 using namespace std;
       ^~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:13:73: error: cannot define member function ‘SchoolTask::SchoolTask’ within ‘Planner’
  SchoolTask::SchoolTask(string category, string name, string description){
                                                                         ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:19:34: error: cannot define member function ‘SchoolTask::Add_SchoolTask’ within ‘Planner’
  void SchoolTask::Add_SchoolTask(){
                                  ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:8:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:96:25: error: cannot define member function ‘SchoolTask::SchoolTask’ within ‘Planner’
  SchoolTask::SchoolTask(){}
                         ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:9:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:6:7: error: expected nested-name-specifier before ‘namespace’
 using namespace std;
       ^~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:9:76: error: cannot define member function ‘PersonalTask::PersonalTask’ within ‘Planner’
 PersonalTask::PersonalTask(string category, string name, string description){
                                                                            ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:14:38: error: cannot define member function ‘PersonalTask::Add_PersonalTask’ within ‘Planner’
  void PersonalTask::Add_PersonalTask(){
                                      ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:70:29: error: cannot define member function ‘PersonalTask::PersonalTask’ within ‘Planner’
  PersonalTask::PersonalTask(){}
                             ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:16:1: error: expected ‘}’ at end of input
 }
 ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp: In member function ‘void Planner::Filter_Tasks()’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:87:37: error: ‘DisplayMenu’ was not declared in this scope
                         DisplayMenu();
                                     ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp: In member function ‘void Planner::Sort_Tasks()’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:128:37: error: ‘DisplayMenu’ was not declared in this scope
                         DisplayMenu();
                                     ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp: In member function ‘void Planner::Display_Planner()’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:167:25: error: expected ‘}’ before ‘else’
                         else
                         ^~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp: In member function ‘int Planner::main()’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:14:10: error: ‘class Planner’ has no member named ‘DisplayMenu’; did you mean ‘Display_Planner’?
  planner.DisplayMenu();
          ^~~~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp: At global scope:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:16:1: error: expected unqualified-id at end of input
 }
 ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:67:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h: In instantiation of ‘class __gnu_cxx::__normal_iterator<char*, std::basic_string<char> >’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5027:32:   required from ‘std::basic_string<_CharT, _Traits, _Alloc> std::operator+(std::basic_string<_CharT, _Traits, _Alloc>&&, std::basic_string<_CharT, _Traits, _Alloc>&&) [with _CharT = char; _Traits = std::char_traits<char>; _Alloc = std::allocator<char>]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/system_error:343:50:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:768:56: error: no type named ‘difference_type’ in ‘struct std::iterator_traits<char*>’
       typedef typename __traits_type::difference_type  difference_type;
                                                        ^~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc: In instantiation of ‘std::vector<_Tp, _Alloc>::iterator std::vector<_Tp, _Alloc>::insert(std::vector<_Tp, _Alloc>::const_iterator, const value_type&) [with _Tp = Task; _Alloc = std::allocator<Task>; std::vector<_Tp, _Alloc>::iterator = __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >; typename std::_Vector_base<_Tp, _Alloc>::pointer = Task*; std::vector<_Tp, _Alloc>::const_iterator = __gnu_cxx::__normal_iterator<const Task*, std::vector<Task> >; typename __gnu_cxx::__alloc_traits<typename std::_Vector_base<_Tp, _Alloc>::_Tp_alloc_type>::const_pointer = const Task*; std::vector<_Tp, _Alloc>::value_type = Task]’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortDate.cpp:34:49:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: error: no match for ‘operator+’ (operand types are ‘std::vector<Task>::iterator {aka __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >}’ and ‘long int’)
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:67:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:341:5: note: candidate: template<class _Iterator> std::reverse_iterator<_Iterator> std::operator+(typename std::reverse_iterator<_Iterator>::difference_type, const std::reverse_iterator<_Iterator>&)
     operator+(typename reverse_iterator<_Iterator>::difference_type __n,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:341:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   mismatched types ‘const std::reverse_iterator<_Iterator>’ and ‘long int’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:67:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:1200:5: note: candidate: template<class _Iterator> std::move_iterator<_IteratorL> std::operator+(typename std::move_iterator<_IteratorL>::difference_type, const std::move_iterator<_IteratorL>&)
     operator+(typename move_iterator<_Iterator>::difference_type __n,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:1200:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   mismatched types ‘const std::move_iterator<_IteratorL>’ and ‘long int’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:4944:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(const std::basic_string<_CharT, _Traits, _Alloc>&, const std::basic_string<_CharT, _Traits, _Alloc>&)
     operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:4944:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   ‘std::vector<Task>::iterator {aka __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >}’ is not derived from ‘const std::basic_string<_CharT, _Traits, _Alloc>’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:53:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.tcc:1147:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(const _CharT*, const std::basic_string<_CharT, _Traits, _Alloc>&)
     operator+(const _CharT* __lhs,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.tcc:1147:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   mismatched types ‘const _CharT*’ and ‘__gnu_cxx::__normal_iterator<Task*, std::vector<Task> >’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:53:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.tcc:1163:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(_CharT, const std::basic_string<_CharT, _Traits, _Alloc>&)
     operator+(_CharT __lhs, const basic_string<_CharT, _Traits, _Alloc>& __rhs)
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.tcc:1163:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   mismatched types ‘const std::basic_string<_CharT, _Traits, _Alloc>’ and ‘long int’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:4981:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(const std::basic_string<_CharT, _Traits, _Alloc>&, const _CharT*)
     operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:4981:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   ‘std::vector<Task>::iterator {aka __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >}’ is not derived from ‘const std::basic_string<_CharT, _Traits, _Alloc>’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:4997:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(const std::basic_string<_CharT, _Traits, _Alloc>&, _CharT)
     operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs, _CharT __rhs)
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:4997:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   ‘std::vector<Task>::iterator {aka __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >}’ is not derived from ‘const std::basic_string<_CharT, _Traits, _Alloc>’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5009:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(std::basic_string<_CharT, _Traits, _Alloc>&&, const std::basic_string<_CharT, _Traits, _Alloc>&)
     operator+(basic_string<_CharT, _Traits, _Alloc>&& __lhs,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5009:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   ‘std::vector<Task>::iterator {aka __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >}’ is not derived from ‘std::basic_string<_CharT, _Traits, _Alloc>’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5015:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(const std::basic_string<_CharT, _Traits, _Alloc>&, std::basic_string<_CharT, _Traits, _Alloc>&&)
     operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5015:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   ‘std::vector<Task>::iterator {aka __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >}’ is not derived from ‘const std::basic_string<_CharT, _Traits, _Alloc>’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5021:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(std::basic_string<_CharT, _Traits, _Alloc>&&, std::basic_string<_CharT, _Traits, _Alloc>&&)
     operator+(basic_string<_CharT, _Traits, _Alloc>&& __lhs,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5021:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   ‘std::vector<Task>::iterator {aka __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >}’ is not derived from ‘std::basic_string<_CharT, _Traits, _Alloc>’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5033:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(const _CharT*, std::basic_string<_CharT, _Traits, _Alloc>&&)
     operator+(const _CharT* __lhs,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5033:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   mismatched types ‘const _CharT*’ and ‘__gnu_cxx::__normal_iterator<Task*, std::vector<Task> >’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5039:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(_CharT, std::basic_string<_CharT, _Traits, _Alloc>&&)
     operator+(_CharT __lhs,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5039:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   mismatched types ‘std::basic_string<_CharT, _Traits, _Alloc>’ and ‘long int’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5045:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(std::basic_string<_CharT, _Traits, _Alloc>&&, const _CharT*)
     operator+(basic_string<_CharT, _Traits, _Alloc>&& __lhs,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5045:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   ‘std::vector<Task>::iterator {aka __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >}’ is not derived from ‘std::basic_string<_CharT, _Traits, _Alloc>’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5051:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(std::basic_string<_CharT, _Traits, _Alloc>&&, _CharT)
     operator+(basic_string<_CharT, _Traits, _Alloc>&& __lhs,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5051:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   ‘std::vector<Task>::iterator {aka __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >}’ is not derived from ‘std::basic_string<_CharT, _Traits, _Alloc>’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:67:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:966:5: note: candidate: template<class _Iterator, class _Container> __gnu_cxx::__normal_iterator<_Iterator, _Container> __gnu_cxx::operator+(typename __gnu_cxx::__normal_iterator<_Iterator, _Container>::difference_type, const __gnu_cxx::__normal_iterator<_Iterator, _Container>&)
     operator+(typename __normal_iterator<_Iterator, _Container>::difference_type
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:966:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   mismatched types ‘const __gnu_cxx::__normal_iterator<_Iterator, _Container>’ and ‘long int’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/c++allocator.h:33:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:46,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h: In instantiation of ‘void __gnu_cxx::new_allocator<_Tp>::construct(_Up*, _Args&& ...) [with _Up = Task; _Args = {const Task&}; _Tp = Task]’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/alloc_traits.h:475:4:   required from ‘static void std::allocator_traits<std::allocator<_CharT> >::construct(std::allocator_traits<std::allocator<_CharT> >::allocator_type&, _Up*, _Args&& ...) [with _Up = Task; _Args = {const Task&}; _Tp = Task; std::allocator_traits<std::allocator<_CharT> >::allocator_type = std::allocator<Task>]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:918:30:   required from ‘void std::vector<_Tp, _Alloc>::push_back(const value_type&) [with _Tp = Task; _Alloc = std::allocator<Task>; std::vector<_Tp, _Alloc>::value_type = Task]’
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortCategory.cpp:29:33:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:120:4: error: no matching function for call to ‘operator new(sizetype, void*)’
  { ::new((void *)__p) _Up(std::forward<_Args>(__args)...); }
    ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
<built-in>: note: candidate: void* operator new(long unsigned int)
<built-in>: note:   candidate expects 1 argument, 2 provided
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:67:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h: In instantiation of ‘class std::move_iterator<Task*>’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_uninitialized.h:303:3:   required from ‘_ForwardIterator std::__uninitialized_move_if_noexcept_a(_InputIterator, _InputIterator, _ForwardIterator, _Allocator&) [with _InputIterator = Task*; _ForwardIterator = Task*; _Allocator = std::allocator<Task>]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:422:8:   required from ‘void std::vector<_Tp, _Alloc>::_M_emplace_back_aux(_Args&& ...) [with _Args = {const Task&}; _Tp = Task; _Alloc = std::allocator<Task>]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:924:4:   required from ‘void std::vector<_Tp, _Alloc>::push_back(const value_type&) [with _Tp = Task; _Alloc = std::allocator<Task>; std::vector<_Tp, _Alloc>::value_type = Task]’
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortCategory.cpp:29:33:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:1019:55: error: no type named ‘difference_type’ in ‘struct std::iterator_traits<Task*>’
       typedef typename __traits_type::difference_type difference_type;
                                                       ^~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:62:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_construct.h: In instantiation of ‘void std::_Destroy(_ForwardIterator, _ForwardIterator) [with _ForwardIterator = __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >]’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_construct.h:151:15:   required from ‘void std::_Destroy(_ForwardIterator, _ForwardIterator, std::allocator<_T2>&) [with _ForwardIterator = __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >; _Tp = Task]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:206:21:   required from ‘std::vector<_Tp, _Alloc>& std::vector<_Tp, _Alloc>::operator=(const std::vector<_Tp, _Alloc>&) [with _Tp = Task; _Alloc = std::allocator<Task>]’
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortCategory.cpp:53:11:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_construct.h:125:24: error: no type named ‘value_type’ in ‘struct std::iterator_traits<__gnu_cxx::__normal_iterator<Task*, std::vector<Task> > >’
                        _Value_type;
                        ^~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_construct.h:127:11: error: no type named ‘value_type’ in ‘struct std::iterator_traits<__gnu_cxx::__normal_iterator<Task*, std::vector<Task> > >’
       std::_Destroy_aux<__has_trivial_destructor(_Value_type)>::
       ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  __destroy(__first, __last);
  ~~~~~~~~~^~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:64:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h: In instantiation of ‘std::vector<_Tp, _Alloc>::size_type std::vector<_Tp, _Alloc>::max_size() const [with _Tp = Task; _Alloc = std::allocator<Task>; std::vector<_Tp, _Alloc>::size_type = long unsigned int]’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:1422:14:   required from ‘std::vector<_Tp, _Alloc>::size_type std::vector<_Tp, _Alloc>::_M_check_len(std::vector<_Tp, _Alloc>::size_type, const char*) const [with _Tp = Task; _Alloc = std::allocator<Task>; std::vector<_Tp, _Alloc>::size_type = long unsigned int]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:411:16:   required from ‘void std::vector<_Tp, _Alloc>::_M_emplace_back_aux(_Args&& ...) [with _Args = {const Task&}; _Tp = Task; _Alloc = std::allocator<Task>]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:924:4:   required from ‘void std::vector<_Tp, _Alloc>::push_back(const value_type&) [with _Tp = Task; _Alloc = std::allocator<Task>; std::vector<_Tp, _Alloc>::value_type = Task]’
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortCategory.cpp:29:33:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:661:39: error: ‘max_size’ is not a member of ‘std::vector<Task>::_Alloc_traits {aka __gnu_cxx::__alloc_traits<std::allocator<Task> >}’
       { return _Alloc_traits::max_size(_M_get_Tp_allocator()); }
                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:63:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_uninitialized.h: In instantiation of ‘_ForwardIterator std::uninitialized_copy(_InputIterator, _InputIterator, _ForwardIterator) [with _InputIterator = __gnu_cxx::__normal_iterator<const Task*, std::vector<Task> >; _ForwardIterator = Task*]’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_uninitialized.h:281:37:   required from ‘_ForwardIterator std::__uninitialized_copy_a(_InputIterator, _InputIterator, _ForwardIterator, std::allocator<_Tp>&) [with _InputIterator = __gnu_cxx::__normal_iterator<const Task*, std::vector<Task> >; _ForwardIterator = Task*; _Tp = Task]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:1225:35:   required from ‘std::vector<_Tp, _Alloc>::pointer std::vector<_Tp, _Alloc>::_M_allocate_and_copy(std::vector<_Tp, _Alloc>::size_type, _ForwardIterator, _ForwardIterator) [with _ForwardIterator = __gnu_cxx::__normal_iterator<const Task*, std::vector<Task> >; _Tp = Task; _Alloc = std::allocator<Task>; std::vector<_Tp, _Alloc>::pointer = Task*; std::vector<_Tp, _Alloc>::size_type = long unsigned int]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:195:19:   required from ‘std::vector<_Tp, _Alloc>& std::vector<_Tp, _Alloc>::operator=(const std::vector<_Tp, _Alloc>&) [with _Tp = Task; _Alloc = std::allocator<Task>]’
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortCategory.cpp:53:11:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_uninitialized.h:111:2: error: no type named ‘value_type’ in ‘struct std::iterator_traits<__gnu_cxx::__normal_iterator<const Task*, std::vector<Task> > >’
  _ValueType1;
  ^~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_uninitialized.h:118:67: error: no type named ‘reference’ in ‘struct std::iterator_traits<__gnu_cxx::__normal_iterator<const Task*, std::vector<Task> > >’
       typedef typename iterator_traits<_InputIterator>::reference _RefType1;
                                                                   ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_uninitialized.h:120:70: error: no type named ‘reference’ in ‘struct std::iterator_traits<__gnu_cxx::__normal_iterator<const Task*, std::vector<Task> > >’
       const bool __assignable = is_assignable<_RefType2, _RefType1>::value;
                                                                      ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_uninitialized.h:124:12: error: no type named ‘value_type’ in ‘struct std::iterator_traits<__gnu_cxx::__normal_iterator<const Task*, std::vector<Task> > >’
            && __is_trivial(_ValueType2)
             
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h: In instantiation of ‘static _OI std::__copy_move<false, false, std::random_access_iterator_tag>::__copy_m(_II, _II, _OI) [with _II = const Task*; _OI = Task*]’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:386:44:   required from ‘_OI std::__copy_move_a(_II, _II, _OI) [with bool _IsMove = false; _II = const Task*; _OI = Task*]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:422:45:   required from ‘_OI std::__copy_move_a2(_II, _II, _OI) [with bool _IsMove = false; _II = __gnu_cxx::__normal_iterator<const Task*, std::vector<Task> >; _OI = __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:455:8:   required from ‘_OI std::copy(_II, _II, _OI) [with _II = __gnu_cxx::__normal_iterator<const Task*, std::vector<Task> >; _OI = __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:206:31:   required from ‘std::vector<_Tp, _Alloc>& std::vector<_Tp, _Alloc>::operator=(const std::vector<_Tp, _Alloc>&) [with _Tp = Task; _Alloc = std::allocator<Task>]’
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortCategory.cpp:53:11:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:321:59: error: no type named ‘difference_type’ in ‘struct std::iterator_traits<const Task*>’
    typedef typename iterator_traits<_II>::difference_type _Distance;
                                                           ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h: In instantiation of ‘static _OI std::__copy_move<false, false, std::random_access_iterator_tag>::__copy_m(_II, _II, _OI) [with _II = Task*; _OI = Task*]’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:386:44:   required from ‘_OI std::__copy_move_a(_II, _II, _OI) [with bool _IsMove = false; _II = Task*; _OI = Task*]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:422:45:   required from ‘_OI std::__copy_move_a2(_II, _II, _OI) [with bool _IsMove = false; _II = Task*; _OI = Task*]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:455:8:   required from ‘_OI std::copy(_II, _II, _OI) [with _II = Task*; _OI = Task*]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:211:17:   required from ‘std::vector<_Tp, _Alloc>& std::vector<_Tp, _Alloc>::operator=(const std::vector<_Tp, _Alloc>&) [with _Tp = Task; _Alloc = std::allocator<Task>]’
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortCategory.cpp:53:11:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:321:59: error: no type named ‘difference_type’ in ‘struct std::iterator_traits<Task*>’
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:62:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_construct.h: In instantiation of ‘void std::_Construct(_T1*, _Args&& ...) [with _T1 = Task; _Args = {Task&}]’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_uninitialized.h:75:18:   required from ‘static _ForwardIterator std::__uninitialized_copy<_TrivialValueTypes>::__uninit_copy(_InputIterator, _InputIterator, _ForwardIterator) [with _InputIterator = Task*; _ForwardIterator = Task*; bool _TrivialValueTypes = false]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_uninitialized.h:126:15:   required from ‘_ForwardIterator std::uninitialized_copy(_InputIterator, _InputIterator, _ForwardIterator) [with _InputIterator = Task*; _ForwardIterator = Task*]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_uninitialized.h:281:37:   required from ‘_ForwardIterator std::__uninitialized_copy_a(_InputIterator, _InputIterator, _ForwardIterator, std::allocator<_Tp>&) [with _InputIterator = Task*; _ForwardIterator = Task*; _Tp = Task]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:213:35:   required from ‘std::vector<_Tp, _Alloc>& std::vector<_Tp, _Alloc>::operator=(const std::vector<_Tp, _Alloc>&) [with _Tp = Task; _Alloc = std::allocator<Task>]’
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortCategory.cpp:53:11:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_construct.h:75:7: error: no matching function for call to ‘operator new(sizetype, void*)’
     { ::new(static_cast<void*>(__p)) _T1(std::forward<_Args>(__args)...); }
       ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
<built-in>: note: candidate: void* operator new(long unsigned int)
<built-in>: note:   candidate expects 1 argument, 2 provided
CMakeFiles/test.dir/build.make:82: recipe for target 'CMakeFiles/test.dir/main.cpp.o' failed
make[2]: *** [CMakeFiles/test.dir/main.cpp.o] Error 1
CMakeFiles/Makefile2:157: recipe for target 'CMakeFiles/test.dir/all' failed
make[1]: *** [CMakeFiles/test.dir/all] Error 2
Makefile:149: recipe for target 'all' failed
make: *** [all] Error 2
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ git submodule update --init
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:354:2: error: #endif without #if
 #endif
  ^~~~~
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:1:1: error: ‘fndef’ does not name a type
 fndef __PLANNER_CPP__
 ^~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:62:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/type_traits.h:162:35: error: ‘__gnu_cxx::__is_null_pointer’ declared as an ‘inline’ variable
   __is_null_pointer(std::nullptr_t)
                                   ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/type_traits.h:162:35: error: ‘bool __gnu_cxx::__is_null_pointer’ redeclared as different kind of symbol
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/type_traits.h:157:5: note: previous declaration ‘template<class _Type> bool __gnu_cxx::__is_null_pointer(_Type)’
     __is_null_pointer(_Type)
     ^~~~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/type_traits.h:162:21: error: ‘nullptr_t’ is not a member of ‘std’
   __is_null_pointer(std::nullptr_t)
                     ^~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:57:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:59,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:64,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:359:31: error: ‘std::size_t’ has not been declared
   template<typename _Tp, std::size_t _Size>
                               ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:360:25: error: ‘_Size’ was not declared in this scope
     struct is_array<_Tp[_Size]>
                         ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:360:31: error: template argument 1 is invalid
     struct is_array<_Tp[_Size]>
                               ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:558:37: error: ‘nullptr_t’ is not a member of ‘std’
     struct __is_null_pointer_helper<std::nullptr_t>
                                     ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:558:37: error: ‘nullptr_t’ is not a member of ‘std’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:558:51: error: template argument 1 is invalid
     struct __is_null_pointer_helper<std::nullptr_t>
                                                   ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1478:32: error: ‘size_t’ is not a member of ‘std’
     : public integral_constant<std::size_t, __alignof__(_Tp)> { };
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1478:32: error: ‘size_t’ is not a member of ‘std’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1478:61: error: template argument 1 is invalid
     : public integral_constant<std::size_t, __alignof__(_Tp)> { };
                                                             ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1478:61: note: invalid template non-type parameter
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1483:32: error: ‘size_t’ is not a member of ‘std’
     : public integral_constant<std::size_t, 0> { };
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1483:32: error: ‘size_t’ is not a member of ‘std’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1483:46: error: template argument 1 is invalid
     : public integral_constant<std::size_t, 0> { };
                                              ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1483:46: note: invalid template non-type parameter
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1485:31: error: ‘std::size_t’ has not been declared
   template<typename _Tp, std::size_t _Size>
                               ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1486:21: error: ‘_Size’ was not declared in this scope
     struct rank<_Tp[_Size]>
                     ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1486:27: error: template argument 1 is invalid
     struct rank<_Tp[_Size]>
                           ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1487:32: error: ‘size_t’ is not a member of ‘std’
     : public integral_constant<std::size_t, 1 + rank<_Tp>::value> { };
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1487:32: error: ‘size_t’ is not a member of ‘std’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1487:65: error: template argument 1 is invalid
     : public integral_constant<std::size_t, 1 + rank<_Tp>::value> { };
                                                                 ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1487:65: note: invalid template non-type parameter
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1491:32: error: ‘size_t’ is not a member of ‘std’
     : public integral_constant<std::size_t, 1 + rank<_Tp>::value> { };
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1491:32: error: ‘size_t’ is not a member of ‘std’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1491:65: error: template argument 1 is invalid
     : public integral_constant<std::size_t, 1 + rank<_Tp>::value> { };
                                                                 ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1491:65: note: invalid template non-type parameter
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1496:32: error: ‘size_t’ is not a member of ‘std’
     : public integral_constant<std::size_t, 0> { };
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1496:32: error: ‘size_t’ is not a member of ‘std’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1496:46: error: template argument 1 is invalid
     : public integral_constant<std::size_t, 0> { };
                                              ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1496:46: note: invalid template non-type parameter
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1498:47: error: ‘std::size_t’ has not been declared
   template<typename _Tp, unsigned _Uint, std::size_t _Size>
                                               ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1499:23: error: ‘_Size’ was not declared in this scope
     struct extent<_Tp[_Size], _Uint>
                       ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1499:36: error: template argument 1 is invalid
     struct extent<_Tp[_Size], _Uint>
                                    ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1500:32: error: ‘size_t’ is not a member of ‘std’
     : public integral_constant<std::size_t,
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1500:32: error: ‘size_t’ is not a member of ‘std’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1501:24: error: ‘_Size’ was not declared in this scope
           _Uint == 0 ? _Size : extent<_Tp,
                        ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1502:28: error: template argument 1 is invalid
           _Uint - 1>::value>
                            ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1502:28: note: invalid template non-type parameter
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1507:32: error: ‘size_t’ is not a member of ‘std’
     : public integral_constant<std::size_t,
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1507:32: error: ‘size_t’ is not a member of ‘std’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1509:31: error: template argument 1 is invalid
              _Uint - 1>::value>
                               ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1509:31: note: invalid template non-type parameter
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1958:31: error: ‘std::size_t’ has not been declared
   template<typename _Tp, std::size_t _Size>
                               ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1959:30: error: ‘_Size’ was not declared in this scope
     struct remove_extent<_Tp[_Size]>
                              ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1959:36: error: template argument 1 is invalid
     struct remove_extent<_Tp[_Size]>
                                    ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1971:31: error: ‘std::size_t’ has not been declared
   template<typename _Tp, std::size_t _Size>
                               ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1972:35: error: ‘_Size’ was not declared in this scope
     struct remove_all_extents<_Tp[_Size]>
                                   ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:1972:41: error: template argument 1 is invalid
     struct remove_all_extents<_Tp[_Size]>
                                         ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2030:17: error: ‘std::size_t’ has not been declared
   template<std::size_t _Len>
                 ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2035:23: error: ‘_Len’ was not declared in this scope
  unsigned char __data[_Len];
                       ^~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2050:17: error: ‘std::size_t’ has not been declared
   template<std::size_t _Len, std::size_t _Align =
                 ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2050:35: error: ‘std::size_t’ has not been declared
   template<std::size_t _Len, std::size_t _Align =
                                   ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2051:48: error: ‘_Len’ was not declared in this scope
     __alignof__(typename __aligned_storage_msa<_Len>::__type)>
                                                ^~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2051:52: error: template argument 1 is invalid
     __alignof__(typename __aligned_storage_msa<_Len>::__type)>
                                                    ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2056:23: error: ‘_Len’ was not declared in this scope
  unsigned char __data[_Len];
                       ^~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2057:37: error: ‘_Align’ was not declared in this scope
  struct __attribute__((__aligned__((_Align)))) { } __align;
                                     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2064:20: error: ‘size_t’ does not name a type
       static const size_t _S_alignment = 0;
                    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2065:20: error: ‘size_t’ does not name a type
       static const size_t _S_size = 0;
                    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2071:20: error: ‘size_t’ does not name a type
       static const size_t _S_alignment =
                    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2074:20: error: ‘size_t’ does not name a type
       static const size_t _S_size =
                    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2089:13: error: ‘size_t’ has not been declared
   template <size_t _Len, typename... _Types>
             ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2096:20: error: ‘size_t’ does not name a type
       static const size_t _S_len = _Len > __strictest::_S_size
                    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2100:20: error: ‘size_t’ does not name a type
       static const size_t alignment_value = __strictest::_S_alignment;
                    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2102:40: error: ‘_S_len’ was not declared in this scope
       typedef typename aligned_storage<_S_len, alignment_value>::type type;
                                        ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2102:48: error: ‘alignment_value’ was not declared in this scope
       typedef typename aligned_storage<_S_len, alignment_value>::type type;
                                                ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2102:63: error: template argument 1 is invalid
       typedef typename aligned_storage<_S_len, alignment_value>::type type;
                                                               ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2102:63: error: template argument 2 is invalid
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2105:13: error: ‘size_t’ has not been declared
   template <size_t _Len, typename... _Types>
             ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2106:11: error: ‘size_t’ does not name a type
     const size_t aligned_union<_Len, _Types...>::alignment_value;
           ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2609:26: error: ‘size_t’ has not been declared
   template<typename _Tp, size_t _Nm>
                          ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2612:21: error: ‘_Nm’ was not declared in this scope
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                     ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2612:24: error: ‘std::swap’ declared as an ‘inline’ variable
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                        ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2612:24: error: ‘template<class _Tp, <declaration error> > typename std::enable_if<std::__is_swappable<_Tp>::value>::type std::swap’ conflicts with a previous declaration
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2605:5: note: previous declaration ‘typename std::enable_if<std::__and_<std::is_move_constructible<_Tp>, std::is_move_assignable<_Tp> >::value>::type std::swap(_Tp&, _Tp&)’
     swap(_Tp&, _Tp&)
     ^~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2612:16: error: ‘__a’ was not declared in this scope
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2612:21: error: ‘_Nm’ was not declared in this scope
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                     ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2612:33: error: ‘__b’ was not declared in this scope
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                                 ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2612:38: error: ‘_Nm’ was not declared in this scope
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                                      ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/type_traits:2613:5: error: expected ‘;’ before ‘noexcept’
     noexcept(__is_nothrow_swappable<_Tp>::value);
     ^~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:59:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:64,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:198:26: error: ‘size_t’ has not been declared
   template<typename _Tp, size_t _Nm>
                          ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:202:21: error: ‘_Nm’ was not declared in this scope
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                     ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:202:24: error: ‘std::swap’ declared as an ‘inline’ variable
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                        ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:202:24: error: ‘template<class _Tp, <declaration error> > typename std::enable_if<std::__is_swappable<_Tp>::value>::type std::swap’ conflicts with a previous declaration
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:179:5: note: previous declaration ‘typename std::enable_if<std::__and_<std::is_move_constructible<_Tp>, std::is_move_assignable<_Tp> >::value>::type std::swap(_Tp&, _Tp&)’
     swap(_Tp& __a, _Tp& __b)
     ^~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:202:16: error: ‘__a’ was not declared in this scope
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:202:21: error: ‘_Nm’ was not declared in this scope
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                     ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:202:33: error: ‘__b’ was not declared in this scope
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                                 ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:202:38: error: ‘_Nm’ was not declared in this scope
     swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
                                      ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/move.h:203:5: error: expected ‘;’ before ‘noexcept’
     noexcept(__is_nothrow_swappable<_Tp>::value)
     ^~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:64:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:85:17: error: ‘std::size_t’ has not been declared
   template<std::size_t...>
                 ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:421:41: error: ‘std::size_t’ has not been declared
       template<typename... _Args1, std::size_t... _Indexes1,
                                         ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:422:41: error: ‘std::size_t’ has not been declared
                typename... _Args2, std::size_t... _Indexes2>
                                         ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:424:27: error: ‘_Indexes1’ was not declared in this scope
              _Index_tuple<_Indexes1...>, _Index_tuple<_Indexes2...>);
                           ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:424:36: error: expected parameter pack before ‘...’
              _Index_tuple<_Indexes1...>, _Index_tuple<_Indexes2...>);
                                    ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:424:39: error: template argument 1 is invalid
              _Index_tuple<_Indexes1...>, _Index_tuple<_Indexes2...>);
                                       ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:424:55: error: ‘_Indexes2’ was not declared in this scope
              _Index_tuple<_Indexes1...>, _Index_tuple<_Indexes2...>);
                                                       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:424:64: error: expected parameter pack before ‘...’
              _Index_tuple<_Indexes1...>, _Index_tuple<_Indexes2...>);
                                                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_pair.h:424:67: error: template argument 1 is invalid
              _Index_tuple<_Indexes1...>, _Index_tuple<_Indexes2...>);
                                                                   ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:65:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator_base_types.h:116:67: error: ‘ptrdiff_t’ does not name a type
   template<typename _Category, typename _Tp, typename _Distance = ptrdiff_t,
                                                                   ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator_base_types.h:182:15: error: ‘ptrdiff_t’ does not name a type
       typedef ptrdiff_t                   difference_type;
               ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator_base_types.h:193:15: error: ‘ptrdiff_t’ does not name a type
       typedef ptrdiff_t                   difference_type;
               ^~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:66:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:67,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ptr_traits.h:104:20: error: ‘ptrdiff_t’ was not declared in this scope
  = __detected_or_t<ptrdiff_t, __difference_type, _Ptr>;
                    ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ptr_traits.h:104:54: error: template argument 1 is invalid
  = __detected_or_t<ptrdiff_t, __difference_type, _Ptr>;
                                                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ptr_traits.h:130:15: error: ‘ptrdiff_t’ does not name a type
       typedef ptrdiff_t difference_type;
               ^~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h: In static member function ‘static _Tp* std::__copy_move<_IsMove, true, std::random_access_iterator_tag>::__copy_m(const _Tp*, const _Tp*, _Tp*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:366:10: error: ‘ptrdiff_t’ does not name a type
    const ptrdiff_t _Num = __last - __first;
          ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:367:8: error: ‘_Num’ was not declared in this scope
    if (_Num)
        ^~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:369:22: error: ‘_Num’ was not declared in this scope
    return __result + _Num;
                      ^~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h: In static member function ‘static _Tp* std::__copy_move_backward<_IsMove, true, std::random_access_iterator_tag>::__copy_move_b(const _Tp*, const _Tp*, _Tp*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:568:10: error: ‘ptrdiff_t’ does not name a type
    const ptrdiff_t _Num = __last - __first;
          ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:569:8: error: ‘_Num’ was not declared in this scope
    if (_Num)
        ^~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:571:22: error: ‘_Num’ was not declared in this scope
    return __result - _Num;
                      ^~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h: In function ‘typename __gnu_cxx::__enable_if<std::__is_byte<_Tp>::__value, void>::__type std::__fill_a(_Tp*, _Tp*, const _Tp&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:706:11: error: expected primary-expression before ‘const’
       if (const size_t __len = __last - __first)
           ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:706:11: error: expected ‘)’ before ‘const’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:707:63: error: ‘__len’ was not declared in this scope
  __builtin_memset(__first, static_cast<unsigned char>(__tmp), __len);
                                                               ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h: In static member function ‘static bool std::__equal<true>::equal(const _Tp*, const _Tp*, const _Tp*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:813:8: error: expected primary-expression before ‘const’
    if (const size_t __len = (__last1 - __first1))
        ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:813:8: error: expected ‘)’ before ‘const’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:814:65: error: ‘__len’ was not declared in this scope
      return !__builtin_memcmp(__first1, __first2, sizeof(_Tp) * __len);
                                                                 ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h: In static member function ‘static bool std::__lexicographical_compare<true>::__lc(const _Tp*, const _Tp*, const _Up*, const _Up*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:917:10: error: ‘size_t’ does not name a type
    const size_t __len1 = __last1 - __first1;
          ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:918:10: error: ‘size_t’ does not name a type
    const size_t __len2 = __last2 - __first2;
          ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:919:8: error: expected primary-expression before ‘const’
    if (const size_t __len = std::min(__len1, __len2))
        ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:919:8: error: expected ‘)’ before ‘const’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:920:62: error: ‘__len’ was not declared in this scope
      if (int __result = __builtin_memcmp(__first1, __first2, __len))
                                                              ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:922:11: error: ‘__len1’ was not declared in this scope
    return __len1 < __len2;
           ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:922:20: error: ‘__len2’ was not declared in this scope
    return __len1 < __len2;
                    ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:40:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/postypes.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/postypes.h:98:11: error: ‘ptrdiff_t’ does not name a type
   typedef ptrdiff_t streamsize; // Signed integral type
           ^~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:104:66: error: ‘std::size_t’ has not been declared
       compare(const char_type* __s1, const char_type* __s2, std::size_t __n);
                                                                  ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:106:19: error: ‘size_t’ in namespace ‘std’ does not name a type
       static std::size_t
                   ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:110:39: error: ‘std::size_t’ has not been declared
       find(const char_type* __s, std::size_t __n, const char_type& __a);
                                       ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:113:57: error: ‘std::size_t’ has not been declared
       move(char_type* __s1, const char_type* __s2, std::size_t __n);
                                                         ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:116:57: error: ‘std::size_t’ has not been declared
       copy(char_type* __s1, const char_type* __s2, std::size_t __n);
                                                         ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:119:35: error: ‘std::size_t’ has not been declared
       assign(char_type* __s, std::size_t __n, char_type __a);
                                   ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:145:64: error: ‘std::size_t’ has not been declared
     compare(const char_type* __s1, const char_type* __s2, std::size_t __n)
                                                                ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h: In static member function ‘static int __gnu_cxx::char_traits<_CharT>::compare(const char_type*, const char_type*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:147:12: error: ‘size_t’ is not a member of ‘std’
       for (std::size_t __i = 0; __i < __n; ++__i)
            ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:147:12: note: suggested alternative:
In file included from /usr/include/wchar.h:51:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/cwchar:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/postypes.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/lib/gcc/x86_64-redhat-linux/6.3.1/include/stddef.h:216:23: note:   ‘size_t’
 typedef __SIZE_TYPE__ size_t;
                       ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:147:33: error: ‘__i’ was not declared in this scope
       for (std::size_t __i = 0; __i < __n; ++__i)
                                 ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:156:10: error: ‘size_t’ in namespace ‘std’ does not name a type
     std::size_t
          ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:169:37: error: ‘std::size_t’ has not been declared
     find(const char_type* __s, std::size_t __n, const char_type& __a)
                                     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h: In static member function ‘static const char_type* __gnu_cxx::char_traits<_CharT>::find(const char_type*, int, const char_type&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:171:12: error: ‘size_t’ is not a member of ‘std’
       for (std::size_t __i = 0; __i < __n; ++__i)
            ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:171:12: note: suggested alternative:
In file included from /usr/include/wchar.h:51:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/cwchar:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/postypes.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/lib/gcc/x86_64-redhat-linux/6.3.1/include/stddef.h:216:23: note:   ‘size_t’
 typedef __SIZE_TYPE__ size_t;
                       ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:171:33: error: ‘__i’ was not declared in this scope
       for (std::size_t __i = 0; __i < __n; ++__i)
                                 ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:180:55: error: ‘std::size_t’ has not been declared
     move(char_type* __s1, const char_type* __s2, std::size_t __n)
                                                       ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:189:55: error: ‘std::size_t’ has not been declared
     copy(char_type* __s1, const char_type* __s2, std::size_t __n)
                                                       ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:199:33: error: ‘std::size_t’ has not been declared
     assign(char_type* __s, std::size_t __n, char_type __a)
                                 ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/exception:170:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:33,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/c++allocator.h:33,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:46,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/exception_ptr.h:97:30: error: field ‘nullptr_t’ has incomplete type ‘std::__exception_ptr::exception_ptr’
       exception_ptr(nullptr_t) noexcept
                              ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/exception_ptr.h:77:11: note: definition of ‘class std::__exception_ptr::exception_ptr’ is not complete until the closing brace
     class exception_ptr
           ^~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/exception_ptr.h:97:30: error: expected ‘;’ at end of member declaration
       exception_ptr(nullptr_t) noexcept
                              ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/exception_ptr.h:97:32: error: expected unqualified-id before ‘noexcept’
       exception_ptr(nullptr_t) noexcept
                                ^~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:33:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/c++allocator.h:33,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:46,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:116:31: error: declaration of ‘operator new’ as non-function
 void* operator new(std::size_t) _GLIBCXX_THROW (std::bad_alloc)
                               ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:116:20: error: ‘size_t’ is not a member of ‘std’
 void* operator new(std::size_t) _GLIBCXX_THROW (std::bad_alloc)
                    ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:116:20: note: suggested alternative:
In file included from /usr/include/wchar.h:51:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/cwchar:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/postypes.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/lib/gcc/x86_64-redhat-linux/6.3.1/include/stddef.h:216:23: note:   ‘size_t’
 typedef __SIZE_TYPE__ size_t;
                       ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:33:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/c++allocator.h:33,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:46,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:118:33: error: declaration of ‘operator new []’ as non-function
 void* operator new[](std::size_t) _GLIBCXX_THROW (std::bad_alloc)
                                 ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:118:22: error: ‘size_t’ is not a member of ‘std’
 void* operator new[](std::size_t) _GLIBCXX_THROW (std::bad_alloc)
                      ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:118:22: note: suggested alternative:
In file included from /usr/include/wchar.h:51:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/cwchar:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/postypes.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/lib/gcc/x86_64-redhat-linux/6.3.1/include/stddef.h:216:23: note:   ‘size_t’
 typedef __SIZE_TYPE__ size_t;
                       ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:33:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/c++allocator.h:33,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:46,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:130:25: error: declaration of ‘operator new’ as non-function
 void* operator new(std::size_t, const std::nothrow_t&) _GLIBCXX_USE_NOEXCEPT
                         ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:130:20: error: ‘size_t’ is not a member of ‘std’
 void* operator new(std::size_t, const std::nothrow_t&) _GLIBCXX_USE_NOEXCEPT
                    ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:130:20: note: suggested alternative:
In file included from /usr/include/wchar.h:51:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/cwchar:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/postypes.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/lib/gcc/x86_64-redhat-linux/6.3.1/include/stddef.h:216:23: note:   ‘size_t’
 typedef __SIZE_TYPE__ size_t;
                       ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:33:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/c++allocator.h:33,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:46,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:130:33: error: expected primary-expression before ‘const’
 void* operator new(std::size_t, const std::nothrow_t&) _GLIBCXX_USE_NOEXCEPT
                                 ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:132:27: error: declaration of ‘operator new []’ as non-function
 void* operator new[](std::size_t, const std::nothrow_t&) _GLIBCXX_USE_NOEXCEPT
                           ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:132:22: error: ‘size_t’ is not a member of ‘std’
 void* operator new[](std::size_t, const std::nothrow_t&) _GLIBCXX_USE_NOEXCEPT
                      ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:132:22: note: suggested alternative:
In file included from /usr/include/wchar.h:51:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/cwchar:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/postypes.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/lib/gcc/x86_64-redhat-linux/6.3.1/include/stddef.h:216:23: note:   ‘size_t’
 typedef __SIZE_TYPE__ size_t;
                       ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:33:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/c++allocator.h:33,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:46,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:132:35: error: expected primary-expression before ‘const’
 void* operator new[](std::size_t, const std::nothrow_t&) _GLIBCXX_USE_NOEXCEPT
                                   ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:146:32: error: declaration of ‘operator new’ as non-function
 inline void* operator new(std::size_t, void* __p) _GLIBCXX_USE_NOEXCEPT
                                ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:146:27: error: ‘size_t’ is not a member of ‘std’
 inline void* operator new(std::size_t, void* __p) _GLIBCXX_USE_NOEXCEPT
                           ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:146:27: note: suggested alternative:
In file included from /usr/include/wchar.h:51:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/cwchar:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/postypes.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/lib/gcc/x86_64-redhat-linux/6.3.1/include/stddef.h:216:23: note:   ‘size_t’
 typedef __SIZE_TYPE__ size_t;
                       ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:33:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/c++allocator.h:33,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:46,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:146:40: error: expected primary-expression before ‘void’
 inline void* operator new(std::size_t, void* __p) _GLIBCXX_USE_NOEXCEPT
                                        ^~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:148:34: error: declaration of ‘operator new []’ as non-function
 inline void* operator new[](std::size_t, void* __p) _GLIBCXX_USE_NOEXCEPT
                                  ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:148:29: error: ‘size_t’ is not a member of ‘std’
 inline void* operator new[](std::size_t, void* __p) _GLIBCXX_USE_NOEXCEPT
                             ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:148:29: note: suggested alternative:
In file included from /usr/include/wchar.h:51:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/cwchar:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/postypes.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/lib/gcc/x86_64-redhat-linux/6.3.1/include/stddef.h:216:23: note:   ‘size_t’
 typedef __SIZE_TYPE__ size_t;
                       ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:33:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/c++allocator.h:33,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:46,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/new:148:42: error: expected primary-expression before ‘void’
 inline void* operator new[](std::size_t, void* __p) _GLIBCXX_USE_NOEXCEPT
                                          ^~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/c++allocator.h:33:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:46,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:44:14: error: ‘std::size_t’ has not been declared
   using std::size_t;
              ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:45:14: error: ‘std::ptrdiff_t’ has not been declared
   using std::ptrdiff_t;
              ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:62:15: error: ‘ptrdiff_t’ does not name a type
       typedef ptrdiff_t  difference_type;
               ^~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:72:15: error: ‘ptrdiff_t’ does not name a type
       typedef ptrdiff_t   difference_type;
               ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:112:15: error: ‘ptrdiff_t’ does not name a type
       typedef ptrdiff_t  difference_type;
               ^~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:44:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h:45:26: error: ‘streamsize’ has not been declared
       const _CharT* __s, streamsize __n)
                          ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h: In function ‘void std::__ostream_write(std::basic_ostream<_CharT, _Traits>&, const _CharT*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h:50:13: error: ‘streamsize’ does not name a type
       const streamsize __put = __out.rdbuf()->sputn(__s, __n);
             ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h:51:11: error: ‘__put’ was not declared in this scope
       if (__put != __n)
           ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h:57:59: error: ‘streamsize’ has not been declared
     __ostream_fill(basic_ostream<_CharT, _Traits>& __out, streamsize __n)
                                                           ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h:77:27: error: ‘streamsize’ has not been declared
        const _CharT* __s, streamsize __n)
                           ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h: In function ‘std::basic_ostream<_CharT, _Traits>& std::__ostream_insert(std::basic_ostream<_CharT, _Traits>&, const _CharT*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h:87:14: error: ‘streamsize’ does not name a type
        const streamsize __w = __out.width();
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h:88:12: error: ‘__w’ was not declared in this scope
        if (__w > __n)
            ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h:118:68: error: ‘streamsize’ has not been declared
   extern template ostream& __ostream_insert(ostream&, const char*, streamsize);
                                                                    ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream_insert.h:122:11: error: ‘streamsize’ has not been declared
           streamsize);
           ^~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/alloc_traits.h:36:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:40,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/alloc_traits.h:404:36: error: ‘ptrdiff_t’ in namespace ‘std’ does not name a type
       using difference_type = std::ptrdiff_t;
                                    ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/alloc_traits.h:407:30: error: ‘size_t’ in namespace ‘std’ does not name a type
       using size_type = std::size_t;
                              ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/alloc_traits.h:435:37: error: ‘size_type’ has not been declared
       allocate(allocator_type& __a, size_type __n)
                                     ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/alloc_traits.h:449:37: error: ‘size_type’ has not been declared
       allocate(allocator_type& __a, size_type __n, const_void_pointer __hint)
                                     ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/alloc_traits.h:461:52: error: ‘size_type’ has not been declared
       deallocate(allocator_type& __a, pointer __p, size_type __n)
                                                    ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/alloc_traits.h:494:14: error: ‘size_type’ does not name a type
       static size_type
              ^~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:55:51: error: ‘std::size_t’ has not been declared
     const char* __name, const _CharT* __str, std::size_t* __idx,
                                                   ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:48: error: ‘std::size_t’ has not been declared
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
                                                ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:90:31: error: ‘std::size_t’ has not been declared
      __builtin_va_list), std::size_t __n,
                               ^~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In instantiation of ‘class std::basic_string<char>’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5428:68:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:2624:61: error: no type named ‘difference_type’ in ‘std::basic_string<char>::_CharT_alloc_type {aka class std::allocator<char>}’
       typedef typename _CharT_alloc_type::difference_type   difference_type;
                                                             ^~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘int std::stoi(const string&, size_t*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5429:19: error: no matching function for call to ‘__stoa(long int (*)(const char*, char**, int) throw (), const char [5], const char*, size_t*&, int&)’
      __idx, __base); }
                   ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5429:19: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
      __idx, __base); }
                   ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘long int std::stol(const string&, size_t*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5434:22: error: no matching function for call to ‘__stoa(long int (*)(const char*, char**, int) throw (), const char [5], const char*, size_t*&, int&)’
         __idx, __base); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5434:22: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
         __idx, __base); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘long unsigned int std::stoul(const string&, size_t*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5439:22: error: no matching function for call to ‘__stoa(long unsigned int (*)(const char*, char**, int) throw (), const char [6], const char*, size_t*&, int&)’
         __idx, __base); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5439:22: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
         __idx, __base); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘long long int std::stoll(const string&, size_t*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5444:22: error: no matching function for call to ‘__stoa(long long int (*)(const char*, char**, int) throw (), const char [6], const char*, size_t*&, int&)’
         __idx, __base); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5444:22: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
         __idx, __base); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘long long unsigned int std::stoull(const string&, size_t*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5449:22: error: no matching function for call to ‘__stoa(long long unsigned int (*)(const char*, char**, int) throw (), const char [7], const char*, size_t*&, int&)’
         __idx, __base); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5449:22: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
         __idx, __base); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘float std::stof(const string&, size_t*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5454:72: error: no matching function for call to ‘__stoa(float (*)(const char*, char**) throw (), const char [5], const char*, size_t*&)’
   { return __gnu_cxx::__stoa(&std::strtof, "stof", __str.c_str(), __idx); }
                                                                        ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5454:72: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
   { return __gnu_cxx::__stoa(&std::strtof, "stof", __str.c_str(), __idx); }
                                                                        ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘double std::stod(const string&, size_t*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5458:72: error: no matching function for call to ‘__stoa(double (*)(const char*, char**) throw (), const char [5], const char*, size_t*&)’
   { return __gnu_cxx::__stoa(&std::strtod, "stod", __str.c_str(), __idx); }
                                                                        ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5458:72: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
   { return __gnu_cxx::__stoa(&std::strtod, "stod", __str.c_str(), __idx); }
                                                                        ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘long double std::stold(const string&, size_t*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5462:74: error: no matching function for call to ‘__stoa(long double (*)(const char*, char**) throw (), const char [6], const char*, size_t*&)’
   { return __gnu_cxx::__stoa(&std::strtold, "stold", __str.c_str(), __idx); }
                                                                          ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5462:74: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
   { return __gnu_cxx::__stoa(&std::strtold, "stold", __str.c_str(), __idx); }
                                                                          ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::string std::to_string(int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5472:20: error: no matching function for call to ‘__to_xstring(int (*)(char*, size_t, const char*, __va_list_tag*) throw (), long unsigned int, const char [3], int&)’
         "%d", __val); }
                    ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5472:20: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
         "%d", __val); }
                    ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::string std::to_string(unsigned int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5478:20: error: no matching function for call to ‘__to_xstring(int (*)(char*, size_t, const char*, __va_list_tag*) throw (), long unsigned int, const char [3], unsigned int&)’
         "%u", __val); }
                    ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5478:20: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
         "%u", __val); }
                    ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::string std::to_string(long int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5483:21: error: no matching function for call to ‘__to_xstring(int (*)(char*, size_t, const char*, __va_list_tag*) throw (), long unsigned int, const char [4], long int&)’
         "%ld", __val); }
                     ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5483:21: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
         "%ld", __val); }
                     ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::string std::to_string(long unsigned int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5489:21: error: no matching function for call to ‘__to_xstring(int (*)(char*, size_t, const char*, __va_list_tag*) throw (), long unsigned int, const char [4], long unsigned int&’
         "%lu", __val); }
                     ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5489:21: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
         "%lu", __val); }
                     ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::string std::to_string(long long int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5495:22: error: no matching function for call to ‘__to_xstring(int (*)(char*, size_t, const char*, __va_list_tag*) throw (), long unsigned int, const char [5], long long int&)’
         "%lld", __val); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5495:22: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
         "%lld", __val); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::string std::to_string(long long unsigned int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5501:22: error: no matching function for call to ‘__to_xstring(int (*)(char*, size_t, const char*, __va_list_tag*) throw (), long unsigned int, const char [5], long long unsigned int&)’
         "%llu", __val); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5501:22: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
         "%llu", __val); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::string std::to_string(float)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5509:20: error: no matching function for call to ‘__to_xstring(int (*)(char*, size_t, const char*, __va_list_tag*) throw (), const int&, const char [3], float&)’
         "%f", __val);
                    ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5509:20: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
         "%f", __val);
                    ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::string std::to_string(double)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5518:20: error: no matching function for call to ‘__to_xstring(int (*)(char*, size_t, const char*, __va_list_tag*) throw (), const int&, const char [3], double&)’
         "%f", __val);
                    ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5518:20: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
         "%f", __val);
                    ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::string std::to_string(long double)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5527:21: error: no matching function for call to ‘__to_xstring(int (*)(char*, size_t, const char*, __va_list_tag*) throw (), const int&, const char [4], long double&)’
         "%Lf", __val);
                     ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5527:21: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
         "%Lf", __val);
                     ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In instantiation of ‘class std::basic_string<wchar_t>’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5534:68:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:2624:61: error: no type named ‘difference_type’ in ‘std::basic_string<wchar_t>::_CharT_alloc_type {aka class std::allocator<wchar_t>}’
       typedef typename _CharT_alloc_type::difference_type   difference_type;
                                                             ^~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘int std::stoi(const wstring&, size_t*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5535:19: error: no matching function for call to ‘__stoa(long int (*)(const wchar_t*, wchar_t**, int) throw (), const char [5], const wchar_t*, size_t*&, int&)’
      __idx, __base); }
                   ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5535:19: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
      __idx, __base); }
                   ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘long int std::stol(const wstring&, size_t*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5540:22: error: no matching function for call to ‘__stoa(long int (*)(const wchar_t*, wchar_t**, int) throw (), const char [5], const wchar_t*, size_t*&, int&)’
         __idx, __base); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5540:22: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
         __idx, __base); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘long unsigned int std::stoul(const wstring&, size_t*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5545:22: error: no matching function for call to ‘__stoa(long unsigned int (*)(const wchar_t*, wchar_t**, int) throw (), const char [6], const wchar_t*, size_t*&, int&)’
         __idx, __base); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5545:22: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
         __idx, __base); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘long long int std::stoll(const wstring&, size_t*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5550:22: error: no matching function for call to ‘__stoa(long long int (*)(const wchar_t*, wchar_t**, int) throw (), const char [6], const wchar_t*, size_t*&, int&)’
         __idx, __base); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5550:22: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
         __idx, __base); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘long long unsigned int std::stoull(const wstring&, size_t*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5555:22: error: no matching function for call to ‘__stoa(long long unsigned int (*)(const wchar_t*, wchar_t**, int) throw (), const char [7], const wchar_t*, size_t*&, int&)’
         __idx, __base); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5555:22: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
         __idx, __base); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘float std::stof(const wstring&, size_t*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5560:72: error: no matching function for call to ‘__stoa(float (*)(const wchar_t*, wchar_t**) throw (), const char [5], const wchar_t*, size_t*&)’
   { return __gnu_cxx::__stoa(&std::wcstof, "stof", __str.c_str(), __idx); }
                                                                        ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5560:72: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
   { return __gnu_cxx::__stoa(&std::wcstof, "stof", __str.c_str(), __idx); }
                                                                        ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘double std::stod(const wstring&, size_t*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5564:72: error: no matching function for call to ‘__stoa(double (*)(const wchar_t*, wchar_t**) throw (), const char [5], const wchar_t*, size_t*&)’
   { return __gnu_cxx::__stoa(&std::wcstod, "stod", __str.c_str(), __idx); }
                                                                        ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5564:72: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
   { return __gnu_cxx::__stoa(&std::wcstod, "stod", __str.c_str(), __idx); }
                                                                        ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘long double std::stold(const wstring&, size_t*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5568:74: error: no matching function for call to ‘__stoa(long double (*)(const wchar_t*, wchar_t**) throw (), const char [6], const wchar_t*, size_t*&)’
   { return __gnu_cxx::__stoa(&std::wcstold, "stold", __str.c_str(), __idx); }
                                                                          ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note: candidate: template<class _TRet, class _Ret, class _CharT, class ... _Base> _Ret __gnu_cxx::__stoa(_TRet (*)(const _CharT*, _CharT**, _Base ...), const char*, const _CharT*, int*, _Base ...)
     __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:54:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5568:74: note:   cannot convert ‘__idx’ (type ‘size_t* {aka long unsigned int*}’) to type ‘int*’
   { return __gnu_cxx::__stoa(&std::wcstold, "stold", __str.c_str(), __idx); }
                                                                          ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::wstring std::to_wstring(int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5575:22: error: no matching function for call to ‘__to_xstring(int (*)(wchar_t*, size_t, const wchar_t*, __va_list_tag*) throw (), long unsigned int, const wchar_t [3], int&)’
          L"%d", __val); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5575:22: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
          L"%d", __val); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::wstring std::to_wstring(unsigned int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5581:22: error: no matching function for call to ‘__to_xstring(int (*)(wchar_t*, size_t, const wchar_t*, __va_list_tag*) throw (), long unsigned int, const wchar_t [3], unsigned int&)’
          L"%u", __val); }
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5581:22: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
          L"%u", __val); }
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::wstring std::to_wstring(long int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5586:23: error: no matching function for call to ‘__to_xstring(int (*)(wchar_t*, size_t, const wchar_t*, __va_list_tag*) throw (), long unsigned int, const wchar_t [4], long int&’
          L"%ld", __val); }
                       ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5586:23: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
          L"%ld", __val); }
                       ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::wstring std::to_wstring(long unsigned int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5592:23: error: no matching function for call to ‘__to_xstring(int (*)(wchar_t*, size_t, const wchar_t*, __va_list_tag*) throw (), long unsigned int, const wchar_t [4], long unsigned int&)’
          L"%lu", __val); }
                       ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5592:23: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
          L"%lu", __val); }
                       ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::wstring std::to_wstring(long long int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5598:24: error: no matching function for call to ‘__to_xstring(int (*)(wchar_t*, size_t, const wchar_t*, __va_list_tag*) throw (), long unsigned int, const wchar_t [5], long long int&)’
          L"%lld", __val); }
                        ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5598:24: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
          L"%lld", __val); }
                        ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::wstring std::to_wstring(long long unsigned int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5604:24: error: no matching function for call to ‘__to_xstring(int (*)(wchar_t*, size_t, const wchar_t*, __va_list_tag*) throw (), long unsigned int, const wchar_t [5], long long unsigned int&)’
          L"%llu", __val); }
                        ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5604:24: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
          L"%llu", __val); }
                        ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::wstring std::to_wstring(float)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5612:22: error: no matching function for call to ‘__to_xstring(int (*)(wchar_t*, size_t, const wchar_t*, __va_list_tag*) throw (), const int&, const wchar_t [3], float&)’
          L"%f", __val);
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5612:22: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
          L"%f", __val);
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::wstring std::to_wstring(double)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5621:22: error: no matching function for call to ‘__to_xstring(int (*)(wchar_t*, size_t, const wchar_t*, __va_list_tag*) throw (), const int&, const wchar_t [3], double&)’
          L"%f", __val);
                      ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5621:22: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
          L"%f", __val);
                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In function ‘std::wstring std::to_wstring(long double)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5630:23: error: no matching function for call to ‘__to_xstring(int (*)(wchar_t*, size_t, const wchar_t*, __va_list_tag*) throw (), const int&, const wchar_t [4], long double&)’
          L"%Lf", __val);
                       ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5417:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note: candidate: template<class _String, class _CharT> _String __gnu_cxx::__to_xstring(int (*)(_CharT*, int, const _CharT*, __va_list_tag*), int, const _CharT*, ...)
     __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     ^~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/string_conversions.h:89:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5630:23: note:   mismatched types ‘int’ and ‘size_t {aka long unsigned int}’
          L"%Lf", __val);
                       ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In instantiation of ‘class std::basic_string<char16_t>’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5692:41:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:2624:61: error: no type named ‘difference_type’ in ‘std::basic_string<char16_t>::_CharT_alloc_type {aka class std::allocator<char16_t>}’
       typedef typename _CharT_alloc_type::difference_type   difference_type;
                                                             ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h: In instantiation of ‘class std::basic_string<char32_t>’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5707:41:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:2624:61: error: no type named ‘difference_type’ in ‘std::basic_string<char32_t>::_CharT_alloc_type {aka class std::allocator<char32_t>}’
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:53:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.tcc: In function ‘std::basic_istream<_CharT, _Traits>& std::operator>>(std::basic_istream<_CharT, _Traits>&, std::basic_string<_CharT, _Traits, _Alloc>&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.tcc:1459:14: error: ‘streamsize’ does not name a type
        const streamsize __w = __in.width();
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.tcc:1460:32: error: ‘__w’ was not declared in this scope
        const __size_type __n = __w > 0 ? static_cast<__size_type>(__w)
                                ^~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ios:42:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:38,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:39,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ios_base.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ios_base.h:520:5: error: ‘streamsize’ does not name a type
     streamsize  _M_precision;
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ios_base.h:521:5: error: ‘streamsize’ does not name a type
     streamsize  _M_width;
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ios_base.h:688:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ios_base.h:697:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ios_base.h:711:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ios_base.h:720:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ios:43:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:38,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:39,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:50:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:147:14: error: ‘streamsize’ does not name a type
       friend streamsize
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:239:33: error: ‘streamsize’ has not been declared
       pubsetbuf(char_type* __s, streamsize __n)
                                 ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:283:7: error: ‘streamsize’ does not name a type
       streamsize
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:356:7: error: ‘streamsize’ does not name a type
       streamsize
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:449:7: error: ‘streamsize’ does not name a type
       streamsize
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:591:26: error: ‘streamsize’ has not been declared
       setbuf(char_type*, streamsize)
                          ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:648:15: error: ‘streamsize’ does not name a type
       virtual streamsize
               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:664:15: error: ‘streamsize’ does not name a type
       virtual streamsize
               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:741:15: error: ‘streamsize’ does not name a type
       virtual streamsize
               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:794:20: error: ‘streamsize’ has not been declared
       __safe_gbump(streamsize __n) { _M_in_cur += __n; }
                    ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:797:20: error: ‘streamsize’ has not been declared
       __safe_pbump(streamsize __n) { _M_out_cur += __n; }
                    ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:837:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:842:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/streambuf:850:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ios:43,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:38,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:39,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:44:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:78:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:115:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:138:12: error: ‘streamsize’ does not name a type
     inline streamsize
            ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:151:5: error: ‘streamsize’ is not a template function
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:152:5: error: expected ‘;’ before ‘__copy_streambufs’
     __copy_streambufs(basic_streambuf<char>*,
     ^~~~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:155:5: error: ‘streamsize’ is not a template function
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:156:5: error: expected ‘;’ before ‘__copy_streambufs_eof’
     __copy_streambufs_eof(basic_streambuf<char>*,
     ^~~~~~~~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:162:5: error: ‘streamsize’ is not a template function
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:163:5: error: expected ‘;’ before ‘__copy_streambufs’
     __copy_streambufs(basic_streambuf<wchar_t>*,
     ^~~~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:166:5: error: ‘streamsize’ is not a template function
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf.tcc:167:5: error: expected ‘;’ before ‘__copy_streambufs_eof’
     __copy_streambufs_eof(basic_streambuf<wchar_t>*,
     ^~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.h:48:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_ios.h:37,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ios:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:38,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:39,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h:279:34: error: ‘streamsize’ has not been declared
       _M_put(const _CharT* __ws, streamsize __len)
                                  ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h: In function ‘typename __gnu_cxx::__enable_if<std::__is_char<_CharT>::__value, std::ostreambuf_iterator<_CharT, std::char_traits<_CharT> > >::__type std::__copy_move_a2(_CharT*, _CharT*, std::ostreambuf_iterator<_CharT, std::char_traits<_CharT> >)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h:313:13: error: ‘streamsize’ does not name a type
       const streamsize __num = __last - __first;
             ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h:314:11: error: ‘__num’ was not declared in this scope
       if (__num > 0)
           ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h: In function ‘typename __gnu_cxx::__enable_if<std::__is_char<_CharT>::__value, std::ostreambuf_iterator<_CharT, std::char_traits<_CharT> > >::__type std::__copy_move_a2(const _CharT*, const _CharT*, std::ostreambuf_iterator<_CharT, std::char_traits<_CharT> >)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h:325:13: error: ‘streamsize’ does not name a type
       const streamsize __num = __last - __first;
             ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h:326:11: error: ‘__num’ was not declared in this scope
       if (__num > 0)
           ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h: In function ‘typename __gnu_cxx::__enable_if<std::__is_char<_CharT>::__value, _CharT*>::__type std::__copy_move_a2(std::istreambuf_iterator<_CharT, std::char_traits<_CharT> >, std::istreambuf_iterator<_CharT, std::char_traits<_CharT> >, _CharT*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h:348:14: error: ‘streamsize’ does not name a type
        const streamsize __n = __sb->egptr() - __sb->gptr();
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h:349:12: error: ‘__n’ was not declared in this scope
        if (__n > 1)
            ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h: In function ‘typename __gnu_cxx::__enable_if<std::__is_char<_CharT2>::__value, std::istreambuf_iterator<_CharT> >::__type std::find(std::istreambuf_iterator<_CharT>, std::istreambuf_iterator<_CharT>, const _CharT2&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h:385:8: error: ‘streamsize’ was not declared in this scope
        streamsize __n = __sb->egptr() - __sb->gptr();
        ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/streambuf_iterator.h:386:12: error: ‘__n’ was not declared in this scope
        if (__n > 1)
            ^~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_ios.h:37:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ios:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:38,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:39,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.h:99:29: error: ‘streamsize’ has not been declared
       const _CharT* __olds, streamsize __newlen, streamsize __oldlen);
                             ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.h:99:50: error: ‘streamsize’ has not been declared
       const _CharT* __olds, streamsize __newlen, streamsize __oldlen);
                                                  ^~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_ios.h:37:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ios:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:38,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:39,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.h:2484:32: error: ‘streamsize’ has not been declared
       _M_pad(char_type __fill, streamsize __w, ios_base& __io,
                                ^~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.h:2651:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_ios.h:37,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ios:44,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:38,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:39,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:780:27: error: ‘streamsize’ has not been declared
     _M_pad(_CharT __fill, streamsize __w, ios_base& __io,
                           ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc: In member function ‘_OutIter std::num_put<_CharT, _OutIter>::_M_insert_int(_OutIter, std::ios_base&, _CharT, _ValueT) const’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:921:8: error: ‘streamsize’ does not name a type
  const streamsize __w = __io.width();
        ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:922:6: error: ‘__w’ was not declared in this scope
  if (__w > static_cast<streamsize>(__len))
      ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:922:24: error: ‘streamsize’ does not name a type
  if (__w > static_cast<streamsize>(__len))
                        ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:929:7: error: ‘class std::ios_base’ has no member named ‘width’
  __io.width(0);
       ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc: In member function ‘_OutIter std::num_put<_CharT, _OutIter>::_M_insert_float(_OutIter, std::ios_base&, _CharT, char, _ValueT) const’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:984:8: error: ‘streamsize’ does not name a type
  const streamsize __prec = __io.precision() < 0 ? 6 : __io.precision();
        ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1006:14: error: ‘__prec’ was not declared in this scope
      __fbuf, __prec, __v);
              ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1018:18: error: ‘__prec’ was not declared in this scope
          __fbuf, __prec, __v);
                  ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1071:6: error: ‘streamsize’ was not declared in this scope
      streamsize __off = 0;
      ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1074:3: error: ‘__off’ was not declared in this scope
   __off = 1;
   ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1080:45: error: ‘__off’ was not declared in this scope
       __lc->_M_thousands_sep, __wp, __ws2 + __off,
                                             ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1088:8: error: ‘streamsize’ does not name a type
  const streamsize __w = __io.width();
        ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1089:6: error: ‘__w’ was not declared in this scope
  if (__w > static_cast<streamsize>(__len))
      ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1089:24: error: ‘streamsize’ does not name a type
  if (__w > static_cast<streamsize>(__len))
                        ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1096:7: error: ‘class std::ios_base’ has no member named ‘width’
  __io.width(0);
       ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc: In member function ‘virtual _OutIter std::num_put<_CharT, _OutIter>::do_put(std::num_put<_CharT, _OutIter>::iter_type, std::ios_base&, std::num_put<_CharT, _OutIter>::char_type, bool) const’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1126:10: error: ‘streamsize’ does not name a type
    const streamsize __w = __io.width();
          ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1127:8: error: ‘__w’ was not declared in this scope
    if (__w > static_cast<streamsize>(__len))
        ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1127:26: error: ‘streamsize’ does not name a type
    if (__w > static_cast<streamsize>(__len))
                          ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1129:14: error: ‘streamsize’ does not name a type
        const streamsize __plen = __w - __len;
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1132:10: error: ‘__plen’ was not declared in this scope
        * __plen));
          ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1135:13: error: ‘class std::ios_base’ has no member named ‘width’
        __io.width(0);
             ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1149:9: error: ‘class std::ios_base’ has no member named ‘width’
    __io.width(0);
         ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1210:8: error: ‘streamsize’ has not been declared
        streamsize __newlen, streamsize __oldlen)
        ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/locale_facets.tcc:1210:29: error: ‘streamsize’ has not been declared
        streamsize __newlen, streamsize __oldlen)
                             ^~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:39:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:311:38: error: ‘streamsize’ has not been declared
       _M_write(const char_type* __s, streamsize __n)
                                      ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:335:35: error: ‘streamsize’ has not been declared
       write(const char_type* __s, streamsize __n);
                                   ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream: In member function ‘void std::basic_ostream<_CharT, _Traits>::_M_write(const char_type*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:313:8: error: ‘streamsize’ does not name a type
  const streamsize __put = this->rdbuf()->sputn(__s, __n);
        ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:314:6: error: ‘__put’ was not declared in this scope
  if (__put != __n)
      ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream: In function ‘std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, const _CharT*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:545:17: error: ‘streamsize’ does not name a type
     static_cast<streamsize>(_Traits::length(__s)));
                 ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream: In function ‘std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, _Traits>&, const char*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:562:17: error: ‘streamsize’ does not name a type
     static_cast<streamsize>(_Traits::length(__s)));
                 ^~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ostream:638:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:39,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream.tcc: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/ostream.tcc:183:30: error: ‘streamsize’ has not been declared
     write(const _CharT* __s, streamsize __n)
                              ^~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:40:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:82:7: error: ‘streamsize’ does not name a type
       streamsize   _M_gcount;
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:268:7: error: ‘streamsize’ does not name a type
       streamsize
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:343:27: error: ‘streamsize’ has not been declared
       get(char_type* __s, streamsize __n, char_type __delim);
                           ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:354:27: error: ‘streamsize’ has not been declared
       get(char_type* __s, streamsize __n)
                           ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:416:31: error: ‘streamsize’ has not been declared
       getline(char_type* __s, streamsize __n, char_type __delim);
                               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:427:31: error: ‘streamsize’ has not been declared
       getline(char_type* __s, streamsize __n)
                               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:451:7: error: expected ‘;’ at end of member declaration
       ignore(streamsize __n, int_type __delim);
       ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:451:25: error: expected ‘)’ before ‘__n’
       ignore(streamsize __n, int_type __delim);
                         ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:454:7: error: expected ‘;’ at end of member declaration
       ignore(streamsize __n);
       ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:454:14: error: redeclaration of ‘std::basic_istream<_CharT, _Traits>::__istream_type& std::basic_istream<_CharT, _Traits>::ignore’
       ignore(streamsize __n);
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:451:14: note: previous declaration ‘std::basic_istream<_CharT, _Traits>::__istream_type& std::basic_istream<_CharT, _Traits>::ignore’
       ignore(streamsize __n, int_type __delim);
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:454:25: error: expected ‘)’ before ‘__n’
       ignore(streamsize __n);
                         ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:457:14: error: ‘std::basic_istream<_CharT, _Traits>::__istream_type& std::basic_istream<_CharT, _Traits>::ignore()’ conflicts with a previous declaration
       ignore();
              ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:451:14: note: previous declaration ‘std::basic_istream<_CharT, _Traits>::__istream_type& std::basic_istream<_CharT, _Traits>::ignore’
       ignore(streamsize __n, int_type __delim);
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:486:28: error: ‘streamsize’ has not been declared
       read(char_type* __s, streamsize __n);
                            ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:504:7: error: ‘streamsize’ does not name a type
       streamsize
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream: In constructor ‘std::basic_istream<_CharT, _Traits>::basic_istream(std::basic_istream<_CharT, _Traits>::__streambuf_type*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:94:9: error: class ‘std::basic_istream<_CharT, _Traits>’ does not have any field named ‘_M_gcount’
       : _M_gcount(streamsize(0))
         ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:94:31: error: there are no arguments to ‘streamsize’ that depend on a template parameter, so a declaration of ‘streamsize’ must be available [-fpermissive]
       : _M_gcount(streamsize(0))
                               ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:94:31: note: (if you use ‘-fpermissive’, G++ will accept your code, but allowing the use of an undeclared name is deprecated)
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream: In destructor ‘virtual std::basic_istream<_CharT, _Traits>::~basic_istream()’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:104:9: error: ‘_M_gcount’ was not declared in this scope
       { _M_gcount = streamsize(0); }
         ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:104:33: error: there are no arguments to ‘streamsize’ that depend on a template parameter, so a declaration of ‘streamsize’ must be available [-fpermissive]
       { _M_gcount = streamsize(0); }
                                 ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream: In constructor ‘std::basic_istream<_CharT, _Traits>::basic_istream()’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:607:9: error: class ‘std::basic_istream<_CharT, _Traits>’ does not have any field named ‘_M_gcount’
       : _M_gcount(streamsize(0))
         ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:607:31: error: there are no arguments to ‘streamsize’ that depend on a template parameter, so a declaration of ‘streamsize’ must be available [-fpermissive]
       : _M_gcount(streamsize(0))
                               ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream: In constructor ‘std::basic_istream<_CharT, _Traits>::basic_istream(std::basic_istream<_CharT, _Traits>&&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:614:23: error: class ‘std::basic_istream<_CharT, _Traits>’ does not have any field named ‘_M_gcount’
       : __ios_type(), _M_gcount(__rhs._M_gcount)
                       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream: In member function ‘void std::basic_istream<_CharT, _Traits>::swap(std::basic_istream<_CharT, _Traits>&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:635:12: error: ‘_M_gcount’ was not declared in this scope
  std::swap(_M_gcount, __rhs._M_gcount);
            ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream: In instantiation of ‘class std::basic_istream<char>’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:647:24:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:451:14: error: ‘std::basic_istream<_CharT, _Traits>::__istream_type& std::basic_istream<_CharT, _Traits>::ignore() [with _CharT = char; _Traits = std::char_traits<char>; std::basic_istream<_CharT, _Traits>::__istream_type = std::basic_istream<char>]’ conflicts with a previous declaration
       ignore(streamsize __n, int_type __delim);
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:451:14: note: previous declaration ‘std::basic_istream<char>::__istream_type& std::basic_istream<char>::ignore’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:648:29: error: ‘streamsize’ has not been declared
     getline(char_type* __s, streamsize __n, char_type __delim);
                             ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:653:12: error: ‘std::basic_istream<char>& std::basic_istream<char>::ignore’ is not a static data member of ‘class std::basic_istream<char>’
     ignore(streamsize __n);
            ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:653:12: error: ‘streamsize’ was not declared in this scope
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:658:12: error: ‘std::basic_istream<char>& std::basic_istream<char>::ignore’ is not a static data member of ‘class std::basic_istream<char>’
     ignore(streamsize __n, int_type __delim);
            ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:658:12: error: ‘streamsize’ was not declared in this scope
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:658:37: error: expected primary-expression before ‘__delim’
     ignore(streamsize __n, int_type __delim);
                                     ^~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:658:44: error: expression list treated as compound expression in initializer [-fpermissive]
     ignore(streamsize __n, int_type __delim);
                                            ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream: In instantiation of ‘class std::basic_istream<wchar_t>’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:663:27:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:451:14: error: ‘std::basic_istream<_CharT, _Traits>::__istream_type& std::basic_istream<_CharT, _Traits>::ignore() [with _CharT = wchar_t; _Traits = std::char_traits<wchar_t>; std::basic_istream<_CharT, _Traits>::__istream_type = std::basic_istream<wchar_t>]’ conflicts with a previous declaration
       ignore(streamsize __n, int_type __delim);
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:451:14: note: previous declaration ‘std::basic_istream<wchar_t>::__istream_type& std::basic_istream<wchar_t>::ignore’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:664:29: error: ‘streamsize’ has not been declared
     getline(char_type* __s, streamsize __n, char_type __delim);
                             ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:669:12: error: ‘std::basic_istream<wchar_t>& std::basic_istream<wchar_t>::ignore’ is not a static data member of ‘class std::basic_istream<wchar_t>’
     ignore(streamsize __n);
            ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:669:12: error: ‘streamsize’ was not declared in this scope
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:674:12: error: ‘std::basic_istream<wchar_t>& std::basic_istream<wchar_t>::ignore’ is not a static data member of ‘class std::basic_istream<wchar_t>’
     ignore(streamsize __n, int_type __delim);
            ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:674:12: error: ‘streamsize’ was not declared in this scope
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:674:37: error: expected primary-expression before ‘__delim’
     ignore(streamsize __n, int_type __delim);
                                     ^~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:674:44: error: expression list treated as compound expression in initializer [-fpermissive]
     ignore(streamsize __n, int_type __delim);
                                            ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/istream:934:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/iostream:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:7,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In member function ‘std::basic_istream<_CharT, _Traits>::int_type std::basic_istream<_CharT, _Traits>::get()’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:240:7: error: ‘_M_gcount’ was not declared in this scope
       _M_gcount = 0;
       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In member function ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::get(std::basic_istream<_CharT, _Traits>::char_type&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:274:7: error: ‘_M_gcount’ was not declared in this scope
       _M_gcount = 0;
       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:309:25: error: ‘streamsize’ has not been declared
     get(char_type* __s, streamsize __n, char_type __delim)
                         ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In member function ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::get(std::basic_istream<_CharT, _Traits>::char_type*, int, std::basic_istream<_CharT, _Traits>::char_type)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:311:7: error: ‘_M_gcount’ was not declared in this scope
       _M_gcount = 0;
       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In member function ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::get(std::basic_istream<_CharT, _Traits>::__streambuf_type&, std::basic_istream<_CharT, _Traits>::char_type)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:358:7: error: ‘_M_gcount’ was not declared in this scope
       _M_gcount = 0;
       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:400:29: error: ‘streamsize’ has not been declared
     getline(char_type* __s, streamsize __n, char_type __delim)
                             ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In member function ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::getline(std::basic_istream<_CharT, _Traits>::char_type*, int, std::basic_istream<_CharT, _Traits>::char_type)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:402:7: error: ‘_M_gcount’ was not declared in this scope
       _M_gcount = 0;
       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In member function ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::ignore()’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:462:7: error: ‘_M_gcount’ was not declared in this scope
       _M_gcount = 0;
       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:493:12: error: ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::ignore’ is not a static data member of ‘class std::basic_istream<_CharT, _Traits>’
     ignore(streamsize __n)
            ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:493:12: error: template definition of non-template ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::ignore’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:493:12: error: ‘streamsize’ was not declared in this scope
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:555:12: error: ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::ignore’ is not a static data member of ‘class std::basic_istream<_CharT, _Traits>’
     ignore(streamsize __n, int_type __delim)
            ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:555:12: error: template definition of non-template ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::ignore’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:555:12: error: ‘streamsize’ was not declared in this scope
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:555:37: error: expected primary-expression before ‘__delim’
     ignore(streamsize __n, int_type __delim)
                                     ^~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In member function ‘std::basic_istream<_CharT, _Traits>::int_type std::basic_istream<_CharT, _Traits>::peek()’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:623:7: error: ‘_M_gcount’ was not declared in this scope
       _M_gcount = 0;
       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:650:26: error: ‘streamsize’ has not been declared
     read(char_type* __s, streamsize __n)
                          ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In member function ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::read(std::basic_istream<_CharT, _Traits>::char_type*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:652:7: error: ‘_M_gcount’ was not declared in this scope
       _M_gcount = 0;
       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:677:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In member function ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::putback(std::basic_istream<_CharT, _Traits>::char_type)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:715:7: error: ‘_M_gcount’ was not declared in this scope
       _M_gcount = 0;
       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In member function ‘std::basic_istream<_CharT, _Traits>& std::basic_istream<_CharT, _Traits>::unget()’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:750:7: error: ‘_M_gcount’ was not declared in this scope
       _M_gcount = 0;
       ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc: In function ‘std::basic_istream<_CharT, _Traits>& std::operator>>(std::basic_istream<_CharT, _Traits>&, _CharT2*)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:963:7: error: ‘streamsize’ was not declared in this scope
       streamsize __extracted = 0;
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:971:19: error: expected ‘;’ before ‘__num’
        streamsize __num = __in.width();
                   ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:972:12: error: ‘__num’ was not declared in this scope
        if (__num <= 0)
            ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:973:39: error: the value of ‘streamsize’ is not usable in a constant expression
   __num = __gnu_cxx::__numeric_traits<streamsize>::__max;
                                       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:963:7: note: ‘streamsize’ was not declared ‘constexpr’
       streamsize __extracted = 0;
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:973:49: error: type/value mismatch at argument 1 in template parameter list for ‘template<class _Value> struct __gnu_cxx::__numeric_traits’
   __num = __gnu_cxx::__numeric_traits<streamsize>::__max;
                                                 ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:973:49: note:   expected a type, got ‘streamsize’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:981:15: error: ‘__extracted’ was not declared in this scope
        while (__extracted < __num - 1
               ^~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:981:29: error: ‘__num’ was not declared in this scope
        while (__extracted < __num - 1
                             ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/istream.tcc:1006:12: error: ‘__extracted’ was not declared in this scope
       if (!__extracted)
            ^~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:64:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:239:15: error: ‘ptrdiff_t’ does not name a type
       typedef ptrdiff_t      difference_type;
               ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h: In member function ‘std::vector<_Tp, _Alloc>::iterator std::vector<_Tp, _Alloc>::insert(std::vector<_Tp, _Alloc>::const_iterator, std::vector<_Tp, _Alloc>::size_type, const value_type&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:1054:2: error: ‘difference_type’ was not declared in this scope
  difference_type __offset = __position - cbegin();
  ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:1055:27: error: ‘__offset’ was not declared in this scope
  _M_fill_insert(begin() + __offset, __n, __x);
                           ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h: In member function ‘std::vector<_Tp, _Alloc>::iterator std::vector<_Tp, _Alloc>::insert(std::vector<_Tp, _Alloc>::const_iterator, _InputIterator, _InputIterator)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:1099:4: error: ‘difference_type’ was not declared in this scope
    difference_type __offset = __position - cbegin();
    ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:1100:33: error: ‘__offset’ was not declared in this scope
    _M_insert_dispatch(begin() + __offset,
                                 ^~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:65:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:137:63: error: template argument 3 is invalid
   : public std::iterator<std::random_access_iterator_tag, bool>
                                                               ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:166:13: error: ‘ptrdiff_t’ has not been declared
     _M_incr(ptrdiff_t __i)
             ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘void std::_Bit_iterator_base::_M_incr(int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:168:7: error: ‘difference_type’ was not declared in this scope
       difference_type __n = __i + _M_offset;
       ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:169:15: error: ‘__n’ was not declared in this scope
       _M_p += __n / int(_S_word_bit);
               ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:207:10: error: ‘ptrdiff_t’ does not name a type
   inline ptrdiff_t
          ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:264:16: error: declaration of ‘operator+=’ as non-function
     operator+=(difference_type __i)
                ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:264:13: error: expected ‘;’ at end of member declaration
     operator+=(difference_type __i)
             ^~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:264:32: error: expected ‘)’ before ‘__i’
     operator+=(difference_type __i)
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:271:16: error: declaration of ‘operator-=’ as non-function
     operator-=(difference_type __i)
                ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:271:13: error: expected ‘;’ at end of member declaration
     operator-=(difference_type __i)
             ^~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:271:32: error: expected ‘)’ before ‘__i’
     operator-=(difference_type __i)
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:278:15: error: ‘difference_type’ has not been declared
     operator+(difference_type __i) const
               ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:285:15: error: ‘difference_type’ has not been declared
     operator-(difference_type __i) const
               ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:292:16: error: ‘difference_type’ has not been declared
     operator[](difference_type __i) const
                ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘std::_Bit_iterator::iterator std::_Bit_iterator::operator+(int) const’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:281:20: error: no match for ‘operator+=’ (operand types are ‘std::_Bit_iterator::iterator {aka std::_Bit_iterator}’ and ‘int’)
       return __tmp += __i;
              ~~~~~~^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘std::_Bit_iterator::iterator std::_Bit_iterator::operator-(int) const’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:288:20: error: no match for ‘operator-=’ (operand types are ‘std::_Bit_iterator::iterator {aka std::_Bit_iterator}’ and ‘int’)
       return __tmp -= __i;
              ~~~~~~^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:297:13: error: declaration of ‘operator+’ as non-function
   operator+(ptrdiff_t __n, const _Bit_iterator& __x)
             ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:297:13: error: ‘ptrdiff_t’ was not declared in this scope
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:297:28: error: expected primary-expression before ‘const’
   operator+(ptrdiff_t __n, const _Bit_iterator& __x)
                            ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:354:16: error: declaration of ‘operator+=’ as non-function
     operator+=(difference_type __i)
                ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:354:13: error: expected ‘;’ at end of member declaration
     operator+=(difference_type __i)
             ^~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:354:32: error: expected ‘)’ before ‘__i’
     operator+=(difference_type __i)
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:361:16: error: declaration of ‘operator-=’ as non-function
     operator-=(difference_type __i)
                ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:361:13: error: expected ‘;’ at end of member declaration
     operator-=(difference_type __i)
             ^~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:361:32: error: expected ‘)’ before ‘__i’
     operator-=(difference_type __i)
                                ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:368:15: error: ‘difference_type’ has not been declared
     operator+(difference_type __i) const
               ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:375:15: error: ‘difference_type’ has not been declared
     operator-(difference_type __i) const
               ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:382:16: error: ‘difference_type’ has not been declared
     operator[](difference_type __i) const
                ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘std::_Bit_const_iterator::const_iterator std::_Bit_const_iterator::operator+(int) const’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:371:20: error: no match for ‘operator+=’ (operand types are ‘std::_Bit_const_iterator::const_iterator {aka std::_Bit_const_iterator}’ and ‘int’)
       return __tmp += __i;
              ~~~~~~^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘std::_Bit_const_iterator::const_iterator std::_Bit_const_iterator::operator-(int) const’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:378:20: error: no match for ‘operator-=’ (operand types are ‘std::_Bit_const_iterator::const_iterator {aka std::_Bit_const_iterator}’ and ‘int’)
       return __tmp -= __i;
              ~~~~~~^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:387:13: error: declaration of ‘operator+’ as non-function
   operator+(ptrdiff_t __n, const _Bit_const_iterator& __x)
             ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:387:13: error: ‘ptrdiff_t’ was not declared in this scope
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:387:28: error: expected primary-expression before ‘const’
   operator+(ptrdiff_t __n, const _Bit_const_iterator& __x)
                            ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:554:13: error: ‘ptrdiff_t’ does not name a type
     typedef ptrdiff_t                                    difference_type;
             ^~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:67:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h: In instantiation of ‘class std::reverse_iterator<std::_Bit_iterator>’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:796:5:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:97:11: error: no type named ‘iterator_category’ in ‘struct std::iterator_traits<std::_Bit_iterator>’
     class reverse_iterator
           ^~~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:111:55: error: no type named ‘difference_type’ in ‘struct std::iterator_traits<std::_Bit_iterator>’
       typedef typename __traits_type::difference_type difference_type;
                                                       ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:112:48: error: no type named ‘pointer’ in ‘struct std::iterator_traits<std::_Bit_iterator>’
       typedef typename __traits_type::pointer  pointer;
                                                ^~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:113:50: error: no type named ‘reference’ in ‘struct std::iterator_traits<std::_Bit_iterator>’
       typedef typename __traits_type::reference  reference;
                                                  ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h: In instantiation of ‘class std::reverse_iterator<std::_Bit_const_iterator>’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:800:5:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:97:11: error: no type named ‘iterator_category’ in ‘struct std::iterator_traits<std::_Bit_const_iterator>’
     class reverse_iterator
           ^~~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:111:55: error: no type named ‘difference_type’ in ‘struct std::iterator_traits<std::_Bit_const_iterator>’
       typedef typename __traits_type::difference_type difference_type;
                                                       ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:112:48: error: no type named ‘pointer’ in ‘struct std::iterator_traits<std::_Bit_const_iterator>’
       typedef typename __traits_type::pointer  pointer;
                                                ^~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:113:50: error: no type named ‘reference’ in ‘struct std::iterator_traits<std::_Bit_const_iterator>’
       typedef typename __traits_type::reference  reference;
                                                  ^~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:65:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘std::vector<bool, _Alloc>::size_type std::vector<bool, _Alloc>::max_size() const’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:836:30: error: ‘difference_type’ was not declared in this scope
  __gnu_cxx::__numeric_traits<difference_type>::__max
                              ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:836:45: error: template argument 1 is invalid
  __gnu_cxx::__numeric_traits<difference_type>::__max
                                             ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘std::vector<bool, _Alloc>::iterator std::vector<bool, _Alloc>::insert(std::vector<bool, _Alloc>::const_iterator, const bool&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:956:13: error: ‘difference_type’ does not name a type
       const difference_type __n = __position - begin();
             ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:962:24: error: ‘__n’ was not declared in this scope
       return begin() + __n;
                        ^~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘std::vector<bool, _Alloc>::iterator std::vector<bool, _Alloc>::insert(std::vector<bool, _Alloc>::const_iterator, _InputIterator, _InputIterator)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:972:2: error: ‘difference_type’ was not declared in this scope
  difference_type __offset = __position - cbegin();
  ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:975:19: error: ‘__offset’ was not declared in this scope
  return begin() + __offset;
                   ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘std::vector<bool, _Alloc>::iterator std::vector<bool, _Alloc>::insert(std::vector<bool, _Alloc>::const_iterator, std::vector<bool, _Alloc>::size_type, const bool&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:992:7: error: ‘difference_type’ was not declared in this scope
       difference_type __offset = __position - cbegin();
       ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:994:24: error: ‘__offset’ was not declared in this scope
       return begin() + __offset;
                        ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘void std::vector<bool, _Alloc>::resize(std::vector<bool, _Alloc>::size_type, bool)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:1032:61: error: there are no arguments to ‘difference_type’ that depend on a template parameter, so a declaration of ‘difference_type’ must be available [-fpermissive]
         _M_erase_at_end(begin() + difference_type(__new_size));
                                                             ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h: In member function ‘void std::vector<bool, _Alloc>::_M_initialize(std::vector<bool, _Alloc>::size_type)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_bvector.h:1084:77: error: there are no arguments to ‘difference_type’ that depend on a template parameter, so a declaration of ‘difference_type’ must be available [-fpermissive]
       this->_M_impl._M_finish = this->_M_impl._M_start + difference_type(__n);
                                                                             ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc: In member function ‘void std::vector<bool, _Alloc>::_M_fill_insert(std::vector<bool, _Alloc>::iterator, std::vector<bool, _Alloc>::size_type, bool)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:720:54: error: there are no arguments to ‘difference_type’ that depend on a template parameter, so a declaration of ‘difference_type’ must be available [-fpermissive]
         this->_M_impl._M_finish + difference_type(__n));
                                                      ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:721:58: error: there are no arguments to ‘difference_type’ that depend on a template parameter, so a declaration of ‘difference_type’ must be available [-fpermissive]
    std::fill(__position, __position + difference_type(__n), __x);
                                                          ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:722:50: error: there are no arguments to ‘difference_type’ that depend on a template parameter, so a declaration of ‘difference_type’ must be available [-fpermissive]
    this->_M_impl._M_finish += difference_type(__n);
                                                  ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:731:44: error: there are no arguments to ‘difference_type’ that depend on a template parameter, so a declaration of ‘difference_type’ must be available [-fpermissive]
    std::fill(__i, __i + difference_type(__n), __x);
                                            ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:733:37: error: there are no arguments to ‘difference_type’ that depend on a template parameter, so a declaration of ‘difference_type’ must be available [-fpermissive]
            __i + difference_type(__n));
                                     ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc: In member function ‘void std::vector<bool, _Alloc>::_M_insert_range(std::vector<bool, _Alloc>::iterator, _ForwardIterator, _ForwardIterator, std::forward_iterator_tag)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:754:29: error: there are no arguments to ‘difference_type’ that depend on a template parameter, so a declaration of ‘difference_type’ must be available [-fpermissive]
        + difference_type(__n));
                             ^
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:756:49: error: there are no arguments to ‘difference_type’ that depend on a template parameter, so a declaration of ‘difference_type’ must be available [-fpermissive]
   this->_M_impl._M_finish += difference_type(__n);
                                                 ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:10:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/sstream: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/sstream:210:15: error: ‘streamsize’ does not name a type
       virtual streamsize
               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/sstream:243:30: error: ‘streamsize’ has not been declared
       setbuf(char_type* __s, streamsize __n)
                              ^~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/fstream:42:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:11,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/basic_file.h:107:7: error: ‘streamsize’ does not name a type
       streamsize
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/basic_file.h:110:7: error: ‘streamsize’ does not name a type
       streamsize
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/basic_file.h:114:7: error: ‘streamsize’ does not name a type
       streamsize
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/basic_file.h:123:7: error: ‘streamsize’ does not name a type
       streamsize
       ^~~~~~~~~~
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:11:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/fstream:175:7: error: ‘streamsize’ does not name a type
       streamsize  _M_ext_buf_size;
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/fstream:334:15: error: ‘streamsize’ does not name a type
       virtual streamsize
               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/fstream:361:42: error: ‘streamsize’ has not been declared
       _M_convert_to_external(char_type*, streamsize);
                                          ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/fstream:376:30: error: ‘streamsize’ has not been declared
       setbuf(char_type* __s, streamsize __n);
                              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/fstream:399:15: error: ‘streamsize’ does not name a type
       virtual streamsize
               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/fstream:402:15: error: ‘streamsize’ does not name a type
       virtual streamsize
               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/fstream:422:21: error: ‘streamsize’ has not been declared
       _M_set_buffer(streamsize __off)
                     ^~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/fstream:1081:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:11,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: In member function ‘void std::basic_filebuf<_CharT, _Traits>::_M_destroy_internal_buffer()’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:73:7: error: ‘_M_ext_buf_size’ was not declared in this scope
       _M_ext_buf_size = 0;
       ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: In constructor ‘std::basic_filebuf<_CharT, _Traits>::basic_filebuf()’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:85:35: error: class ‘std::basic_filebuf<_CharT, _Traits>’ does not have any field named ‘_M_ext_buf_size’
     _M_codecvt(0), _M_ext_buf(0), _M_ext_buf_size(0), _M_ext_next(0),
                                   ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: In constructor ‘std::basic_filebuf<_CharT, _Traits>::basic_filebuf(std::basic_filebuf<_CharT, _Traits>&&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:113:5: error: class ‘std::basic_filebuf<_CharT, _Traits>’ does not have any field named ‘_M_ext_buf_size’
     _M_ext_buf_size(std::__exchange(__rhs._M_ext_buf_size, 0)),
     ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: In member function ‘std::basic_filebuf<_CharT, _Traits>& std::basic_filebuf<_CharT, _Traits>::operator=(std::basic_filebuf<_CharT, _Traits>&&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:137:7: error: ‘_M_ext_buf_size’ was not declared in this scope
       _M_ext_buf_size = std::__exchange(__rhs._M_ext_buf_size, 0);
       ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: In member function ‘void std::basic_filebuf<_CharT, _Traits>::swap(std::basic_filebuf<_CharT, _Traits>&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:165:17: error: ‘_M_ext_buf_size’ was not declared in this scope
       std::swap(_M_ext_buf_size, __rhs._M_ext_buf_size);
                 ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:261:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: In member function ‘virtual std::basic_filebuf<_CharT, _Traits>::int_type std::basic_filebuf<_CharT, _Traits>::underflow()’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:316:4: error: ‘streamsize’ was not declared in this scope
    streamsize __ilen = 0;
    ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:320:8: error: ‘__ilen’ was not declared in this scope
        __ilen = _M_file.xsgetn(reinterpret_cast<char*>(this->eback()),
        ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:320:25: error: ‘std::basic_filebuf<_CharT, _Traits>::__file_type {aka class std::__basic_file<char>}’ has no member named ‘xsgetn’
        __ilen = _M_file.xsgetn(reinterpret_cast<char*>(this->eback()),
                         ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:330:19: error: expected ‘;’ before ‘__blen’
        streamsize __blen; // Minimum buffer size.
                   ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:331:19: error: expected ‘;’ before ‘__rlen’
        streamsize __rlen; // Number of chars to read.
                   ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:333:3: error: ‘__blen’ was not declared in this scope
   __blen = __rlen = __buflen * __enc;
   ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:333:12: error: ‘__rlen’ was not declared in this scope
   __blen = __rlen = __buflen * __enc;
            ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:336:5: error: ‘__blen’ was not declared in this scope
     __blen = __buflen + _M_codecvt->max_length() - 1;
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:337:5: error: ‘__rlen’ was not declared in this scope
     __rlen = __buflen;
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:339:14: error: ‘streamsize’ does not name a type
        const streamsize __remainder = _M_ext_end - _M_ext_next;
              ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:340:8: error: ‘__rlen’ was not declared in this scope
        __rlen = __rlen > __remainder ? __rlen - __remainder : 0;
        ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:340:26: error: ‘__remainder’ was not declared in this scope
        __rlen = __rlen > __remainder ? __rlen - __remainder : 0;
                          ^~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:349:12: error: ‘_M_ext_buf_size’ was not declared in this scope
        if (_M_ext_buf_size < __blen)
            ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:349:30: error: ‘__blen’ was not declared in this scope
        if (_M_ext_buf_size < __blen)
                              ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:373:48: error: ‘_M_ext_buf_size’ was not declared in this scope
         if (_M_ext_end - _M_ext_buf + __rlen > _M_ext_buf_size)
                                                ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:379:20: error: expected ‘;’ before ‘__elen’
         streamsize __elen = _M_file.xsgetn(_M_ext_end, __rlen);
                    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:380:13: error: ‘__elen’ was not declared in this scope
         if (__elen == 0)
             ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:384:23: error: ‘__elen’ was not declared in this scope
         _M_ext_end += __elen;
                       ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:396:9: error: ‘__ilen’ was not declared in this scope
         __ilen = std::min(__avail, __buflen);
         ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:403:7: error: ‘__ilen’ was not declared in this scope
       __ilen = __iend - this->eback();
       ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:413:15: error: ‘__ilen’ was not declared in this scope
        while (__ilen == 0 && !__got_eof);
               ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:416:8: error: ‘__ilen’ was not declared in this scope
    if (__ilen > 0)
        ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:572:44: error: ‘streamsize’ has not been declared
     _M_convert_to_external(_CharT* __ibuf, streamsize __ilen)
                                            ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: In member function ‘bool std::basic_filebuf<_CharT, _Traits>::_M_convert_to_external(_CharT*, int)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:575:7: error: ‘streamsize’ was not declared in this scope
       streamsize __elen;
       ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:576:18: error: expected ‘;’ before ‘__plen’
       streamsize __plen;
                  ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:579:4: error: ‘__elen’ was not declared in this scope
    __elen = _M_file.xsputn(reinterpret_cast<char*>(__ibuf), __ilen);
    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:579:21: error: ‘std::basic_filebuf<_CharT, _Traits>::__file_type {aka class std::__basic_file<char>}’ has no member named ‘xsputn’
    __elen = _M_file.xsputn(reinterpret_cast<char*>(__ibuf), __ilen);
                     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:580:4: error: ‘__plen’ was not declared in this scope
    __plen = __ilen;
    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:586:15: error: expected ‘;’ before ‘__blen’
    streamsize __blen = __ilen * _M_codecvt->max_length();
               ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:587:54: error: ‘__blen’ was not declared in this scope
    char* __buf = static_cast<char*>(__builtin_alloca(__blen));
                                                      ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:607:4: error: ‘__elen’ was not declared in this scope
    __elen = _M_file.xsputn(__buf, __blen);
    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:607:21: error: ‘std::basic_filebuf<_CharT, _Traits>::__file_type {aka class std::__basic_file<char>}’ has no member named ‘xsputn’
    __elen = _M_file.xsputn(__buf, __blen);
                     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:608:4: error: ‘__plen’ was not declared in this scope
    __plen = __blen;
    ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:614:19: error: expected ‘;’ before ‘__rlen’
        streamsize __rlen = this->pptr() - __iend;
                   ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:616:21: error: ‘__rlen’ was not declared in this scope
         __iresume + __rlen, __iend, __buf,
                     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:621:22: error: ‘std::basic_filebuf<_CharT, _Traits>::__file_type {aka class std::__basic_file<char>}’ has no member named ‘xsputn’
     __elen = _M_file.xsputn(__buf, __rlen);
                      ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:629:14: error: ‘__elen’ was not declared in this scope
       return __elen == __plen;
              ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:629:24: error: ‘__plen’ was not declared in this scope
       return __elen == __plen;
                        ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: At global scope:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:633:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:721:5: error: ‘streamsize’ does not name a type
     streamsize
     ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:771:28: error: ‘streamsize’ has not been declared
     setbuf(char_type* __s, streamsize __n)
                            ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: In member function ‘bool std::basic_filebuf<_CharT, _Traits>::_M_terminate_output()’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:940:4: error: ‘streamsize’ was not declared in this scope
    streamsize __ilen = 0;
    ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:952:5: error: ‘__ilen’ was not declared in this scope
     __ilen = __next - __buf;
     ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:955:15: error: ‘streamsize’ does not name a type
         const streamsize __elen = _M_file.xsputn(__buf, __ilen);
               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:956:13: error: ‘__elen’ was not declared in this scope
         if (__elen != __ilen)
             ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:961:43: error: ‘__ilen’ was not declared in this scope
    while (__r == codecvt_base::partial && __ilen > 0 && __testvalid);
                                           ^~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc: In member function ‘virtual void std::basic_filebuf<_CharT, _Traits>::imbue(const std::locale&)’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:1029:15: error: ‘streamsize’ does not name a type
         const streamsize __remainder = _M_ext_end - _M_ext_next;
               ^~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:1030:13: error: ‘__remainder’ was not declared in this scope
         if (__remainder)
             ^~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/fstream.tcc:1034:35: error: ‘__remainder’ was not declared in this scope
         _M_ext_end = _M_ext_buf + __remainder;
                                   ^~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:40:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/alloc_traits.h: In instantiation of ‘struct __gnu_cxx::__alloc_traits<std::allocator<Task> >’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:75:28:   required from ‘struct std::_Vector_base<Task, std::allocator<Task> >’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:214:11:   required from ‘class std::vector<Task>’
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortCategory.cpp:22:17:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/alloc_traits.h:61:53: error: no type named ‘size_type’ in ‘struct std::allocator_traits<std::allocator<Task> >’
     typedef typename _Base_type::size_type          size_type;
                                                     ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/alloc_traits.h:62:53: error: no type named ‘difference_type’ in ‘struct std::allocator_traits<std::allocator<Task> >’
     typedef typename _Base_type::difference_type    difference_type;
                                                     ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/alloc_traits.h:70:23: error: no members matching ‘__gnu_cxx::__alloc_traits<std::allocator<Task> >::_Base_type {aka std::allocator_traits<std::allocator<Task> >}::max_size’ in ‘__gnu_cxx::__alloc_traits<std::allocator<Task> >::_Base_type {aka struct std::allocator_traits<std::allocator<Task> >}’
     using _Base_type::max_size;
                       ^~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:67:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h: In instantiation of ‘class __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortDate.cpp:34:39:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:768:56: error: no type named ‘difference_type’ in ‘struct std::iterator_traits<Task*>’
       typedef typename __traits_type::difference_type  difference_type;
                                                        ^~~~~~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h: In instantiation of ‘class __gnu_cxx::__normal_iterator<const Task*, std::vector<Task> >’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortDate.cpp:34:49:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:768:56: error: no type named ‘difference_type’ in ‘struct std::iterator_traits<const Task*>’
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:2:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:8:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp: At global scope:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:11:7: error: expected nested-name-specifier before ‘namespace’
 using namespace std;
       ^~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:14:12: error: cannot define member function ‘Task::Task’ within ‘Planner’
 Task::Task(){
            ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:25:60: error: cannot define member function ‘Task::Task’ within ‘Planner’
 Task::Task(string category, string name, string description){
                                                            ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:31:35: error: cannot define member function ‘Task::setDescription’ within ‘Planner’
 void Task::setDescription(string d) {
                                   ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:34:28: error: cannot define member function ‘Task::setName’ within ‘Planner’
 void Task::setName(string n){
                            ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:37:24: error: cannot define member function ‘Task::setDay’ within ‘Planner’
 void Task::setDay(int d){
                        ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:40:32: error: cannot define member function ‘Task::setCategory’ within ‘Planner’
 void Task::setCategory(string c) {
                                ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:43:26: error: cannot define member function ‘Task::setMonth’ within ‘Planner’
 void Task::setMonth(int m){
                          ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:46:25: error: cannot define member function ‘Task::setYear’ within ‘Planner’
 void Task::setYear(int y){
                         ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:49:29: error: cannot define member function ‘Task::setPriority’ within ‘Planner’
 void Task::setPriority(int p){
                             ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:52:29: error: cannot define member function ‘Task::getDescription’ within ‘Planner’
 string Task::getDescription(){
                             ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:55:22: error: cannot define member function ‘Task::getName’ within ‘Planner’
 string Task::getName(){
                      ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:58:26: error: cannot define member function ‘Task::getCategory’ within ‘Planner’
 string Task::getCategory(){
                          ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:61:18: error: cannot define member function ‘Task::getDay’ within ‘Planner’
 int Task::getDay(){
                  ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:64:20: error: cannot define member function ‘Task::getMonth’ within ‘Planner’
 int Task::getMonth(){
                    ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:67:19: error: cannot define member function ‘Task::getYear’ within ‘Planner’
 int Task::getYear(){
                   ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:70:23: error: cannot define member function ‘Task::getPriority’ within ‘Planner’
 int Task::getPriority(){
                       ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:76:21: error: cannot define member function ‘Task::EditTask’ within ‘Planner’
 void Task::EditTask(){
                     ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:8:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:9:7: error: expected nested-name-specifier before ‘namespace’
 using namespace std;
       ^~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:13:73: error: cannot define member function ‘SchoolTask::SchoolTask’ within ‘Planner’
  SchoolTask::SchoolTask(string category, string name, string description){
                                                                         ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:19:34: error: cannot define member function ‘SchoolTask::Add_SchoolTask’ within ‘Planner’
  void SchoolTask::Add_SchoolTask(){
                                  ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:8:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:96:25: error: cannot define member function ‘SchoolTask::SchoolTask’ within ‘Planner’
  SchoolTask::SchoolTask(){}
                         ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:9:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:6:7: error: expected nested-name-specifier before ‘namespace’
 using namespace std;
       ^~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:9:76: error: cannot define member function ‘PersonalTask::PersonalTask’ within ‘Planner’
 PersonalTask::PersonalTask(string category, string name, string description){
                                                                            ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:14:38: error: cannot define member function ‘PersonalTask::Add_PersonalTask’ within ‘Planner’
  void PersonalTask::Add_PersonalTask(){
                                      ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:70:29: error: cannot define member function ‘PersonalTask::PersonalTask’ within ‘Planner’
  PersonalTask::PersonalTask(){}
                             ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:16:1: error: expected ‘}’ at end of input
 }
 ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp: In member function ‘void Planner::Filter_Tasks()’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:87:37: error: ‘DisplayMenu’ was not declared in this scope
                         DisplayMenu();
                                     ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp: In member function ‘void Planner::Sort_Tasks()’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:128:37: error: ‘DisplayMenu’ was not declared in this scope
                         DisplayMenu();
                                     ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp: In member function ‘void Planner::Display_Planner()’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:167:25: error: expected ‘}’ before ‘else’
                         else
                         ^~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp: In member function ‘int Planner::main()’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:14:10: error: ‘class Planner’ has no member named ‘DisplayMenu’; did you mean ‘Display_Planner’?
  planner.DisplayMenu();
          ^~~~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp: At global scope:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:16:1: error: expected unqualified-id at end of input
 }
 ^
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:67:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h: In instantiation of ‘class __gnu_cxx::__normal_iterator<char*, std::basic_string<char> >’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5027:32:   required from ‘std::basic_string<_CharT, _Traits, _Alloc> std::operator+(std::basic_string<_CharT, _Traits, _Alloc>&&, std::basic_string<_CharT, _Traits, _Alloc>&&) [with _CharT = char; _Traits = std::char_traits<char>; _Alloc = std::allocator<char>]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/system_error:343:50:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:768:56: error: no type named ‘difference_type’ in ‘struct std::iterator_traits<char*>’
       typedef typename __traits_type::difference_type  difference_type;
                                                        ^~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc: In instantiation of ‘std::vector<_Tp, _Alloc>::iterator std::vector<_Tp, _Alloc>::insert(std::vector<_Tp, _Alloc>::const_iterator, const value_type&) [with _Tp = Task; _Alloc = std::allocator<Task>; std::vector<_Tp, _Alloc>::iterator = __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >; typename std::_Vector_base<_Tp, _Alloc>::pointer = Task*; std::vector<_Tp, _Alloc>::const_iterator = __gnu_cxx::__normal_iterator<const Task*, std::vector<Task> >; typename __gnu_cxx::__alloc_traits<typename std::_Vector_base<_Tp, _Alloc>::_Tp_alloc_type>::const_pointer = const Task*; std::vector<_Tp, _Alloc>::value_type = Task]’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortDate.cpp:34:49:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: error: no match for ‘operator+’ (operand types are ‘std::vector<Task>::iterator {aka __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >}’ and ‘long int’)
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:67:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:341:5: note: candidate: template<class _Iterator> std::reverse_iterator<_Iterator> std::operator+(typename std::reverse_iterator<_Iterator>::difference_type, const std::reverse_iterator<_Iterator>&)
     operator+(typename reverse_iterator<_Iterator>::difference_type __n,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:341:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   mismatched types ‘const std::reverse_iterator<_Iterator>’ and ‘long int’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:67:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:1200:5: note: candidate: template<class _Iterator> std::move_iterator<_IteratorL> std::operator+(typename std::move_iterator<_IteratorL>::difference_type, const std::move_iterator<_IteratorL>&)
     operator+(typename move_iterator<_Iterator>::difference_type __n,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:1200:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   mismatched types ‘const std::move_iterator<_IteratorL>’ and ‘long int’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:4944:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(const std::basic_string<_CharT, _Traits, _Alloc>&, const std::basic_string<_CharT, _Traits, _Alloc>&)
     operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:4944:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   ‘std::vector<Task>::iterator {aka __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >}’ is not derived from ‘const std::basic_string<_CharT, _Traits, _Alloc>’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:53:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.tcc:1147:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(const _CharT*, const std::basic_string<_CharT, _Traits, _Alloc>&)
     operator+(const _CharT* __lhs,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.tcc:1147:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   mismatched types ‘const _CharT*’ and ‘__gnu_cxx::__normal_iterator<Task*, std::vector<Task> >’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:53:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.tcc:1163:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(_CharT, const std::basic_string<_CharT, _Traits, _Alloc>&)
     operator+(_CharT __lhs, const basic_string<_CharT, _Traits, _Alloc>& __rhs)
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.tcc:1163:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   mismatched types ‘const std::basic_string<_CharT, _Traits, _Alloc>’ and ‘long int’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:4981:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(const std::basic_string<_CharT, _Traits, _Alloc>&, const _CharT*)
     operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:4981:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   ‘std::vector<Task>::iterator {aka __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >}’ is not derived from ‘const std::basic_string<_CharT, _Traits, _Alloc>’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:4997:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(const std::basic_string<_CharT, _Traits, _Alloc>&, _CharT)
     operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs, _CharT __rhs)
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:4997:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   ‘std::vector<Task>::iterator {aka __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >}’ is not derived from ‘const std::basic_string<_CharT, _Traits, _Alloc>’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5009:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(std::basic_string<_CharT, _Traits, _Alloc>&&, const std::basic_string<_CharT, _Traits, _Alloc>&)
     operator+(basic_string<_CharT, _Traits, _Alloc>&& __lhs,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5009:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   ‘std::vector<Task>::iterator {aka __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >}’ is not derived from ‘std::basic_string<_CharT, _Traits, _Alloc>’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5015:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(const std::basic_string<_CharT, _Traits, _Alloc>&, std::basic_string<_CharT, _Traits, _Alloc>&&)
     operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5015:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   ‘std::vector<Task>::iterator {aka __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >}’ is not derived from ‘const std::basic_string<_CharT, _Traits, _Alloc>’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5021:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(std::basic_string<_CharT, _Traits, _Alloc>&&, std::basic_string<_CharT, _Traits, _Alloc>&&)
     operator+(basic_string<_CharT, _Traits, _Alloc>&& __lhs,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5021:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   ‘std::vector<Task>::iterator {aka __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >}’ is not derived from ‘std::basic_string<_CharT, _Traits, _Alloc>’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5033:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(const _CharT*, std::basic_string<_CharT, _Traits, _Alloc>&&)
     operator+(const _CharT* __lhs,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5033:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   mismatched types ‘const _CharT*’ and ‘__gnu_cxx::__normal_iterator<Task*, std::vector<Task> >’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5039:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(_CharT, std::basic_string<_CharT, _Traits, _Alloc>&&)
     operator+(_CharT __lhs,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5039:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   mismatched types ‘std::basic_string<_CharT, _Traits, _Alloc>’ and ‘long int’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5045:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(std::basic_string<_CharT, _Traits, _Alloc>&&, const _CharT*)
     operator+(basic_string<_CharT, _Traits, _Alloc>&& __lhs,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5045:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   ‘std::vector<Task>::iterator {aka __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >}’ is not derived from ‘std::basic_string<_CharT, _Traits, _Alloc>’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:52:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5051:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_string<_CharT, _Traits, _Alloc> std::operator+(std::basic_string<_CharT, _Traits, _Alloc>&&, _CharT)
     operator+(basic_string<_CharT, _Traits, _Alloc>&& __lhs,
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/basic_string.h:5051:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   ‘std::vector<Task>::iterator {aka __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >}’ is not derived from ‘std::basic_string<_CharT, _Traits, _Alloc>’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:67:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:966:5: note: candidate: template<class _Iterator, class _Container> __gnu_cxx::__normal_iterator<_Iterator, _Container> __gnu_cxx::operator+(typename __gnu_cxx::__normal_iterator<_Iterator, _Container>::difference_type, const __gnu_cxx::__normal_iterator<_Iterator, _Container>&)
     operator+(typename __normal_iterator<_Iterator, _Container>::difference_type
     ^~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:966:5: note:   template argument deduction/substitution failed:
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:69:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:124:31: note:   mismatched types ‘const __gnu_cxx::__normal_iterator<_Iterator, _Container>’ and ‘long int’
    const auto __pos = begin() + (__position - cbegin());
                       ~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/x86_64-redhat-linux/bits/c++allocator.h:33:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/allocator.h:46,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:41,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h: In instantiation of ‘void __gnu_cxx::new_allocator<_Tp>::construct(_Up*, _Args&& ...) [with _Up = Task; _Args = {const Task&}; _Tp = Task]’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/alloc_traits.h:475:4:   required from ‘static void std::allocator_traits<std::allocator<_CharT> >::construct(std::allocator_traits<std::allocator<_CharT> >::allocator_type&, _Up*, _Args&& ...) [with _Up = Task; _Args = {const Task&}; _Tp = Task; std::allocator_traits<std::allocator<_CharT> >::allocator_type = std::allocator<Task>]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:918:30:   required from ‘void std::vector<_Tp, _Alloc>::push_back(const value_type&) [with _Tp = Task; _Alloc = std::allocator<Task>; std::vector<_Tp, _Alloc>::value_type = Task]’
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortCategory.cpp:29:33:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/ext/new_allocator.h:120:4: error: no matching function for call to ‘operator new(sizetype, void*)’
  { ::new((void *)__p) _Up(std::forward<_Args>(__args)...); }
    ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
<built-in>: note: candidate: void* operator new(long unsigned int)
<built-in>: note:   candidate expects 1 argument, 2 provided
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:67:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h: In instantiation of ‘class std::move_iterator<Task*>’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_uninitialized.h:303:3:   required from ‘_ForwardIterator std::__uninitialized_move_if_noexcept_a(_InputIterator, _InputIterator, _ForwardIterator, _Allocator&) [with _InputIterator = Task*; _ForwardIterator = Task*; _Allocator = std::allocator<Task>]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:422:8:   required from ‘void std::vector<_Tp, _Alloc>::_M_emplace_back_aux(_Args&& ...) [with _Args = {const Task&}; _Tp = Task; _Alloc = std::allocator<Task>]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:924:4:   required from ‘void std::vector<_Tp, _Alloc>::push_back(const value_type&) [with _Tp = Task; _Alloc = std::allocator<Task>; std::vector<_Tp, _Alloc>::value_type = Task]’
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortCategory.cpp:29:33:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_iterator.h:1019:55: error: no type named ‘difference_type’ in ‘struct std::iterator_traits<Task*>’
       typedef typename __traits_type::difference_type difference_type;
                                                       ^~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:62:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_construct.h: In instantiation of ‘void std::_Destroy(_ForwardIterator, _ForwardIterator) [with _ForwardIterator = __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >]’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_construct.h:151:15:   required from ‘void std::_Destroy(_ForwardIterator, _ForwardIterator, std::allocator<_T2>&) [with _ForwardIterator = __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >; _Tp = Task]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:206:21:   required from ‘std::vector<_Tp, _Alloc>& std::vector<_Tp, _Alloc>::operator=(const std::vector<_Tp, _Alloc>&) [with _Tp = Task; _Alloc = std::allocator<Task>]’
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortCategory.cpp:53:11:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_construct.h:125:24: error: no type named ‘value_type’ in ‘struct std::iterator_traits<__gnu_cxx::__normal_iterator<Task*, std::vector<Task> > >’
                        _Value_type;
                        ^~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_construct.h:127:11: error: no type named ‘value_type’ in ‘struct std::iterator_traits<__gnu_cxx::__normal_iterator<Task*, std::vector<Task> > >’
       std::_Destroy_aux<__has_trivial_destructor(_Value_type)>::
       ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  __destroy(__first, __last);
  ~~~~~~~~~^~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:64:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h: In instantiation of ‘std::vector<_Tp, _Alloc>::size_type std::vector<_Tp, _Alloc>::max_size() const [with _Tp = Task; _Alloc = std::allocator<Task>; std::vector<_Tp, _Alloc>::size_type = long unsigned int]’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:1422:14:   required from ‘std::vector<_Tp, _Alloc>::size_type std::vector<_Tp, _Alloc>::_M_check_len(std::vector<_Tp, _Alloc>::size_type, const char*) const [with _Tp = Task; _Alloc = std::allocator<Task>; std::vector<_Tp, _Alloc>::size_type = long unsigned int]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:411:16:   required from ‘void std::vector<_Tp, _Alloc>::_M_emplace_back_aux(_Args&& ...) [with _Args = {const Task&}; _Tp = Task; _Alloc = std::allocator<Task>]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:924:4:   required from ‘void std::vector<_Tp, _Alloc>::push_back(const value_type&) [with _Tp = Task; _Alloc = std::allocator<Task>; std::vector<_Tp, _Alloc>::value_type = Task]’
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortCategory.cpp:29:33:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:661:39: error: ‘max_size’ is not a member of ‘std::vector<Task>::_Alloc_traits {aka __gnu_cxx::__alloc_traits<std::allocator<Task> >}’
       { return _Alloc_traits::max_size(_M_get_Tp_allocator()); }
                ~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:63:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_uninitialized.h: In instantiation of ‘_ForwardIterator std::uninitialized_copy(_InputIterator, _InputIterator, _ForwardIterator) [with _InputIterator = __gnu_cxx::__normal_iterator<const Task*, std::vector<Task> >; _ForwardIterator = Task*]’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_uninitialized.h:281:37:   required from ‘_ForwardIterator std::__uninitialized_copy_a(_InputIterator, _InputIterator, _ForwardIterator, std::allocator<_Tp>&) [with _InputIterator = __gnu_cxx::__normal_iterator<const Task*, std::vector<Task> >; _ForwardIterator = Task*; _Tp = Task]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_vector.h:1225:35:   required from ‘std::vector<_Tp, _Alloc>::pointer std::vector<_Tp, _Alloc>::_M_allocate_and_copy(std::vector<_Tp, _Alloc>::size_type, _ForwardIterator, _ForwardIterator) [with _ForwardIterator = __gnu_cxx::__normal_iterator<const Task*, std::vector<Task> >; _Tp = Task; _Alloc = std::allocator<Task>; std::vector<_Tp, _Alloc>::pointer = Task*; std::vector<_Tp, _Alloc>::size_type = long unsigned int]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:195:19:   required from ‘std::vector<_Tp, _Alloc>& std::vector<_Tp, _Alloc>::operator=(const std::vector<_Tp, _Alloc>&) [with _Tp = Task; _Alloc = std::allocator<Task>]’
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortCategory.cpp:53:11:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_uninitialized.h:111:2: error: no type named ‘value_type’ in ‘struct std::iterator_traits<__gnu_cxx::__normal_iterator<const Task*, std::vector<Task> > >’
  _ValueType1;
  ^~~~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_uninitialized.h:118:67: error: no type named ‘reference’ in ‘struct std::iterator_traits<__gnu_cxx::__normal_iterator<const Task*, std::vector<Task> > >’
       typedef typename iterator_traits<_InputIterator>::reference _RefType1;
                                                                   ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_uninitialized.h:120:70: error: no type named ‘reference’ in ‘struct std::iterator_traits<__gnu_cxx::__normal_iterator<const Task*, std::vector<Task> > >’
       const bool __assignable = is_assignable<_RefType2, _RefType1>::value;
                                                                      ^~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_uninitialized.h:124:12: error: no type named ‘value_type’ in ‘struct std::iterator_traits<__gnu_cxx::__normal_iterator<const Task*, std::vector<Task> > >’
            && __is_trivial(_ValueType2)
             
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/char_traits.h:39:0,
                 from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/string:40,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.hpp:5,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:4,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h: In instantiation of ‘static _OI std::__copy_move<false, false, std::random_access_iterator_tag>::__copy_m(_II, _II, _OI) [with _II = const Task*; _OI = Task*]’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:386:44:   required from ‘_OI std::__copy_move_a(_II, _II, _OI) [with bool _IsMove = false; _II = const Task*; _OI = Task*]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:422:45:   required from ‘_OI std::__copy_move_a2(_II, _II, _OI) [with bool _IsMove = false; _II = __gnu_cxx::__normal_iterator<const Task*, std::vector<Task> >; _OI = __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:455:8:   required from ‘_OI std::copy(_II, _II, _OI) [with _II = __gnu_cxx::__normal_iterator<const Task*, std::vector<Task> >; _OI = __gnu_cxx::__normal_iterator<Task*, std::vector<Task> >]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:206:31:   required from ‘std::vector<_Tp, _Alloc>& std::vector<_Tp, _Alloc>::operator=(const std::vector<_Tp, _Alloc>&) [with _Tp = Task; _Alloc = std::allocator<Task>]’
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortCategory.cpp:53:11:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:321:59: error: no type named ‘difference_type’ in ‘struct std::iterator_traits<const Task*>’
    typedef typename iterator_traits<_II>::difference_type _Distance;
                                                           ^~~~~~~~~
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h: In instantiation of ‘static _OI std::__copy_move<false, false, std::random_access_iterator_tag>::__copy_m(_II, _II, _OI) [with _II = Task*; _OI = Task*]’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:386:44:   required from ‘_OI std::__copy_move_a(_II, _II, _OI) [with bool _IsMove = false; _II = Task*; _OI = Task*]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:422:45:   required from ‘_OI std::__copy_move_a2(_II, _II, _OI) [with bool _IsMove = false; _II = Task*; _OI = Task*]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:455:8:   required from ‘_OI std::copy(_II, _II, _OI) [with _II = Task*; _OI = Task*]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:211:17:   required from ‘std::vector<_Tp, _Alloc>& std::vector<_Tp, _Alloc>::operator=(const std::vector<_Tp, _Alloc>&) [with _Tp = Task; _Alloc = std::allocator<Task>]’
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortCategory.cpp:53:11:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_algobase.h:321:59: error: no type named ‘difference_type’ in ‘struct std::iterator_traits<Task*>’
In file included from /opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/vector:62:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:9,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_construct.h: In instantiation of ‘void std::_Construct(_T1*, _Args&& ...) [with _T1 = Task; _Args = {Task&}]’:
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_uninitialized.h:75:18:   required from ‘static _ForwardIterator std::__uninitialized_copy<_TrivialValueTypes>::__uninit_copy(_InputIterator, _InputIterator, _ForwardIterator) [with _InputIterator = Task*; _ForwardIterator = Task*; bool _TrivialValueTypes = false]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_uninitialized.h:126:15:   required from ‘_ForwardIterator std::uninitialized_copy(_InputIterator, _InputIterator, _ForwardIterator) [with _InputIterator = Task*; _ForwardIterator = Task*]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_uninitialized.h:281:37:   required from ‘_ForwardIterator std::__uninitialized_copy_a(_InputIterator, _InputIterator, _ForwardIterator, std::allocator<_Tp>&) [with _InputIterator = Task*; _ForwardIterator = Task*; _Tp = Task]’
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/vector.tcc:213:35:   required from ‘std::vector<_Tp, _Alloc>& std::vector<_Tp, _Alloc>::operator=(const std::vector<_Tp, _Alloc>&) [with _Tp = Task; _Alloc = std::allocator<Task>]’
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/SortCategory.cpp:53:11:   required from here
/opt/rh/devtoolset-6/root/usr/include/c++/6.3.1/bits/stl_construct.h:75:7: error: no matching function for call to ‘operator new(sizetype, void*)’
     { ::new(static_cast<void*>(__p)) _T1(std::forward<_Args>(__args)...); }
       ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
<built-in>: note: candidate: void* operator new(long unsigned int)
<built-in>: note:   candidate expects 1 argument, 2 provided
CMakeFiles/test.dir/build.make:82: recipe for target 'CMakeFiles/test.dir/main.cpp.o' failed
make[2]: *** [CMakeFiles/test.dir/main.cpp.o] Error 1
CMakeFiles/Makefile2:157: recipe for target 'CMakeFiles/test.dir/all' failed
make[1]: *** [CMakeFiles/test.dir/all] Error 2
Makefile:149: recipe for target 'all' failed
make: *** [all] Error 2
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim Planner.cpp 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ git branch
  IMP2
  IMPORTANT
  aalsu013/SPfixes
* aalsu013/edittask
  aalsu013/school_andpersonal
  aalsu013/taskStuff
  aalsu013/task_interface
  aalsu013/updatedSP
  master
  new
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim Planner.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:2:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:8:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:11:7: error: expected nested-name-specifier before ‘namespace’
 using namespace std;
       ^~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:14:12: error: cannot define member function ‘Task::Task’ within ‘Planner’
 Task::Task(){
            ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:25:60: error: cannot define member function ‘Task::Task’ within ‘Planner’
 Task::Task(string category, string name, string description){
                                                            ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:31:35: error: cannot define member function ‘Task::setDescription’ within ‘Planner’
 void Task::setDescription(string d) {
                                   ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:34:28: error: cannot define member function ‘Task::setName’ within ‘Planner’
 void Task::setName(string n){
                            ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:37:24: error: cannot define member function ‘Task::setDay’ within ‘Planner’
 void Task::setDay(int d){
                        ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:40:32: error: cannot define member function ‘Task::setCategory’ within ‘Planner’
 void Task::setCategory(string c) {
                                ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:43:26: error: cannot define member function ‘Task::setMonth’ within ‘Planner’
 void Task::setMonth(int m){
                          ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:46:25: error: cannot define member function ‘Task::setYear’ within ‘Planner’
 void Task::setYear(int y){
                         ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:49:29: error: cannot define member function ‘Task::setPriority’ within ‘Planner’
 void Task::setPriority(int p){
                             ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:52:29: error: cannot define member function ‘Task::getDescription’ within ‘Planner’
 string Task::getDescription(){
                             ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:55:22: error: cannot define member function ‘Task::getName’ within ‘Planner’
 string Task::getName(){
                      ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:58:26: error: cannot define member function ‘Task::getCategory’ within ‘Planner’
 string Task::getCategory(){
                          ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:61:18: error: cannot define member function ‘Task::getDay’ within ‘Planner’
 int Task::getDay(){
                  ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:64:20: error: cannot define member function ‘Task::getMonth’ within ‘Planner’
 int Task::getMonth(){
                    ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:67:19: error: cannot define member function ‘Task::getYear’ within ‘Planner’
 int Task::getYear(){
                   ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:70:23: error: cannot define member function ‘Task::getPriority’ within ‘Planner’
 int Task::getPriority(){
                       ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/task.cpp:76:21: error: cannot define member function ‘Task::EditTask’ within ‘Planner’
 void Task::EditTask(){
                     ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:8:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:9:7: error: expected nested-name-specifier before ‘namespace’
 using namespace std;
       ^~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:13:73: error: cannot define member function ‘SchoolTask::SchoolTask’ within ‘Planner’
  SchoolTask::SchoolTask(string category, string name, string description){
                                                                         ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:19:34: error: cannot define member function ‘SchoolTask::Add_SchoolTask’ within ‘Planner’
  void SchoolTask::Add_SchoolTask(){
                                  ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:8:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:96:25: error: cannot define member function ‘SchoolTask::SchoolTask’ within ‘Planner’
  SchoolTask::SchoolTask(){}
                         ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:9:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:6:7: error: expected nested-name-specifier before ‘namespace’
 using namespace std;
       ^~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:9:76: error: cannot define member function ‘PersonalTask::PersonalTask’ within ‘Planner’
 PersonalTask::PersonalTask(string category, string name, string description){
                                                                            ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:14:38: error: cannot define member function ‘PersonalTask::Add_PersonalTask’ within ‘Planner’
  void PersonalTask::Add_PersonalTask(){
                                      ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:70:29: error: cannot define member function ‘PersonalTask::PersonalTask’ within ‘Planner’
  PersonalTask::PersonalTask(){}
                             ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:16:1: error: expected ‘}’ at end of input
 }
 ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp: In member function ‘void Planner::Filter_Tasks()’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:87:37: error: ‘DisplayMenu’ was not declared in this scope
                         DisplayMenu();
                                     ^
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp: In member function ‘void Planner::Sort_Tasks()’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:128:37: error: ‘DisplayMenu’ was not declared in this scope
                         DisplayMenu();
                                     ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp: In member function ‘void Planner::Display_Planner()’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:167:25: error: expected ‘}’ before ‘else’
                         else
                         ^~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp: In member function ‘int Planner::main()’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:14:10: error: ‘class Planner’ has no member named ‘DisplayMenu’; did you mean ‘Display_Planner’?
  planner.DisplayMenu();
          ^~~~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp: At global scope:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:16:1: error: expected unqualified-id at end of input
 }
 ^
CMakeFiles/test.dir/build.make:82: recipe for target 'CMakeFiles/test.dir/main.cpp.o' failed
make[2]: *** [CMakeFiles/test.dir/main.cpp.o] Error 1
CMakeFiles/Makefile2:157: recipe for target 'CMakeFiles/test.dir/all' failed
make[1]: *** [CMakeFiles/test.dir/all] Error 2
Makefile:149: recipe for target 'all' failed
make: *** [all] Error 2
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ rm Planner.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim Planner.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp: In member function ‘void Planner::Read_From_File()’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:200:87: error: no matching function for call to ‘SchoolTask::SchoolTask(std::string, std::string, std::string&, int&)’
      SortSet.push_back(SchoolTask((string)category, (string)name, description, theprio));
                                                                                       ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:5:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.hpp:13:3: note: candidate: SchoolTask::SchoolTask(std::string, std::string, std::string)
   SchoolTask(string category, string name, string description);
   ^~~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.hpp:13:3: note:   candidate expects 3 arguments, 4 provided
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.hpp:12:3: note: candidate: SchoolTask::SchoolTask()
   SchoolTask();
   ^~~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.hpp:12:3: note:   candidate expects 0 arguments, 4 provided
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.hpp:7:7: note: candidate: SchoolTask::SchoolTask(const SchoolTask&)
 class SchoolTask : public Task {
       ^~~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.hpp:7:7: note:   candidate expects 1 argument, 4 provided
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.hpp:7:7: note: candidate: SchoolTask::SchoolTask(SchoolTask&&)
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.hpp:7:7: note:   candidate expects 1 argument, 4 provided
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:204:73: error: no matching function for call to ‘PersonalTask::PersonalTask(std::string&, std::string&, std::string&, int&)’
      SortSet.push_back(PersonalTask(category, name, description, theprio));
                                                                         ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:6:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.hpp:13:3: note: candidate: PersonalTask::PersonalTask(std::string, std::string, std::string)
   PersonalTask(string category, string name, string description);
   ^~~~~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.hpp:13:3: note:   candidate expects 3 arguments, 4 provided
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.hpp:12:3: note: candidate: PersonalTask::PersonalTask()
   PersonalTask();
   ^~~~~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.hpp:12:3: note:   candidate expects 0 arguments, 4 provided
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.hpp:7:7: note: candidate: PersonalTask::PersonalTask(const PersonalTask&)
 class PersonalTask : public Task {
       ^~~~~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.hpp:7:7: note:   candidate expects 1 argument, 4 provided
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.hpp:7:7: note: candidate: PersonalTask::PersonalTask(PersonalTask&&)
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.hpp:7:7: note:   candidate expects 1 argument, 4 provided
CMakeFiles/test.dir/build.make:82: recipe for target 'CMakeFiles/test.dir/main.cpp.o' failed
make[2]: *** [CMakeFiles/test.dir/main.cpp.o] Error 1
CMakeFiles/Makefile2:157: recipe for target 'CMakeFiles/test.dir/all' failed
make[1]: *** [CMakeFiles/test.dir/all] Error 2
Makefile:149: recipe for target 'all' failed
make: *** [all] Error 2
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim school_task.hpp 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim school_task.hpp 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim personal_task.hpp 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim school_task.cpp 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim personal_task.cpp 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim task.cpp 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
[ 40%] Linking CXX executable test
[ 40%] Built target test
[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ ./test
terminate called after throwing an instance of 'std::invalid_argument'
  what():  stoi
Aborted
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ git add task.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ git commit
[aalsu013/edittask 6d41126] finished task.cpp
 1 file changed, 82 insertions(+), 74 deletions(-)
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ git push
warning: push.default is unset; its implicit value is changing in
Git 2.0 from 'matching' to 'simple'. To squelch this message
and maintain the current behavior after the default changes, use:

  git config --global push.default matching

To squelch this message and adopt the new behavior now, use:

  git config --global push.default simple

See 'git help config' and search for 'push.default' for further information.
(the 'simple' mode was introduced in Git 1.7.11. Use the similar mode
'current' instead of 'simple' if you sometimes use older versions of Git)


(gnome-ssh-askpass:3635): Gtk-WARNING **: 13:52:59.309: cannot open display: 
error: unable to read askpass response from '/usr/libexec/openssh/gnome-ssh-askpass'
Username for 'https://github.com': alsuqiamneh

(gnome-ssh-askpass:3637): Gtk-WARNING **: 13:53:02.191: cannot open display: 
error: unable to read askpass response from '/usr/libexec/openssh/gnome-ssh-askpass'
Password for 'https://alsuqiamneh@github.com': 
Counting objects: 48, done.
Delta compression using up to 48 threads.
Compressing objects: 100% (32/32), done.
Writing objects: 100% (32/32), 6.64 KiB | 0 bytes/s, done.
Total 32 (delta 21), reused 0 (delta 0)
remote: Resolving deltas: 100% (21/21), completed with 10 local objects.
To https://github.com/cs100/final-project-wpicc001_aalsu013_sdodd007.git
   c870660..6d41126  aalsu013/edittask -> aalsu013/edittask
 ! [rejected]        aalsu013/SPfixes -> aalsu013/SPfixes (non-fast-forward)
 ! [rejected]        aalsu013/task_interface -> aalsu013/task_interface (non-fast-forward)
 ! [rejected]        master -> master (fetch first)
error: failed to push some refs to 'https://github.com/cs100/final-project-wpicc001_aalsu013_sdodd007.git'
hint: Updates were rejected because a pushed branch tip is behind its remote
hint: counterpart. If you did not intend to push that branch, you may want to
hint: specify branches to push or set the 'push.default' configuration variable
hint: to 'simple', 'current' or 'upstream' to push only the current branch.
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3
Usage

  cmake3 [options] <path-to-source>
  cmake3 [options] <path-to-existing-build>
  cmake3 [options] -S <path-to-source> -B <path-to-build>

Specify a source directory to (re-)generate a build system for it in the
current working directory.  Specify an existing build directory to
re-generate its build system.

Run 'cmake3 --help' for more information.

[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim school_task.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim school_task.hpp 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim personal_task.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim personal_task.hpp 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3. 
-bash: cmake3.: command not found
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
[ 40%] Linking CXX executable test
[ 40%] Built target test
[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ ./test
terminate called after throwing an instance of 'std::invalid_argument'
  what():  stoi
Aborted
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim Planner.cpp 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ rm Planner.cpp 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim Planner.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3. 
-bash: cmake3.: command not found
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp: In member function ‘void Planner::Read_From_File()’:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:213:113: error: no matching function for call to ‘SchoolTask::SchoolTask(std::string, std::string, std::string&)’
                                         SortSet.push_back(SchoolTask((string)category, (string)name, description));
                                                                                                                 ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:5:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.hpp:13:3: note: candidate: SchoolTask::SchoolTask(std::string, std::string, std::string, int)
   SchoolTask(string category, string name, string description, int thePrio);
   ^~~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.hpp:13:3: note:   candidate expects 4 arguments, 3 provided
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.hpp:12:3: note: candidate: SchoolTask::SchoolTask()
   SchoolTask();
   ^~~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.hpp:12:3: note:   candidate expects 0 arguments, 3 provided
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.hpp:7:7: note: candidate: SchoolTask::SchoolTask(const SchoolTask&)
 class SchoolTask : public Task {
       ^~~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.hpp:7:7: note:   candidate expects 1 argument, 3 provided
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.hpp:7:7: note: candidate: SchoolTask::SchoolTask(SchoolTask&&)
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.hpp:7:7: note:   candidate expects 1 argument, 3 provided
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:217:99: error: no matching function for call to ‘PersonalTask::PersonalTask(std::string&, std::string&, std::string&)’
                                         SortSet.push_back(PersonalTask(category, name, description));
                                                                                                   ^
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:6:0,
                 from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.hpp:13:3: note: candidate: PersonalTask::PersonalTask(std::string, std::string, std::string, int)
   PersonalTask(string category, string name, string description, int thePrio);
   ^~~~~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.hpp:13:3: note:   candidate expects 4 arguments, 3 provided
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.hpp:12:3: note: candidate: PersonalTask::PersonalTask()
   PersonalTask();
   ^~~~~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.hpp:12:3: note:   candidate expects 0 arguments, 3 provided
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.hpp:7:7: note: candidate: PersonalTask::PersonalTask(const PersonalTask&)
 class PersonalTask : public Task {
       ^~~~~~~~~~~~
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.hpp:7:7: note:   candidate expects 1 argument, 3 provided
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.hpp:7:7: note: candidate: PersonalTask::PersonalTask(PersonalTask&&)
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.hpp:7:7: note:   candidate expects 1 argument, 3 provided
CMakeFiles/test.dir/build.make:82: recipe for target 'CMakeFiles/test.dir/main.cpp.o' failed
make[2]: *** [CMakeFiles/test.dir/main.cpp.o] Error 1
CMakeFiles/Makefile2:157: recipe for target 'CMakeFiles/test.dir/all' failed
make[1]: *** [CMakeFiles/test.dir/all] Error 2
Makefile:149: recipe for target 'all' failed
make: *** [all] Error 2
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim personal_task.cpp 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim Planner.cpp 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
[ 40%] Linking CXX executable test
[ 40%] Built target test
[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
[ 40%] Built target test
[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ ./test
terminate called after throwing an instance of 'std::invalid_argument'
  what():  stoi
Aborted
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim school_task.cpp 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ rm school_task.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim school_task.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim school_task.hpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ rm personal_task.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim personal_task.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:9:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:9:1: error: redefinition of ‘PersonalTask::PersonalTask(std::string, std::string, std::string, int)’
 PersonalTask::PersonalTask(string category, string name, string description, int thePrio){
 ^~~~~~~~~~~~
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:8:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:9:1: note: ‘PersonalTask::PersonalTask(std::string, std::string, std::string, int)’ previously defined here
 PersonalTask::PersonalTask(string category, string name, string description, int thePrio){
 ^~~~~~~~~~~~
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:9:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:15:7: error: redefinition of ‘void PersonalTask::Add_PersonalTask()’
  void PersonalTask::Add_PersonalTask(){
       ^~~~~~~~~~~~
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:8:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:15:7: note: ‘void PersonalTask::Add_PersonalTask()’ previously defined here
  void PersonalTask::Add_PersonalTask(){
       ^~~~~~~~~~~~
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:9:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:71:2: error: redefinition of ‘PersonalTask::PersonalTask()’
  PersonalTask::PersonalTask(){}
  ^~~~~~~~~~~~
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:8:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:71:2: note: ‘PersonalTask::PersonalTask()’ previously defined here
  PersonalTask::PersonalTask(){}
  ^~~~~~~~~~~~
CMakeFiles/test.dir/build.make:82: recipe for target 'CMakeFiles/test.dir/main.cpp.o' failed
make[2]: *** [CMakeFiles/test.dir/main.cpp.o] Error 1
CMakeFiles/Makefile2:157: recipe for target 'CMakeFiles/test.dir/all' failed
make[1]: *** [CMakeFiles/test.dir/all] Error 2
Makefile:149: recipe for target 'all' failed
make: *** [all] Error 2
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim personal_task.hpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ ls
a.out           cmake_install.cmake  main       personal_task.cpp  readTasks.cpp     SortClass.hpp     task.cpp
bin             CMakeLists.txt       main2.cpp  personal_task.hpp  school_task.cpp   SortDate.cpp      task.hpp
CMakeCache.txt  googletest           main.cpp   Planner.cpp        school_task.hpp   SortName.cpp      Tasks.txt
CMakeFiles      lib                  Makefile   README.md          SortCategory.cpp  SortPriority.cpp  test
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim personal_task.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim main.cpp 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:9:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:9:1: error: redefinition of ‘PersonalTask::PersonalTask(std::string, std::string, std::string, int)’
 PersonalTask::PersonalTask(string category, string name, string description, int thePrio){
 ^~~~~~~~~~~~
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:8:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:9:1: note: ‘PersonalTask::PersonalTask(std::string, std::string, std::string, int)’ previously defined here
 PersonalTask::PersonalTask(string category, string name, string description, int thePrio){
 ^~~~~~~~~~~~
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:9:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:15:7: error: redefinition of ‘void PersonalTask::Add_PersonalTask()’
  void PersonalTask::Add_PersonalTask(){
       ^~~~~~~~~~~~
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:8:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:15:7: note: ‘void PersonalTask::Add_PersonalTask()’ previously defined here
  void PersonalTask::Add_PersonalTask(){
       ^~~~~~~~~~~~
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:9:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/personal_task.cpp:71:2: error: redefinition of ‘PersonalTask::PersonalTask()’
  PersonalTask::PersonalTask(){}
  ^~~~~~~~~~~~
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:8:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/school_task.cpp:71:2: note: ‘PersonalTask::PersonalTask()’ previously defined here
  PersonalTask::PersonalTask(){}
  ^~~~~~~~~~~~
CMakeFiles/test.dir/build.make:82: recipe for target 'CMakeFiles/test.dir/main.cpp.o' failed
make[2]: *** [CMakeFiles/test.dir/main.cpp.o] Error 1
CMakeFiles/Makefile2:157: recipe for target 'CMakeFiles/test.dir/all' failed
make[1]: *** [CMakeFiles/test.dir/all] Error 2
Makefile:149: recipe for target 'all' failed
make: *** [all] Error 2
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim school_task.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ rm school_task.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim school_task.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
[ 40%] Linking CXX executable test
[ 40%] Built target test
[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ rm personal_task.cpp personal_task.hpp school_task.cpp school_task.hpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim school_test.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim school_test.hpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim personal_task.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim personal_task.hpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ rm Planner.cpp 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim Planner.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
Scanning dependencies of target test
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
In file included from /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/main.cpp:3:0:
/home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007/Planner.cpp:5:27: fatal error: school_task.hpp: No such file or directory
 #include "school_task.hpp"
                           ^
compilation terminated.
CMakeFiles/test.dir/build.make:82: recipe for target 'CMakeFiles/test.dir/main.cpp.o' failed
make[2]: *** [CMakeFiles/test.dir/main.cpp.o] Error 1
CMakeFiles/Makefile2:157: recipe for target 'CMakeFiles/test.dir/all' failed
make[1]: *** [CMakeFiles/test.dir/all] Error 2
Makefile:149: recipe for target 'all' failed
make: *** [all] Error 2
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ mv school_test.hpp school_task.hpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ mv school_test.cpp school_task.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ cmake3 .
CMake Warning (dev) in CMakeLists.txt:
  No project() command is present.  The top-level CMakeLists.txt file must
  contain a literal, direct call to the project() command.  Add a line of
  code such as

    project(ProjectName)

  near the top of the file, but after cmake_minimum_required().

  CMake is pretending there is a "project(Project)" command on the first
  line.
This warning is for project developers.  Use -Wno-dev to suppress it.

-- Configuring done
-- Generating done
-- Build files have been written to: /home/csmajs/aalsu013/final-project-wpicc001_aalsu013_sdodd007
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ make
[ 20%] Built target gtest
[ 30%] Building CXX object CMakeFiles/test.dir/main.cpp.o
[ 40%] Linking CXX executable test
[ 40%] Built target test
[ 60%] Built target gmock
[ 80%] Built target gmock_main
[100%] Built target gtest_main
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim CMakeLists.txt 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim CMakeLists.txt 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim CMakeLists.txt 
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ ls
a.out           cmake_install.cmake  main       personal_task.cpp  readTasks.cpp     SortClass.hpp     task.cpp
bin             CMakeLists.txt       main2.cpp  personal_task.hpp  school_task.cpp   SortDate.cpp      task.hpp
CMakeCache.txt  googletest           main.cpp   Planner.cpp        school_task.hpp   SortName.cpp      Tasks.txt
CMakeFiles      lib                  Makefile   README.md          SortCategory.cpp  SortPriority.cpp  test
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ git add CMakeLists.txt school_task.hpp school_task.cpp personal_task.cpp personal_task.hpp task.cpp Planner.cpp
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ git commit -m "updated"
[aalsu013/edittask 8dad20d] updated
 6 files changed, 83 insertions(+), 49 deletions(-)
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ git push
warning: push.default is unset; its implicit value is changing in
Git 2.0 from 'matching' to 'simple'. To squelch this message
and maintain the current behavior after the default changes, use:

  git config --global push.default matching

To squelch this message and adopt the new behavior now, use:

  git config --global push.default simple

See 'git help config' and search for 'push.default' for further information.
(the 'simple' mode was introduced in Git 1.7.11. Use the similar mode
'current' instead of 'simple' if you sometimes use older versions of Git)


(gnome-ssh-askpass:23299): Gtk-WARNING **: 15:07:33.923: cannot open display: 
error: unable to read askpass response from '/usr/libexec/openssh/gnome-ssh-askpass'
Username for 'https://github.com': alsuqiamneh

(gnome-ssh-askpass:23305): Gtk-WARNING **: 15:07:36.580: cannot open display: 
error: unable to read askpass response from '/usr/libexec/openssh/gnome-ssh-askpass'
Password for 'https://alsuqiamneh@github.com': 
Counting objects: 70, done.
Delta compression using up to 48 threads.
Compressing objects: 100% (37/37), done.
Writing objects: 100% (37/37), 7.34 KiB | 0 bytes/s, done.
Total 37 (delta 26), reused 0 (delta 0)
remote: Resolving deltas: 100% (26/26), completed with 16 local objects.
To https://github.com/cs100/final-project-wpicc001_aalsu013_sdodd007.git
   6d41126..8dad20d  aalsu013/edittask -> aalsu013/edittask
 ! [rejected]        aalsu013/SPfixes -> aalsu013/SPfixes (non-fast-forward)
 ! [rejected]        aalsu013/task_interface -> aalsu013/task_interface (non-fast-forward)
 ! [rejected]        master -> master (fetch first)
error: failed to push some refs to 'https://github.com/cs100/final-project-wpicc001_aalsu013_sdodd007.git'
hint: Updates were rejected because a pushed branch tip is behind its remote
hint: counterpart. If you did not intend to push that branch, you may want to
hint: specify branches to push or set the 'push.default' configuration variable
hint: to 'simple', 'current' or 'upstream' to push only the current branch.
[aalsu013@hammer final-project-wpicc001_aalsu013_sdodd007]$ vim Planner.cpp 

        void Save_Task(){

        }
        void Read_From_File(){
                ifstream infile;
                infile.open("Tasks.txt");
                if (!infile){
                        ofstream outFile;
                        outFile.open("Tasks.txt");
                        outFile.close();
                        Read_From_File();
                }
                else{
                        int i = 0;
                        SortSet.clear();
                        while(!infile.eof()) {
                                string name, description, category, priority, day, month, year;
                                getline(infile, category, '\n');
                                getline(infile, name, '\n');
                                getline(infile, description, '\n');

                                getline(infile, priority, '\n');
                                getline(infile, day, '\n');
                                getline(infile, month, '\n');
                                getline(infile, year, '\n');

                                string skip;
                                getline(infile, skip);
                                int theprio = stoi(priority);
                                int theDay = stoi(day);
                                int theMonth = stoi(month);
                                int theYear = stoi(year);

                                if (category == "School")
                                {

                                        SortSet.push_back(SchoolTask((string)category, (string)name, description, theprio, theDay, theMonth, theYear));
                                }
                                else if(category == "Personal")
                                {
                                        SortSet.push_back(PersonalTask(category, name, description, theprio, theDay, theMonth, theYear));     
                                }
                                else{
                                        getline(infile, skip);
                                        getline(infile, skip);
                                }
                                i++;
                        }
                        if (FilterSet.size() == 0 && firstread == false)
                        {
                                firstread = true;
                                FilterSet = SortSet;
                        }
                        else{
                        }
                        infile.close();
                }
        }
        void Write_To_File(){
                ofstream outFile;
                outFile.open("Tasks.txt");
                                                                                                                           246,1-8       59%
