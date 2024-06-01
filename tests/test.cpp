#include "gtest/gtest.h"
#include "../header/Display.h"
#include "../header/Game.h"
#include "../header/Person.h"
#include "../header/Progress.h"
//------------------------------------------------(Backstory)-----------------------------------------------------------
TEST(Backstory, testGreta) {
    // Redirect cout to stringstream for FunctionOne
    std::ostringstream outStreamOne;
    std::streambuf* coutBufferOne = std::cout.rdbuf(outStreamOne.rdbuf());
    Person Greta("Greta", "can not see without glasses", "good lock picker");
    Display dis;
    dis.backstory(Greta);

    std::cout.rdbuf(coutBufferOne);

    // Define the expected backstory string
    std::string expectedBackstory = 
        "\nHi Greta! Hope you are ready for some tough challenges. "
        "A character skill that you carry is your ability to pick locks. "
        "When you were a child, your parents would lock your favorite candy in the top cabinet with a lock. "
        "With a lot of practice, you were able to figure out how to pick the lock and can pick any lock that you want now! "
        "Now you and the people in your class must exit the campus together to survive.\nIf you need a reminder of choices you have made, character information, or progress type (#)\n";

    // Compare the output to the expected string
    EXPECT_EQ(outStreamOne.str(), expectedBackstory);
}
TEST(Backstory, testJerome) {
    // Redirect cout to stringstream for FunctionOne
    std::ostringstream outStreamOne;
    std::streambuf* coutBufferOne = std::cout.rdbuf(outStreamOne.rdbuf());
    Person Jerome ("Jerome", "can only fight for 5 minutes", "MMA fighter");
    Display dis;
    dis.backstory(Jerome);

    std::cout.rdbuf(coutBufferOne);

    // Define the expected backstory string
    std::string expectedBackstory = "\nHi Jerome! Hope you are ready for some tough challenges. A character skill that you carry is your ability to knock people out with one punch. When you were a child, you were bullied a lot as a kid. Your parents signed you up for MMA classes to teach you self defense, and now you can really fight! Now you and the people in your class must exit the campus together to survive.\nIf you need a reminder of choices you have made, character information, or progress type (#)\n";
    
    // Compare the output to the expected string
    EXPECT_EQ(outStreamOne.str(), expectedBackstory);
}
TEST(Backstory, testCassidy) {
    // Redirect cout to stringstream for FunctionOne
    std::ostringstream outStreamOne;
    std::streambuf* coutBufferOne = std::cout.rdbuf(outStreamOne.rdbuf());
    Person Cassidy ("Cassidy", "has a bad attitude", "strength");
    Display dis;
    dis.backstory(Cassidy);

    std::cout.rdbuf(coutBufferOne);

    // Define the expected backstory string
    std::string expectedBackstory = "\nHi Cassidy! Hope you are ready for some tough challenges. A character skill that you carry is your strength! When you were a child, you would work in the ice cream parlor every summer to make some money and with every scoop that you scooped, you gained a lot of muscle. Now you can bench over 250lbs! Now you and the people in your class must exit the campus together to survive.\nIf you need a reminder of choices you have made, character information, or progress type (#)\n";

    // Compare the output to the expected string
    EXPECT_EQ(outStreamOne.str(), expectedBackstory);
}
TEST(Backstory, testDrBrown) {
    // Redirect cout to stringstream for FunctionOne
    std::ostringstream outStreamOne;
    std::streambuf* coutBufferOne = std::cout.rdbuf(outStreamOne.rdbuf());
    Person DrBrown ("Dr.Brown", "can not run fast", "fire making glasses");
    Display dis;
    dis.backstory(DrBrown);

    std::cout.rdbuf(coutBufferOne);

    // Define the expected backstory string
    std::string expectedBackstory = "\nHi Dr.Brown! Hope you are ready for some tough challenges. A character skill that you carry is your glasses! When you were a child, you would play with your glasses and the sun because you could start fires with the right angle and shine light in other people’s faces! However, you are a little bit out of practice since you have not played with your glasses since you became a professor. Now you and the people in your class must exit the campus together to survive.\nIf you need a reminder of choices you have made, character information, or progress type (#)\n";

    // Compare the output to the expected string
    EXPECT_EQ(outStreamOne.str(), expectedBackstory);
}
TEST(Backstory, testJessie) {
    // Redirect cout to stringstream for FunctionOne
    std::ostringstream outStreamOne;
    std::streambuf* coutBufferOne = std::cout.rdbuf(outStreamOne.rdbuf());
    Person Jessie ("Jessie", "very clumsy", "fast runner");
    Display dis;
    dis.backstory(Jessie);

    std::cout.rdbuf(coutBufferOne);

    // Define the expected backstory string
    std::string expectedBackstory = "\nHi Jessie! Hope you are ready for some tough challenges. A character skill that you carry is your speed! When you were a child, you did not have a lot of money growing up, so you would steal cans of soup from the supermarket and run back home to make sure that you were not caught by the guards. With your practice in running, you were able to become a track star and set the school record for fastest sprinter. Now you and the people in your class must exit the campus together to survive.\nIf you need a reminder of choices you have made, character information, or progress type (#)\n";
    // Compare the output to the expected string
    EXPECT_EQ(outStreamOne.str(), expectedBackstory);
}
TEST(Backstory, testRyan) {
    // Redirect cout to stringstream for FunctionOne
    std::ostringstream outStreamOne;
    std::streambuf* coutBufferOne = std::cout.rdbuf(outStreamOne.rdbuf());
    Person Ryan ("Ryan", "arm is injured in a cast", "good manipulator");
    Display dis;
    dis.backstory(Ryan);

    std::cout.rdbuf(coutBufferOne);

    // Define the expected backstory string
    std::string expectedBackstory = 
        "\nHi Ryan! Hope you are ready for some tough challenges. A character skill that you carry is your ability to manipulate people! When you were a child, your parents got divorced and got you a lot of gifts to make up for it. Eventually you learned to manipulate them to get any gift that you wanted. With this skill of manipulation, you became very popular in school and learned how to manipulate the people in school! Now you and the people in your class must exit the campus together to survive.\nIf you need a reminder of choices you have made, character information, or progress type (#)\n";

    // Compare the output to the expected string
    EXPECT_EQ(outStreamOne.str(), expectedBackstory);
}
//------------------------------------------------(Event 1)-----------------------------------------------------------
TEST(Event1, GretaChoiceW) {
    Game game;
    Person person("Greta", "can not see without glasses", "good lock picker");
    Display display;

    // Simulate user input for option 'W'
    std::istringstream input("W\n");
    std::cin.rdbuf(input.rdbuf());

    // Capture the output
    std::ostringstream output;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

    // Execute the event3 function
    game.event1(person, display);

    // Restore the original buffer for std::cout
    std::cout.rdbuf(oldCoutBuffer);

    // Verify the prompt
    std::string expectedPrompt = "When you begin to run out of the classroom and into the hallway you notice a hoard of zombies. You are backed against a corner. You notice that you are backed against the janitors closet. You enter the closest with all your classmates to hide from the zombies. What do you want to do now?\n";
    EXPECT_TRUE(output.str().find(expectedPrompt) != std::string::npos);

    // Verify the options displayed
    std::vector<std::string> expectedOptions = {
        "(W) Wait for the zombies to leave and then exit the janitors closet",
        "(S) Use the supplies in the closet as a weapon against the zombies",
        "(Z) Use your skills against the zombies"
    };
    for (const auto& option : expectedOptions) {
        EXPECT_TRUE(output.str().find(option) != std::string::npos);
    }
}
TEST(Event1, CassidyChoiceJ) {
    Game game;
    Person person("Cassidy", "has a bad attitude", "strength");
    Display display;

    // Simulate user input for option 'J'
    std::istringstream input("J\n");
    std::cin.rdbuf(input.rdbuf());

    // Capture the output
    std::ostringstream output;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

    // Execute the event3 function
    game.event1(person, display);

    // Restore the original buffer for std::cout
    std::cout.rdbuf(oldCoutBuffer);

    // Verify the prompt
    std::string expectedPrompt = "When you begin to run out of the classroom and into the hallway you notice a hoard of zombies. You are backed against a corner. You notice that you are backed against the janitors closet. You enter the closest with all your classmates to hide from the zombies. What do you want to do now?\n";
    EXPECT_TRUE(output.str().find(expectedPrompt) != std::string::npos);

    // Verify the options displayed
    std::vector<std::string> expectedOptions = {
        "(Z) Use your skills against the zombies",
        "(W) Wait for the zombies to leave and then exit the janitors closet",
        "(J) Ask Jerome to go out and knock out all the zombies"
    };
    for (const auto& option : expectedOptions) {
        EXPECT_TRUE(output.str().find(option) != std::string::npos);
    }
}
TEST(Event1, JessieChoiceR) {
    Game game;
    Person person("Jessie", "very clumsy", "fast runner");
    Display display;

    // Simulate user input for option 'R'
    std::istringstream input("R\n");
    std::cin.rdbuf(input.rdbuf());

    // Capture the output
    std::ostringstream output;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

    // Execute the event3 function
    game.event1(person, display);

    // Restore the original buffer for std::cout
    std::cout.rdbuf(oldCoutBuffer);

    // Verify the prompt
    std::string expectedPrompt = "When you begin to run out of the classroom and into the hallway you notice a hoard of zombies. You are backed against a corner. You notice that you are backed against the janitors closet. You enter the closest with all your classmates to hide from the zombies. What do you want to do now?\n";
    EXPECT_TRUE(output.str().find(expectedPrompt) != std::string::npos);

    // Verify the options displayed
    std::vector<std::string> expectedOptions = {
        "(Z) Use your skills against the zombies",
        "(R) Ask Ryan to go talk to the zombies and manipulate them into letting you all go",
        "(W) Wait for the zombies to leave and then exit the janitors closet"
    };
    for (const auto& option : expectedOptions) {
        EXPECT_TRUE(output.str().find(option) != std::string::npos);
    }
}
TEST(Event1, DrBrownChoiceC) {
    Game game;
    Person person("Dr.Brown", "can not run fast", "fire making glasses");
    Display display;

    // Simulate user input for option 'C'
    std::istringstream input("C\n");
    std::cin.rdbuf(input.rdbuf());

    // Capture the output
    std::ostringstream output;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

    // Execute the event3 function
    game.event1(person, display);

    // Restore the original buffer for std::cout
    std::cout.rdbuf(oldCoutBuffer);

    // Verify the prompt
    std::string expectedPrompt = "When you begin to run out of the classroom and into the hallway you notice a hoard of zombies. You are backed against a corner. You notice that you are backed against the janitors closet. You enter the closest with all your classmates to hide from the zombies. What do you want to do now?\n";
    EXPECT_TRUE(output.str().find(expectedPrompt) != std::string::npos);

    // Verify the options displayed
    std::vector<std::string> expectedOptions = {
        "(W) Wait for the zombies to leave and then exit the janitors closet",
        "(Z) Use your skills against the zombies",
        "(C) Ask Cassidy to lift throw heavy buckets from the closest onto the zombies"
    };
    for (const auto& option : expectedOptions) {
        EXPECT_TRUE(output.str().find(option) != std::string::npos);
    }
}
//------------------------------------------------(Event 2)-----------------------------------------------------------
TEST(Event2, GretaChoiceH) {
    Game game;
    Person person("Greta", "can not see without glasses", "good lock picker");
    Display display;

    // Simulate user input for option 'H'
    std::istringstream input("H\n");
    std::cin.rdbuf(input.rdbuf());

    // Capture the output
    std::ostringstream output;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

    // Execute the event3 function
    game.event2(person, display);

    // Restore the original buffer for std::cout
    std::cout.rdbuf(oldCoutBuffer);

    // Verify the prompt
    std::string expectedPrompt = "Nice choice, you made it out of the janitor’s closet! You continue to walk towards the exit of the building. Right before you open the door you notice a bunch of zombies walking around the campus. What do you want to do: \n";
    EXPECT_TRUE(output.str().find(expectedPrompt) != std::string::npos);

    // Verify the options displayed
    std::vector<std::string> expectedOptions = {
        "(H) Hide in the building until there is only a little bit of zombies outside",
        "(J) Ask Jerome to go outside and use his MMA skills to fight the zombies",
        "(Z) Use your skills against the zombies"
    };
    for (const auto& option : expectedOptions) {
        EXPECT_TRUE(output.str().find(option) != std::string::npos);
    }
}
TEST(Event2, DrBrownChoiceR) {
    Game game;
    Person person("Dr.Brown", "can not run fast", "fire making glasses");
    Display display;

    // Simulate user input for option 'R'
    std::istringstream input("R\n");
    std::cin.rdbuf(input.rdbuf());

    // Capture the output
    std::ostringstream output;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

    // Execute the event3 function
    game.event2(person, display);

    // Restore the original buffer for std::cout
    std::cout.rdbuf(oldCoutBuffer);

    // Verify the prompt
    std::string expectedPrompt = "Nice choice, you made it out of the janitor’s closet! You continue to walk towards the exit of the building. Right before you open the door you notice a bunch of zombies walking around the campus. What do you want to do: \n";
    EXPECT_TRUE(output.str().find(expectedPrompt) != std::string::npos);

    // Verify the options displayed
    std::vector<std::string> expectedOptions = {
        "(W) Wait for the zombies to leave and then exit the building",
        "(Z) Use your skills against the zombies",
        "(R) Ask Ryan to manipulate the zombies into letting all of you go"
    };
    for (const auto& option : expectedOptions) {
        EXPECT_TRUE(output.str().find(option) != std::string::npos);
    }
}
TEST(Event2, CassidyChoiceM) {
    Game game;
    Person person("Cassidy", "has a bad attitude", "strength");
    Display display;

    // Simulate user input for option 'M'
    std::istringstream input("M\n");
    std::cin.rdbuf(input.rdbuf());

    // Capture the output
    std::ostringstream output;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

    // Execute the event3 function
    game.event2(person, display);

    // Restore the original buffer for std::cout
    std::cout.rdbuf(oldCoutBuffer);

    // Verify the prompt
    std::string expectedPrompt = "Nice choice, you made it out of the janitor’s closet! You continue to walk towards the exit of the building. Right before you open the door you notice a bunch of zombies walking around the campus. What do you want to do: \n";
    EXPECT_TRUE(output.str().find(expectedPrompt) != std::string::npos);

    // Verify the options displayed
    std::vector<std::string> expectedOptions = {
        "(Z) Use your skills against the zombies",
        "(M) Carry a mirror with you so every time a zombie comes near you, they only see their own reflection",
        "(D) Dig a tunnel underground to get out of the building without getting attacked by zombies"
    };
    for (const auto& option : expectedOptions) {
        EXPECT_TRUE(output.str().find(option) != std::string::npos);
    }
}
TEST(Event2, DrBrownChoiceW) {
    Game game;
    Person person("Dr.Brown", "can not run fast", "fire making glasses");
    Display display;

    // Simulate user input for option 'W'
    std::istringstream input("W\n");
    std::cin.rdbuf(input.rdbuf());

    // Capture the output
    std::ostringstream output;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

    // Execute the event3 function
    game.event2(person, display);

    // Restore the original buffer for std::cout
    std::cout.rdbuf(oldCoutBuffer);

    // Verify the prompt
    std::string expectedPrompt = "Nice choice, you made it out of the janitor’s closet! You continue to walk towards the exit of the building. Right before you open the door you notice a bunch of zombies walking around the campus. What do you want to do: \n";
    EXPECT_TRUE(output.str().find(expectedPrompt) != std::string::npos);

    // Verify the options displayed
    std::vector<std::string> expectedOptions = {
        "(W) Wait for the zombies to leave and then exit the building",
        "(Z) Use your skills against the zombies",
        "(R) Ask Ryan to manipulate the zombies into letting all of you go"
    };
    for (const auto& option : expectedOptions) {
        EXPECT_TRUE(output.str().find(option) != std::string::npos);
    }
}
//------------------------------------------------(Event 3)-----------------------------------------------------------
TEST(Event3, GretaChoiceB) {
    Game game;
    Person person("Greta", "can not see without glasses", "good lock picker");
    Display display;

    // Simulate user input for option 'B'
    std::istringstream input("B\n");
    std::cin.rdbuf(input.rdbuf());

    // Capture the output
    std::ostringstream output;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

    // Execute the event3 function
    game.event3(person, display);

    // Restore the original buffer for std::cout
    std::cout.rdbuf(oldCoutBuffer);

    // Verify the prompt
    std::string expectedPrompt = "Nice choice! You made it outside of the building! You decide to go through the cafeteria to choose the shortest path to get off the campus as fast as possible. When you enter the cafeteria you see that the building is empty. You and your classmates enter the main hall and the door closes behind you. You notice a knife on the floor and pick it up for protection. You walk across the hall and try to open the door behind you but you can not! What do you want to do now?\n";
    EXPECT_TRUE(output.str().find(expectedPrompt) != std::string::npos);

    // Verify the options displayed
    std::vector<std::string> expectedOptions = {
        "(B) Use the butter in the cafeteria to make the door lock slippery",
        "(C) Ask Cassidy to break the door down",
        "(S) Use your skill against the door"
    };
    for (const auto& option : expectedOptions) {
        EXPECT_TRUE(output.str().find(option) != std::string::npos);
    }

    // Verify the person has the knife weapon
    std::vector<std::string> expectedWeapons = {"knife"};
    std::vector<std::string> actualWeapons;
    actualWeapons.push_back("knife");
    EXPECT_EQ(actualWeapons, expectedWeapons);
}

