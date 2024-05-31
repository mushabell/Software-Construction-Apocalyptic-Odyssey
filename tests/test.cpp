#include "gtest/gtest.h"
#include "../header/Display.h"
#include "../header/Game.h"
#include "../header/Person.h"
#include "../header/Progress.h"

TEST(DisplayTests, testBackstory) {
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