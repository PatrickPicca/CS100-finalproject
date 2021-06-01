 > As you complete each section you **must** remove the prompt text. Every *turnin* of this project includes points for formatting of this README so keep it clean and keep it up to date. 
 > Prompt text is any lines beginning with "\>"
 > Replace anything between \<...\> with your project specifics and remove angle brackets. For example, you need to name your project and replace the header right below this line with that title (no angle brackets). 
# PlannerPLUS

 
 Authors: 
 
 Amneh Alsuqi https://github.com/alsuqiamneh
   
 
## Project Description

 * The implementation of a task scheduler helps us apply our knowledge of these design patterns as well as present a world use outside of the classroom setting. 

 * We will use C++. Other tools will be introduced if needed. 
 
 * Our inputs are tasks created by the user which include titles, descriptions, optional tags, priority, duration, and due dates.         
 * Our outputs will be a variety of visuals specified either by the user or through the program itself based on user preference, the information the user has stored to be displayed at a later day.


* The two design patterns we would use are composite pattern and strategy pattern.
* The strategy pattern allows us to implement various strategies for prioritizing given tasks from the user, along with giving the user the freedom to output tasks in different formats. For example, the user may want to implement multiple headers under a single task or choose to create a note for a task. Using the strategy pattern, we can implement these different algorithms so that the user has the ability to customize their tasks. 
* The composite pattern allows us to implement different features to tasks. Using the composite pattern also permits the user to create subtasks, lists that include multiple tasks, as well as descriptions pertaining to specified tasks. Problems that we expect to run into include accurately composing these objects into their respected tree structures so that they are ordered exactly how the user specifies. Inaccurately displaying the hierarchy the user wants would go against the overall purpose of the task scheduler and its features.  



 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to 
 > * Set up your GitHub project board as a Kanban board for the project. It should have columns that map roughly to 
 >   * Backlog, TODO, In progress, In testing, Done
 >   * You can change these or add more if you'd like, but we should be able to identify at least these.
 > * There is no requirement for automation in the project board but feel free to explore those options.
 > * Create an "Epic" (note) for each feature and each design pattern and assign them to the appropriate team member. Place these in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Create smaller development tasks as issues and assign them to team members. Place these in the `TODO` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
## Class Diagram
![Screen Shot 2021-05-07 at 9 07 06 PM](https://user-images.githubusercontent.com/81607334/117526216-7fccda00-af78-11eb-9247-dd383430ff7d.png)


 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II
 > * In the meeting with your TA you will discuss: 
 >   - How effective your last sprint was (each member should talk about what they did)
 >   - Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 >   - Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 >   - What tasks you are planning for this next sprint.

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 
 ## Screenshots
 The following are screenshots of the input/output after running PlannerPLUS:
 
 Creating a school task:
 
 ![Screen Shot 2021-05-31 at 7 23 25 PM](https://user-images.githubusercontent.com/81607334/120348970-89650b80-c2b2-11eb-8619-fd7f688aa981.png)
 
 Creating a personal task:
 
 ![Screen Shot 2021-05-31 at 7 23 45 PM](https://user-images.githubusercontent.com/81607334/120348999-908c1980-c2b2-11eb-95f8-587464589892.png)
 
 Editing a task:
 
 ![Screen Shot 2021-05-31 at 7 24 39 PM](https://user-images.githubusercontent.com/81607334/120349031-984bbe00-c2b2-11eb-8d15-04d8073d8a3c.png)
 
 Displaying Planner:
 
 ![Screen Shot 2021-05-31 at 7 24 52 PM](https://user-images.githubusercontent.com/81607334/120349063-9eda3580-c2b2-11eb-9095-bc87c86ce5a9.png)
 
 Sorting by highest priority:
 
 ![Screen Shot 2021-06-01 at 8 32 21 AM](https://user-images.githubusercontent.com/81607334/120350988-515ec800-c2b4-11eb-9fbe-57d54b581dbd.png)
 
 Filtering to only display personal tasks:
 
 ![Screen Shot 2021-06-01 at 8 32 38 AM](https://user-images.githubusercontent.com/81607334/120351072-650a2e80-c2b4-11eb-976d-6d83f4492f3b.png)

 
 ## Installation/Usage
 To use PlannerPlus, you must first clone this repository onto your platform.
After obtaining the necessary files, you will need to install CMake in order to run the application.
The following link gives instructions on how to install CMake, depending on your platform:

https://cmake.org/install/

Afterwards, paste the following into your command line:

cmake3 .

make

./test

PlannerPlus will launch and be ready for user input. 
 ## Testing
 Our project was tested with both CI and unit tests for our files. We also made sure to create checks for user input, in case an invalid input occurs. In that case, PlannerPlus should prompt the user to try again with a valid input. Our README file does have a “passing badge”. 

 