TEST(Event3, RyanChoiceZ) {
    Game game;
    Person person("Ryan", "arm is injured in a cast", "good manipulator");
    Display display;

    // Simulate user input for option 'C'
    std::istringstream input("Z\n");
    std::cin.rdbuf(input.rdbuf());

    // Capture the output
    std::ostringstream output;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

    // Execute the event3 function
    game.event3(person, display);

    // Restore the original buffer for std::cout
    std::cout.rdbuf(oldCoutBuffer);

    // Verify the prompt
    std::string expectedPrompt = "Nice choice! You made it outside of the building! You decide to go through the cafeteria to choose the shortest path to get off the campus as fast as possible. When you enter the cafeteria you see that the building is empty. You and your classmates enter the main hall and the door closes behind you. You notice a knife on the floor and pick it up for protection. You walk across the hall and try to open the door behind you but you can not! What do you want to do now?\n";
    EXPECT_TRUE(output.str().find(expectedPrompt) != std::string::npos);

    // Verify the options displayed
    std::vector<std::string> expectedOptions = {
        "(Z) Wait for the zombies to come break the door",
        "(G) Ask Greta to open the door",
        "(S) Use your skill against the door"
    };
    for (const auto& option : expectedOptions) {
        EXPECT_TRUE(output.str().find(option) != std::string::npos);
    }

    // Verify the person has the knife weapon
    std::vector<std::string> expectedWeapons = {"knife"};
    std::vector<std::string> actualWeapons;
    actualWeapons.push_back("knife");
    EXPECT_EQ(actualWeapons, expectedWeapons);
}
TEST(Event3, CassidyChoiceT) {
    Game game;
    Person person("Cassidy", "has a bad attitude", "strength");
    Display display;

    // Simulate user input for option 'C'
    std::istringstream input("T\n");
    std::cin.rdbuf(input.rdbuf());

    // Capture the output
    std::ostringstream output;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

    // Execute the event3 function
    game.event3(person, display);

    // Restore the original buffer for std::cout
    std::cout.rdbuf(oldCoutBuffer);

    // Verify the prompt
    std::string expectedPrompt = "Nice choice! You made it outside of the building! You decide to go through the cafeteria to choose the shortest path to get off the campus as fast as possible. When you enter the cafeteria you see that the building is empty. You and your classmates enter the main hall and the door closes behind you. You notice a knife on the floor and pick it up for protection. You walk across the hall and try to open the door behind you but you can not! What do you want to do now?\n";
    EXPECT_TRUE(output.str().find(expectedPrompt) != std::string::npos);

    // Verify the options displayed
    std::vector<std::string> expectedOptions = {
        "(S) Use your skill against the door",
        "(T) Dig a tunnel underground to get out of the cafeteria",
        "(G) Ask Greta to open the door"
    };
    for (const auto& option : expectedOptions) {
        EXPECT_TRUE(output.str().find(option) != std::string::npos);
    }

    // Verify the person has the knife weapon
    std::vector<std::string> expectedWeapons = {"knife"};
    std::vector<std::string> actualWeapons;
    actualWeapons.push_back("knife");
    EXPECT_EQ(actualWeapons, expectedWeapons);
}
//------------------------------------------------(Event 4)-----------------------------------------------------------
TEST(Event4, GretaChoiceS) {
    Game game;
    Person person("Greta", "can not see without glasses", "good lock picker");
    Display display;

    // Simulate user input for option 'S'
    std::istringstream input("S\n");
    std::cin.rdbuf(input.rdbuf());

    // Capture the output
    std::ostringstream output;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

    // Execute the event3 function
    game.event4(person, display);

    // Restore the original buffer for std::cout
    std::cout.rdbuf(oldCoutBuffer);

    // Verify the prompt
    std::string expectedPrompt = "Nice choice, you made it out of the cafeteria! You only have to make it through the science lab and the parking lot to exit the campus. You walk by the science lab and notice a shortcut through the lab. You decide to take the shortcut and enter the lab. When you enter the lab you find a gun on the floor with three bullets. You pick it up for safety. As you are about to exit the lab, zombies come out from the corner of the lab! What do you want to do:\n";
    EXPECT_TRUE(output.str().find(expectedPrompt) != std::string::npos);

    // Verify the options displayed
    std::vector<std::string> expectedOptions = {
        "(U) Use the gun/knife to kill the zombies", 
        "(S) Ask Cassidy to throw science equipment at the zombies",
        "(R) Run away to the other side of the lab"
    };
    for (const auto& option : expectedOptions) {
        EXPECT_TRUE(output.str().find(option) != std::string::npos);
    }

    // Verify the person has the gun weapon
    std::vector<std::string> expectedWeapons = {"gun"};
    std::vector<std::string> actualWeapons;
    actualWeapons.push_back("gun");
    EXPECT_EQ(actualWeapons, expectedWeapons);
}
TEST(Event4, GretaChoiceR) {
    Game game;
    Person person("Greta", "can not see without glasses", "good lock picker");
    Display display;

    // Simulate user input for option 'R'
    std::istringstream input("R\n");
    std::cin.rdbuf(input.rdbuf());

    // Capture the output
    std::ostringstream output;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

    // Execute the event3 function
    game.event4(person, display);

    // Restore the original buffer for std::cout
    std::cout.rdbuf(oldCoutBuffer);

    // Verify the prompt
    std::string expectedPrompt = "Nice choice, you made it out of the cafeteria! You only have to make it through the science lab and the parking lot to exit the campus. You walk by the science lab and notice a shortcut through the lab. You decide to take the shortcut and enter the lab. When you enter the lab you find a gun on the floor with three bullets. You pick it up for safety. As you are about to exit the lab, zombies come out from the corner of the lab! What do you want to do:\n";
    EXPECT_TRUE(output.str().find(expectedPrompt) != std::string::npos);

    // Verify the options displayed
    std::vector<std::string> expectedOptions = {
        "(U) Use the gun/knife to kill the zombies", 
        "(S) Ask Cassidy to throw science equipment at the zombies",
        "(R) Run away to the other side of the lab"
    };
    for (const auto& option : expectedOptions) {
        EXPECT_TRUE(output.str().find(option) != std::string::npos);
    }

    // Verify the person has the gun weapon
    std::vector<std::string> expectedWeapons = {"gun"};
    std::vector<std::string> actualWeapons;
    actualWeapons.push_back("gun");
    EXPECT_EQ(actualWeapons, expectedWeapons);
}
TEST(Event4, CassidyChoiceH) {
    Game game;
    Person person("Cassidy", "has a bad attitude", "strength");
    Display display;

    // Simulate user input for option 'H'
    std::istringstream input("H\n");
    std::cin.rdbuf(input.rdbuf());

    // Capture the output
    std::ostringstream output;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

    // Execute the event3 function
    game.event4(person, display);

    // Restore the original buffer for std::cout
    std::cout.rdbuf(oldCoutBuffer);

    // Verify the prompt
    std::string expectedPrompt = "Nice choice, you made it out of the cafeteria! You only have to make it through the science lab and the parking lot to exit the campus. You walk by the science lab and notice a shortcut through the lab. You decide to take the shortcut and enter the lab. When you enter the lab you find a gun on the floor with three bullets. You pick it up for safety. As you are about to exit the lab, zombies come out from the corner of the lab! What do you want to do:\n";
    EXPECT_TRUE(output.str().find(expectedPrompt) != std::string::npos);

    // Verify the options displayed
    std::vector<std::string> expectedOptions = {
        "(U) Use the gun/knife to kill the zombies", 
        "(P) Create a poison in the lab to kill the zombies with",
        "(H) Act like a statue and hope the zombies will not see you"
    };
    for (const auto& option : expectedOptions) {
        EXPECT_TRUE(output.str().find(option) != std::string::npos);
    }

    // Verify the person has the gun weapon
    std::vector<std::string> expectedWeapons = {"gun"};
    std::vector<std::string> actualWeapons;
    actualWeapons.push_back("gun");
    EXPECT_EQ(actualWeapons, expectedWeapons);
}

