# Apocalyptic Odyssey
 
Authors: [Rikki Kahn-Yee](https://github.com/rikkiky), [Amshu Bellur](https://github.com/mushabell), [Jayanth Samala](https://github.com/jayanth-samala), [Nikhil Vankayala](https://github.com/NikhilVankayala)

## Project Description
This project was inspired by a show that we all watched about a zombie apocalypse. The survival of the group of a few highschoolers and a professor was dependent on the strategic moves that they made. To simulate this show, we have multiple characters for the user to choose from, advantages and disadvantages for each character, and each character will have a unique journey to survive the apocalypse. The goal in this project is to make decisions that allow your character to exit the college campus without dying. The name of the project is “Apocalyptic Odyssey”. We plan to use C++, VS Code, GitHub, and terminal for user input/output. The input/output of our project will be in the VS Code terminal. Features of this project include characters that the user can choose from which have advantages and disadvantages. The characters can gain advantages throughout the game such as weapons to help them survive the apocalypse. The user will be given prompts in the terminal and will have multiple options to choose from on how to react to each situation that is given to them such as run, attack, hide, use an advantage, or use a specific weapon. The character is given a progress bar to track how well the character is surviving the apocalypse. When decisions are made that are bad for the character they will die. To keep the game suspenseful, weapons can only be used once, however, users are given the option to work with the other characters throughout the game to help them win the obstacles.

 > ## Phase II
 > In addition to completing the "User Interface Specification" and "Class Diagram" sections below, you will need to:
 > * Create an "Epic" (note) for each feature. Place these epics in the `Product Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Break down the "Epics" into smaller actionable user stories (i.e. smaller development tasks). Convert them into issues and assign them to team members. Place these in the `TODO` column (aka Sprint Backlog).
 >   * These cards should represent roughly 7 days worth of development time for your team. Then, once the sprint is over you should be repeating these steps to plan a new sprint, taking you until your second scrum meeting with the reader in phase III.
 > * Schedule two check-ins using Calendly. Both time slots should be during your lab on week 6. Your entire team must be present for both check-ins.
 >   * The first check-in needs to be scheduled with your lab TA. During that meeting, you will discuss your project design/class diagram from phase II.
 >   * The second check-in should be scheduled with a reader. During that meeting you will discuss:
 >     * The tasks you are planning for the first sprint
 >     * How work will be divided between the team members
## User Interface Specification
 > Include a navigation diagram for your screens and the layout of each of those screens as desribed below. For all the layouts/diagrams, you can use any tool such as PowerPoint or a drawing program. (Specification requirement is adapted from the User Interface Design Document Template of CMSC 345 at the University of Maryland Global Campus)

### Navigation Diagram
> Draw a diagram illustrating how the user can navigate from one screen to another. Here is an [example](https://creately.com/diagram/example/ikfqudv82/user-navigation-diagram-classic?r=v). It can be useful to label each symbol that represents a screen so that you can reference the screens in the next section or the rest of the document if necessary. Give a brief description of what the diagram represents.

![CS100-Project-NavigationDiagram_version1](https://github.com/cs100/final-project-nvank001_jsama031_rkahn007_abell062/assets/165875194/c270cae2-fc51-4e1e-b683-1945ec244699)

This diagram portrays how the user can navigate to different screens throughout the game based on the decisions that they make. In the beginning, they are given the option to choose one of six characters after being given a brief description of all the characters. Once they choose their character, they are given a full summary of their character and the advantages that they have. Now the players must survive five zombie obstacles (labeled events) to survive and win the game. Each character is given 3 unique options at each event. One option (red) will lead to their death. The second option (blue) will require them to use a weapon against the zombies and if they win they will survive. The third option (green) is when they select another character to attack the zombies. If they choose the right character they might be able to pass the event or they might die. After passing all five events, the user will be successful and win the game. If they die at any point in the game they have the option to quit or restart the game. 


### Screen Layouts
> Include the layout of each of your screens. The layout should describe the screen’s major components such as menus and prompts for user inputs and expected output, or any graphical user interface components if applicable (e.g. buttons, text boxes, etc). Explain what is on the layout, and the purpose of each menu item, button, etc. If many screens share the same layout, start by describing the general layout and then list the screens that will be using that layout and the differences between each of them.

#### Beginning: 
It is currently 6:43pm on campus. There are 6 people in the classroom who are Dr.Brown, Cassidy, Jerome, Jessie, Ryan, and Greta. There had been an explosion in Dr.Heisenberg's lab and had caused a zombie apocalypse! You must make it off the campus to save your life! Jerome is the president of the MMA club. Greta loves to hack computer systems for fun. Cassidy is on academic probation and would lose her athletic scholarship if she does not do well in class. Ryan is very popular because he is good at manipulating people. Jessie loves to be a part of the track team and work with her geology professors.
Who would you like to be:
*Ryan
*Jessie
*Dr.Brown
*Cassidy
*Jerome
*Greta
Please type the number of the character you would like to be:

**Greta**: Hi Greta! Hope you are ready for some tough challenges. A character skill that you carry is your ability to pick locks. When you were a child, your parents would lock your favorite candy in the top cabinet with a lock. With a lot of practice, you were able to figure out how to pick the lock and can pick any lock that you want now! Now you and the people in your class must exit the campus together to survive.

**Jerome**: Hi Jerome! Hope you are ready for some tough challenges. A character skill that you carry is your ability to knock people out with one punch. When you were a child, you were bullied a lot as a kid. Your parents signed you up for MMA classes to teach you self defense, and now you can really fight! Now you and the people in your class must exit the campus together to survive.

**Cassidy**: Hi Cassidy! Hope you are ready for some tough challenges. A character skill that you carry is your strength! When you were a child, you would work in the ice cream parlor every summer to make some money and with every scoop that you scooped, you gained a lot of muscle. Now you can bench over 250lbs! Now you and the people in your class must exit the campus together to survive.

**Dr.Brown**: Hi Dr.Brown! Hope you are ready for some tough challenges. A character skill that you carry is your glasses! When you were a child, you would play with your glasses and the sun because you could start fires with the right angle and shine light in other people’s faces! However, you are a little bit out of practice since you have not played with your glasses since you became a professor. Now you and the people in your class must exit the campus together to survive.

**Jessie**: Hi Jessie! Hope you are ready for some tough challenges. A character skill that you carry is your speed! When you were a child, you did not have a lot of money growing up, so you would steal cans of soup from the supermarket and run back home to make sure that you were not caught by the guards. With your practice in running, you were able to become a track star and set the school record for fastest sprinter. Now you and the people in your class must exit the campus together to survive.

**Ryan**: Hi Ryan! Hope you are ready for some tough challenges. A character skill that you carry is your ability to manipulate people! When you were a child, your parents got divorced and got you a lot of gifts to make up for it. Eventually you learned to manipulate them to get any gift that you wanted. With this skill of manipulation, you became very popular in school and learned how to manipulate the people in school! Now you and the people in your class must exit the campus together to survive.

#### Event 1:
When you begin to run out of the classroom and into the hallway you notice a hoard of zombies. You are backed against a corner. You notice that you are backed against the janitor’s closet. You enter the closest with all your classmates to hide from the zombies. What do you want to do now?

→ Greta
* Wait for the zombies to leave and then exit the janitor’s closet
* Use the supplies in the closet as a weapon against the zombies
* Use your skills against the zombie

→ Jerome
* Use the vents in the closet to get out
* Wait for the zombies to leave and then exit the janitor’s closet
* Use your skills against the zombies
  
→ Cassidy
* Use your skills against the zombies
* Wait for the zombies to leave and then exit the janitor’s closet
* Ask Jerome to go out and knock out all the zombies
  
→ Ryan
* Wait for the zombies to leave and then exit the janitor’s closet
* Use th supplies in the closet as a weapon against the zombies
* Use your skills against the zombies
  
→ Jessie
* Use your skill against the zombies
* Ask Ryan to go talk to the zombies and manipulate them into letting you all go
* Wait for the zombies to leave and then exit the janitor’s closet
  
→ Dr.Brown
* Wait for the zombies to leave and then exit the janitor’s closet.
* Use your skills against the zombies
* Ask Cassidy to lift throw heavy buckets from the closest onto the zombies

## Class Diagram
 > Include a **class diagram(s)** for your project and a **description** of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper UML notation (as discussed in the course slides).
 
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 
 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
 > * Perform a new sprint plan like you did in Phase II.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
