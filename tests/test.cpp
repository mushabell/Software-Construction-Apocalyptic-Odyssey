#include "gtest/gtest.h"
#include "../header/Display.h"
#include "../header/Game.h"
#include "../header/Person.h"
#include "../header/Progress.h"



// TEST(PersonTests, testKnife) {
//     Person testKnife("Dr.Brown", "..", "..");
//     testKnife.updateKnife(true);
//     EXPECT_EQ (testKnife.getKnife(), true);
// }

// TEST(PersonTests, testGun) {
//     Person testKnife("Dr.Brown", "..", "..");
//     testKnife.updateGun(true);
//     EXPECT_EQ (testKnife.getGun(), true);
// }

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
        "Hi Greta! Hope you are ready for some tough challenges. "
        "A character skill that you carry is your ability to pick locks. "
        "When you were a child, your parents would lock your favorite candy in the top cabinet with a lock. "
        "With a lot of practice, you were able to figure out how to pick the lock and can pick any lock that you want now! "
        "Now you and the people in your class must exit the campus together to survive.\n";

    // Compare the output to the expected string
    EXPECT_EQ(outStreamOne.str(), expectedBackstory);
}

// TEST(TriangleTests, testArea){
//     Triangle area(5, 2, 4);
//     EXPECT_DOUBLE_EQ(area.getArea(), 40);
// }

// TEST(TriangleTests, testIsosceles){
//     Triangle isosceles(5, 5, 5);
//     EXPECT_EQ(isosceles.getKind(), Triangle::Kind::EQUILATERAL);
// }

// TEST(TriangleTests, NegativeSidelength){
//     EXPECT_DEATH(Triangle t(5, 3, 5), "Invalid input given.");
// }

// TEST(TriangleTests, TestIsEquilateral){
//     Triangle equilateral(5, 5, 5);

//     EXPECT_TRUE(equilateral.isEquilateral());
// }

// TEST(TriangleTests, ScaleneTriangle) {
//   Triangle Scalene(7, 6, 4);
//   EXPECT_EQ(Scalene.getKind(), Triangle::Kind::SCALENE);
// }

// TEST(TriangleTests, TestingGetPerimeter){
//     Triangle t(6, 5, 5);
//     EXPECT_EQ(t.getPerimeter(), 16);
// }

// TEST(HailstoneTests, testNumber0) {
//     int number = 0;
//     EXPECT_FALSE(satisfiesHailstone(number));
// }

// TEST(HailstoneTests, testNumber1) {
//     int number = 1;
//     EXPECT_TRUE(satisfiesHailstone(number));
// }

// TEST(HailstoneTests, testNumberEven) {
//     int number = 4;
//     EXPECT_TRUE(satisfiesHailstone(number));
// }

// TEST(HailstoneTests, testNumberOdd) {
//     int number = 5;
//     EXPECT_TRUE(satisfiesHailstone(number));
// }

// class RankListStub : public RankList {
//     private:
//         std::vector<std::string> names = { "Ambard", "Bluebard", "Cuebard", "Duebard", "Eobard"};
//         int currentNameIndex;

//     public:
//         RankListStub() { currentNameIndex = 0; }
//         std::string getNext() override {
//             return names.at(currentNameIndex++);
//         }
//         std::vector<std::string> getNames() { return names; }
// };

// class MockAwardCeremonyActions : public AwardCeremonyActions {
//     public:
//         MOCK_METHOD(void, playAnthem, (), (override));
//         MOCK_METHOD(void, awardBronze, (std::string), (override));
//         MOCK_METHOD(void, awardSilver, (std::string), (override));
//         MOCK_METHOD(void, awardGold, (std::string), (override));
//         MOCK_METHOD(void, turnOffTheLightsAndGoHome, (), (override));
// };

// TEST(AwardsTests, PerformAwardCeremony) {
//     MockAwardCeremonyActions mock;
//     RankListStub stub;
//     EXPECT_CALL(mock, playAnthem);
//     EXPECT_CALL(mock, awardBronze("Ambard"));
//     EXPECT_CALL(mock, awardSilver("Bluebard"));
//     EXPECT_CALL(mock, awardGold("Cuebard"));
//     EXPECT_CALL(mock, turnOffTheLightsAndGoHome);

//     performAwardCeremony(stub, mock);
// }