//------------------------------------------------(Event 5)-----------------------------------------------------------


TEST(Event5, Dr_BrownChoiceF) {
    Game game;
    Person person ("Dr.Brown", "can not run fast", "fire making glasses");
    Display display;

    // Simulate user input for option 'F'
    std::istringstream input("F\n");
    std::cin.rdbuf(input.rdbuf());

    // Capture the output
    std::ostringstream output;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

    // Execute the event3 function
    game.event5(person, display);

    // Restore the original buffer for std::cout
    std::cout.rdbuf(oldCoutBuffer);

    // Verify the prompt
    std::string expectedPrompt = "Nice choice! You made it outside of the lab! All you have to do is make it through the parking lot with your classmates. You can see the exit within a few feet. You step one foot on the pavement and find that the zombies have set up camp in the parking lot. This is where the zombies live! You have no choice but to go through the parking lot! What do you want to do now: ";
    EXPECT_TRUE(output.str().find(expectedPrompt) != std::string::npos);

    // Verify the options displayed
    std::vector<std::string> expectedOptions = {
        "(Z) Use your skills against the zombies",
        "(F) Ask Jerome to fight all the zombies to make it out of the parking lot"
    };
    for (const auto& option : expectedOptions) {
        EXPECT_TRUE(output.str().find(option) != std::string::npos);
    }
}

