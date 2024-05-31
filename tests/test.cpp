#include "gtest/gtest.h"
#include "../header/Display.h"
#include "../header/Game.h"
#include "../header/Person.h"
#include "../header/Progress.h"

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
        "Now you and the people in your class must exit the campus together to survive.\n";

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
    std::string expectedBackstory = "\nHi Jerome! Hope you are ready for some tough challenges. A character skill that you carry is your ability to knock people out with one punch. When you were a child, you were bullied a lot as a kid. Your parents signed you up for MMA classes to teach you self defense, and now you can really fight! Now you and the people in your class must exit the campus together to survive.\n";
    
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
    std::string expectedBackstory = "\nHi Cassidy! Hope you are ready for some tough challenges. A character skill that you carry is your strength! When you were a child, you would work in the ice cream parlor every summer to make some money and with every scoop that you scooped, you gained a lot of muscle. Now you can bench over 250lbs! Now you and the people in your class must exit the campus together to survive.\n";

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
    std::string expectedBackstory = "\nHi Dr.Brown! Hope you are ready for some tough challenges. A character skill that you carry is your glasses! When you were a child, you would play with your glasses and the sun because you could start fires with the right angle and shine light in other people’s faces! However, you are a little bit out of practice since you have not played with your glasses since you became a professor. Now you and the people in your class must exit the campus together to survive.\n";

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
    std::string expectedBackstory = "\nHi Jessie! Hope you are ready for some tough challenges. A character skill that you carry is your speed! When you were a child, you did not have a lot of money growing up, so you would steal cans of soup from the supermarket and run back home to make sure that you were not caught by the guards. With your practice in running, you were able to become a track star and set the school record for fastest sprinter. Now you and the people in your class must exit the campus together to survive.\n";
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
        "\nHi Ryan! Hope you are ready for some tough challenges. A character skill that you carry is your ability to manipulate people! When you were a child, your parents got divorced and got you a lot of gifts to make up for it. Eventually you learned to manipulate them to get any gift that you wanted. With this skill of manipulation, you became very popular in school and learned how to manipulate the people in school! Now you and the people in your class must exit the campus together to survive.\n";

    // Compare the output to the expected string
    EXPECT_EQ(outStreamOne.str(), expectedBackstory);
}

// TEST(GameTests, testEvent3_Greta) {
//     Game game;
//     Person person("Greta", "can not see without glasses", "good lock picker");
//     Display display;

//     // Simulate user input for option 'C'
//     std::istringstream input("C\n");
//     std::cin.rdbuf(input.rdbuf());

//     // Capture the output
//     std::ostringstream output;
//     std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

//     // Execute the event3 function
//     game.event3(person, display);

//     // Restore the original buffer for std::cout
//     std::cout.rdbuf(oldCoutBuffer);

//     // Verify the prompt
//     std::string expectedPrompt = "Nice choice! You made it outside of the building! You decide to go through the cafeteria to choose the shortest path to get off the campus as fast as possible. When you enter the cafeteria you see that the building is empty. You and your classmates enter the main hall and the door closes behind you. You notice a knife on the floor and pick it up for protection. You walk across the hall and try to open the door behind you but you can not! What do you want to do now?\n";
//     EXPECT_TRUE(output.str().find(expectedPrompt) != std::string::npos);

//     // Verify the options displayed
//     std::vector<std::string> expectedOptions = {
//         "(B) Use the butter in the cafeteria to make the door lock slippery",
//         "(C) Ask Cassidy to break the door down",
//         "(S) Use your skill against the door"
//     };
//     for (const auto& option : expectedOptions) {
//         EXPECT_TRUE(output.str().find(option) != std::string::npos);
//     }

//     // Verify the person has the knife weapon
//     std::vector<std::string> expectedWeapons = {"knife"};
//     std::vector<std::string> actualWeapons;
//     actualWeapons.push_back("knife");
//     EXPECT_EQ(actualWeapons, expectedWeapons);
// }