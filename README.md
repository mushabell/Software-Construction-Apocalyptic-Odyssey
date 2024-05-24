# Apocalyptic Odyssey
 
Authors: [Rikki Kahn-Yee](https://github.com/rikkiky), [Amshu Bellur](https://github.com/mushabell), [Jayanth Samala](https://github.com/jayanth-samala), [Nikhil Vankayala](https://github.com/NikhilVankayala)

## Project Description
This project was inspired by a show that we all watched about a zombie apocalypse. The survival of the group of a few highschoolers and a professor was dependent on the strategic moves that they made. To simulate this show, we have multiple characters for the user to choose from, advantages and disadvantages for each character, and each character will have a unique journey to survive the apocalypse. The goal in this project is to make decisions that allow your character to exit the college campus without dying. The name of the project is “Apocalyptic Odyssey”. We plan to use C++, VS Code, GitHub, and terminal for user input/output. The input/output of our project will be in the VS Code terminal. Features of this project include characters that the user can choose from which have advantages and disadvantages. The characters can gain advantages throughout the game such as weapons to help them survive the apocalypse. The user will be given prompts in the terminal and will have multiple options to choose from on how to react to each situation that is given to them such as run, attack, hide, use an advantage, or use a specific weapon. The character is given a progress bar to track how well the character is surviving the apocalypse. When decisions are made that are bad for the character they will die. To keep the game suspenseful, weapons can only be used once, however, users are given the option to work with the other characters throughout the game to help them win the obstacles.

## User Interface Specification

### Navigation Diagram

![CS100-Project-NavigationDiagram_version1](https://github.com/cs100/final-project-nvank001_jsama031_rkahn007_abell062/assets/165875194/c270cae2-fc51-4e1e-b683-1945ec244699)

This diagram portrays how the user can navigate to different screens throughout the game based on the decisions that they make. In the beginning, they are given the option to choose one of six characters after being given a brief description of all the characters. Once they choose their character, they are given a full summary of their character and the advantages that they have. Now the players must survive five zombie obstacles (labeled events) to survive and win the game. Each character is given 3 unique options at each event. One option (red) will lead to their death. The second option (blue) will require them to use a weapon against the zombies and if they win they will survive. The third option (green) is when they select another character to attack the zombies. If they choose the right character they might be able to pass the event or they might die. After passing all five events, the user will be successful and win the game. If they die at any point in the game they have the option to quit or restart the game. 


### Screen Layouts

#### <ins> Beginning: </ins>
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

#### <ins> Event 1: </ins>
When you begin to run out of the classroom and into the hallway you notice a hoard of zombies. You are backed against a corner. You notice that you are backed against the janitor’s closet. You enter the closest with all your classmates to hide from the zombies. What do you want to do now?

→ Greta
* Wait for the zombies to leave and then exit the janitor’s closet
* Use the supplies in the closet as a weapon against the zombies
* Use your skills against the zombies

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
* Use the supplies in the closet as a weapon against the zombies
* Use your skills against the zombies
  
→ Jessie
* Use your skills against the zombies
* Ask Ryan to go talk to the zombies and manipulate them into letting you all go
* Wait for the zombies to leave and then exit the janitor’s closet
  
→ Dr.Brown
* Wait for the zombies to leave and then exit the janitor’s closet.
* Use your skills against the zombies
* Ask Cassidy to lift throw heavy buckets from the closest onto the zombies

#### <ins> Event One Death </ins>
You were unsuccessful. Your decision led the zombies into the janitor’s closet and they eventually caught up to you. You and your classmates turned into zombies and the zombie apocalypse has taken over the world. You lose! 
Please type “Q” to quit the game and “R” to restart the game:

#### <ins> Event 2 </ins>
Nice choice, you made it out of the janitor’s closet! You continue to walk towards the exit of the building. Right before you open the door you notice a bunch of zombies walking around the campus. What do you want to do:

→ Greta
* Hide in the building until there is only a little bit of zombies outside
* Ask Jerome to go outside and use his MMA skills to fight the zombies
* Use your skills against the zombies

→ Jerome
* Dig a tunnel underground to get out of the building without getting attacked by zombies
* Ask Ryan to manipulate the zombies
* Use your skills against the zombies

→ Cassidy
* Use your skills against the zombies
* Carry a mirror with you so every time a zombie comes near you, they only see their own reflection
* Dig a tunnel underground to get out of the building without getting attacked by zombies

→ Ryan
* Wait for the zombies to leave and then exit the building
* Ask Dr. Brown to set a fire outside to distract the zombies
* Use your skills against the zombies

→ Jessie
* Use your skill against the zombies
* Ask Dr.Brown to set a fire outside to distract the zombies
* Carry a mirror with you so every time a zombie comes near you, they only see their own reflection

→ Dr.Brown
* Wait for the zombies to leave and then exit the building
* Use your skills against the zombies
* Ask Ryan to manipulate the zombies into letting all of you go

#### <ins> Event 2 Death </ins>
You were unsuccessful. Your decision led the zombies into the building and they eventually caught up to you. You and your classmates turned into zombies and the zombie apocalypse has taken over the world. You lose! 
Please type “Q” to quit the game and “R” to restart the game:

#### <ins> Event 3 </ins>
Nice choice! You made it outside of the building! You decide to go through the cafeteria to choose the shortest path to get off the campus as fast as possible. When you enter the cafeteria you see that the building is empty. You and your classmates enter the main hall and the door closes behind you. You notice a knife on the floor and pick it up for protection. You walk across the hall and try to open the door behind you but you can not! What do you want to do now:

→ Greta
* Use the butter in the cafeteria to make the door lock slippery
* Ask Cassidy to break the door down
* Use your skills against the door

→ Jerome
* Try to kick the door down
* Ask Greta to open the door
* Use your skills against the door

→ Cassidy
* Use your skills against the door
* Dig a tunnel underground to get out of the cafeteria
* Ask Greta to open the door

→ Ryan
* Wait for the zombies to come break the door
* Ask Greta to open the door
* Use your skills against the door

→ Jessie
* Use your skill against the door
* Ask Greta to open the door
* Dig a tunnel underground to get out of the cafeteria

→ Dr.Brown
* Use butter from the cafeteria to make the door lock slippery
* Use your skills against the door
* Ask Greta to open the door

#### <ins> Event 3 Death </ins>
You were unsuccessful. Your decision led the zombies into the cafeteria and they eventually caught up to you. You and your classmates turned into zombies and the zombie apocalypse has taken over the world. You lose! 
Please type “Q” to quit the game and “R” to restart the game:

#### <ins> Event 4 </ins>
Nice choice, you made it out of the cafeteria! You only have to make it through the science lab and the parking lot to exit the campus. You walk by the science lab and notice a shortcut through the lab. You decide to take the shortcut and enter the lab. When you enter the lab you find a gun on the floor with three bullets. You pick it up for safety. As you are about to exit the lab, zombies come out from the corner of the lab! What do you want to do: 

→ Greta
* Use the gun/knife to kill the zombies
* Ask Cassidy to throw science equipment at the zombies
* Run away to the other side of the lab

→ Jerome
* Run away to the other side of the lab
* Ask Ryan to manipulate the zombies
* Use the gun/knife to kill the zombies

→ Cassidy
* Use the gun/knife to kill the zombies
* Create a poison in the lab to kill the zombies with
* Act like a statue and hope the zombies will not see you

→ Ryan
* Create a position in the lab to kill the zombies with
* Use the gun/knife to kill the zombies
* Run away to the other side of the lab

→ Jessie
* Use the gun/knife to kill the zombies
* Run to the other side of the lab
* Stand like a statue so the zombies do not think you are real

→ Dr.Brown
* Ask Dr.Brown to set a fire to distract the zombies
* Use the gun/knife to kill the zombies
* Ask Ryan to manipulate the zombies into letting all of you go

#### <ins> Event 4 Death </ins>
You were unsuccessful. Your decision led the zombies into the cafeteria and they eventually caught up to you. You and your classmates turned into zombies and the zombie apocalypse has taken over the world. You lose! 
Please type “Q” to quit the game and “R” to restart the game:

#### <ins> Event 5 </ins>
Nice choice! You made it outside of the lab! All you have to do is make it through the parking lot with your classmates. You can see the exit within a few feet. You step one foot on the pavement and find that the zombies have set up camp in the parking lot. This is where the zombies live! You have no choice but to go through the parking lot! What do you want to do now:

→ Greta
* Ask Ryan to manipulate all the zombies into letting everyone go
* Use the gun/knife against the zombies
* Use your skills against the zombies

→ Jerome
* Use the gun/knife against the zombies
* Ask Dr. Brown to set a fire as a distraction
* Use your skills against the zombies

→ Cassidy
* Use your skills against the zombies
* Use a gun/knife against the zombies
* Ask Jessie to run really fast and get help

→ Ryan
* Dig a tunnel underground to get out of the parking lot
* Ask Dr. Brown to set a fires a distraction
* Use your skills against the zombies

→ Jessie
* Use your skill against the zombies
* Use the gun/knife against the zombies
* Dig a tunnel underground to get out of the parking lot

→ Dr.Brown
* Use gun/knife against the zombies
* Use your skills against the zombies
* Ask Jerome to fight all the zombies to make it out of the parking lot

#### <ins> Event 5 Death </ins>
You were unsuccessful. Your decision led the zombies to attack you from the parking lot. You and your classmates turned into zombies and the zombie apocalypse has taken over the world. You lose! 
Please type “Q” to quit the game and “R” to restart the game:

#### <ins> Success </ins>
Congratulations! You made it out of the parking lot and you and your classmates made it out from the campus! You are officially saved from the zombie apocalypse! When you exited the campus, the military was able to figure out a cure for the zombie infection and was able to reverse the zombies back to humans!
Please type “Q” to quit the game and “R” to restart the game and maybe play a new character:

#### <ins> Knife or Gun Option </ins>
Would you like to choose to use the gun or the knife in this obstacle? 
* knife
* gun

## Class Diagram
![Apocalyptic_Odyssey_UML_Diagram drawio](https://github.com/cs100/final-project-nvank001_jsama031_rkahn007_abell062/assets/19979330/4632c2d2-bc3c-418e-bc11-b5df8382bb85)
The class diagram for Apocalyptic Odyssey is made up of 7 classes — BaseCharacter, Cassidy, Jerome, Ryan, Dr_Brown, Jessie, and Greta. BaseCharacter is an abstract base class that contains bool variables knife and gun for the weapons picked up during the game, string variables for the strengths and weaknesses of each character, and the int gameProgressGuage variable to track how far into the game the user is. The BaseCharacter class also has 5 void undefined functions: event1(), event2(), event3(), event4(), and event5() — one for each event in the game. Cassidy, Jerome, Ryan, Dr_Brown, Jessie, and Greta derive from the BaseCharacter class. Each of these classes overwrite the 5 event functions declared in BaseCharacter and define the functions in accordance with their respective character's story line.

![Apocalyptic_Odyssey_UML_Diagram-New UML](https://github.com/cs100/final-project-nvank001_jsama031_rkahn007_abell062/assets/19979330/52763b3b-3660-4f38-a41a-22aca02216f7)
The class diagram for Apocalyptic Odyssey is made up of 4 classes — Game, Person, Display, and Progress. The Game class is used for moving through the 5 events of the game. It is made up of 6 private functions: event1(), event2(), event3(), event4(), event5(), and die() -- and 1 public function: BeginEvent(). It is composed of the Game class and Person class. The Person class is used for storing and keeping track of the character's data. It is made up of 9 public functions: Person(), updateGun(), updateKnife(), getName(), updateProgress(), getStrength(), getWeaknesss(), getGun(), and getKnife() -- and 6 private variables: characterName, knife, gun, strangth, weakness, and gameProgressGauge. The Person class is composed of the Progress class. The Progress class is used for updating the character's progress. It is made up of 2 public functions: updateGuage() and displayProgressHelper(). It is associated with the Game class and the Display class. The Display class is used for outputting all the elements of the game to the user. It is made up of 9 public functions: eventPrompt(), options(), options()—with different parameters, status(), death(), menu(), backstory(), error(), and finished(). The Display class is composed of the person class.
 
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
 