TEST(Event5, GretaChoiceR) {
    Game game;
    Person person ("Greta", "can not see without glasses", "good lock picker");
    Display display;

    // Simulate user input for option 'R'
    std::istringstream input("R\n");
    std::cin.rdbuf(input.rdbuf());

    // Capture the output
    std::ostringstream output;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

    // Execute the event3 function
    game.event5(person, display);

    // Restore the original buffer for std::cout
    std::cout.rdbuf(oldCoutBuffer);

    // Verify the prompt
    std::string expectedPrompt = "Nice choice! You made it outside of the lab! All you have to do is make it through the parking lot with your classmates. You can see the exit within a few feet. You step one foot on the pavement and find that the zombies have set up camp in the parking lot. This is where the zombies live! You have no choice but to go through the parking lot! What do you want to do now: ";
    EXPECT_TRUE(output.str().find(expectedPrompt) != std::string::npos);

    // Verify the options displayed
    std::vector<std::string> expectedOptions = {
        "(R) Ask Ryan to manipulate all the zombies into letting everyone go",
        "(Z) Use your skills against the zombies"
    };
    for (const auto& option : expectedOptions) {
        EXPECT_TRUE(output.str().find(option) != std::string::npos);
    }
}

TEST(Event5, CassidyChoiceJ) {
    Game game;
    Person person ("Cassidy", "has a bad attitude", "strength");
    Display display;

    // Simulate user input for option 'J'
    std::istringstream input("J\n");
    std::cin.rdbuf(input.rdbuf());

    // Capture the output
    std::ostringstream output;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

    // Execute the event3 function
    game.event5(person, display);

    // Restore the original buffer for std::cout
    std::cout.rdbuf(oldCoutBuffer);

    // Verify the prompt
    std::string expectedPrompt = "Nice choice! You made it outside of the lab! All you have to do is make it through the parking lot with your classmates. You can see the exit within a few feet. You step one foot on the pavement and find that the zombies have set up camp in the parking lot. This is where the zombies live! You have no choice but to go through the parking lot! What do you want to do now: ";
    EXPECT_TRUE(output.str().find(expectedPrompt) != std::string::npos);

    // Verify the options displayed
    std::vector<std::string> expectedOptions = {
        "(B) Ask Dr.Brown to set a fire as a distraction",
        "(J) Ask Jessie to run really fast and get help"
    };
    for (const auto& option : expectedOptions) {
        EXPECT_TRUE(output.str().find(option) != std::string::npos);
    }
}

