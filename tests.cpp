#include "gtest/gtest.h"
#include "lib.h"

TEST(findRoots, expectedTwoRoots) {


EXPECT_EQ(Palendrom("ppoopp"), true);

EXPECT_EQ(Palendrom("iu4rik"), false);

EXPECT_EQ(Palendrom("1234554321"), true);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}