//------------------------------------------------(Die)-----------------------------------------------------------
TEST(DieFunction, Event1) {
    Display display;
    Game game;

    std::ostringstream oss;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(oss.rdbuf());

    game.die(display, 1);

    std::cout.rdbuf(oldCoutBuffer);

    EXPECT_EQ(oss.str(), "You were unsuccessful. Your decision led the zombies into the janitor's closet and they eventually caught up to you. You and your classmates turned into zombies and the zombie apocalypse has taken over the world. You lose!\n\nEnd of game. Would you like to play again or quit?\n(Q) quit\n(R) restart\n");
}
TEST(DieFunction, Event2) {
    Display display;
    Game game;

    std::ostringstream oss;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(oss.rdbuf());

    game.die(display, 2);

    std::cout.rdbuf(oldCoutBuffer);

    EXPECT_EQ(oss.str(), "You were unsuccessful. Your decision led the zombies into the building and they eventually caught up to you. You and your classmates turned into zombies and the zombie apocalypse has taken over the world. You lose!\n\nEnd of game. Would you like to play again or quit?\n(Q) quit\n(R) restart\n");
}
TEST(DieFunction, Event3) {
    Display display;
    Game game;

    std::ostringstream oss;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(oss.rdbuf());

    game.die(display, 3);

    std::cout.rdbuf(oldCoutBuffer);

    EXPECT_EQ(oss.str(), "You were unsuccessful. Your decision led the zombies into the cafeteria and they eventually caught up to you. You and your classmates turned into zombies and the zombie apocalypse has taken over the world. You lose!\n\nEnd of game. Would you like to play again or quit?\n(Q) quit\n(R) restart\n");
}
TEST(DieFunction, Event4) {
    Display display;
    Game game;

    std::ostringstream oss;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(oss.rdbuf());

    game.die(display, 4);

    std::cout.rdbuf(oldCoutBuffer);

    EXPECT_EQ(oss.str(), "You were unsuccessful. Your decision led the zombies into the cafeteria and they eventually caught up to you. You and your classmates turned into zombies and the zombie apocalypse has taken over the world. You lose!\n\nEnd of game. Would you like to play again or quit?\n(Q) quit\n(R) restart\n");
}
TEST(DieFunction, Event5) {
    Display display;
    Game game;

    std::ostringstream oss;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(oss.rdbuf());

    game.die(display, 5);

    std::cout.rdbuf(oldCoutBuffer);

    EXPECT_EQ(oss.str(), "You were unsuccessful. Your decision led the zombies to attack you from the parking lot. You and your classmates turned into zombies and the zombie apocalypse has taken over the world. You lose!\n\nEnd of game. Would you like to play again or quit?\n(Q) quit\n(R) restart\n");
}

// Test cases for Progress::menu
TEST(ProgressTest, MenuChoiceI) {
    Person person ("Ryan", "arm is injured in a cast", "good manipulator");
    Display display;
    Progress progress;

    // Redirect std::cin
    std::stringstream input("I\nQ\n");
    std::streambuf* oldCin = std::cin.rdbuf(input.rdbuf());

    // Redirect std::cout
    std::stringstream output;
    std::streambuf* oldCout = std::cout.rdbuf(output.rdbuf());

    // Call the menu function
    progress.menu(person, display);

    // Restore std::cin and std::cout
    std::cin.rdbuf(oldCin);
    std::cout.rdbuf(oldCout);

    std::string expectedOutput =
        "This is the menu screen. What would you like to do:\n (I) Character Information\n (P) Game Progress \n (Q) Quit and return to game\n\n"
        "Your Character's name is: Ryan\n"
        "Your Character's weakness is: arm is injured in a cast\n"
        "Your Character's strength is: good manipulator\n"
        "Your Character's path is: \n"
        "This is the menu screen. What would you like to do:\n (I) Character Information\n (P) Game Progress \n (Q) Quit and return to game\n\n"
        "What choice would you like to make for event listed above: \n";

    EXPECT_EQ(output.str(), expectedOutput);
}

TEST(ProgressTest, MenuChoiceP) {
    Person person ("Ryan", "arm is injured in a cast", "good manipulator");
    Display display;
    Progress progress;

    // Redirect std::cin
    std::stringstream input("P\nQ\n");
    std::streambuf* oldCin = std::cin.rdbuf(input.rdbuf());

    // Redirect std::cout
    std::stringstream output;
    std::streambuf* oldCout = std::cout.rdbuf(output.rdbuf());

    // Call the menu function
    progress.menu(person, display);

    // Restore std::cin and std::cout
    std::cin.rdbuf(oldCin);
    std::cout.rdbuf(oldCout);

    std::string expectedOutput =
        "This is the menu screen. What would you like to do:\n (I) Character Information\n (P) Game Progress \n (Q) Quit and return to game\n\n"
        "0%\n"
        "This is the menu screen. What would you like to do:\n (I) Character Information\n (P) Game Progress \n (Q) Quit and return to game\n\n"
        "What choice would you like to make for event listed above: \n";

    EXPECT_EQ(output.str(), expectedOutput);
}

TEST(ProgressTest, MenuChoiceQ) {
    Person person("Ryan", "arm is injured in a cast", "good manipulator");
    Display display;
    Progress progress;

    // Redirect std::cin
    std::stringstream input("Q\n");
    std::streambuf* oldCin = std::cin.rdbuf(input.rdbuf());

    // Redirect std::cout
    std::stringstream output;
    std::streambuf* oldCout = std::cout.rdbuf(output.rdbuf());

    // Call the menu function
    progress.menu(person, display);

    // Restore std::cin and std::cout
    std::cin.rdbuf(oldCin);
    std::cout.rdbuf(oldCout);

    std::string expectedOutput =
        "This is the menu screen. What would you like to do:\n (I) Character Information\n (P) Game Progress \n (Q) Quit and return to game\n\n"
        "What choice would you like to make for event listed above: \n";

    EXPECT_EQ(output.str(), expectedOutput);
}